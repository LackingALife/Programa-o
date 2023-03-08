#include <stdio.h>
#include <stdlib.h>

//definar a funçao
#define nota(valor) (valor < 10 ? ( valor >= 4 ? 'D' : 'E') : (valor >= 14 ? (valor >= 18 ? 'A' : 'B') : 'C'))

int main()
{
    double valor;
    printf("Por favor escreva o valor da sua avaliação\n");
    scanf("%lf", &valor);
    printf("A sua nota é %c.\n", nota(valor));
    return 0;
}
