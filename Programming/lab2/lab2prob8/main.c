#include <stdio.h>
#include <stdlib.h>

#include <math.h>

#define g 9.8
int main()
{
    //inicialização do input
    double distancia, velinicial, diametro;

    //pedir input a user
    do {

        printf("Por favor escreva a distancia ao cesto, a velocidade inicial e o diametro do cesto\n");
        if (scanf("%lf %lf %lf", &distancia, &velinicial, &diametro) == 0) {

            printf("INVALID INPUT");
            return -1;

        }
    }
    while (distancia <= 0 || velinicial <= 0 || diametro <= 0);

    //inicializaçao das variaveis a utilizar
    double raio = diametro / 2;
    double angrad = 0, angmax = 0, angmin = 0;

    //inicio do loop que ira comparar a distancia obtida de um certo angulo com a distancia fornecida
    while (angmax == 0 || angmin == 0) {

        // calculo da distancia para o angulo atual
        double distanciascan = velinicial * velinicial * sin(2 * angrad) / g;

        // se ainda nao encontrou o minimo e o valor da distancia esta dentro do fornecido entao temos o angulo minimo
        if (distanciascan >= distancia - raio && distanciascan <= distancia + raio && angmin == 0) {

            angmin = angrad * 180 / M_PI;

        // se ja tem minimo vai ver o primeiro valor fora do cesto e por o anterior como angulo maxim
        } else if (angmin != 0 && distanciascan > distancia + raio && angmax == 0 || angrad >= M_PI / 2 && angmin != 0) {

            angmax = (angrad - 0.0001) * 180 / M_PI;
\
        // se o angulo passou 90 graus sem encontrar nem um minimo e um maximo entao nunca chega ao cesto
        } else if (angmin == 0 && angmax == 0 && angrad > M_PI / 2) {

            printf("O projetil nunca chegara ao cesto.\n");
            return 1;

        }

        //incrementar angulo
        angrad += 0.0001;

    }

    // imprimir o resultado
    printf("O projetil deve ser atirado com um angulo entre %lf e %lf.\n", angmin, angmax);


    return 0;
}
