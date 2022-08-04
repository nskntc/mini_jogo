#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_TENTATIVAS 3
#define MIN 0
#define MAX 10

int main() {

    int N;
    int k; //número lido pelo usuário
    int c=1;
    srand(time(0));
    N=rand()%(MAX-MIN+1)+MIN;
    while(1) {
        printf("Digite um número de %d até %d:\n", MIN, MAX);
        printf("Tentativa %d:", c);
        scanf("%d", &k);
        if(k==N) {
            printf("Parabéns, você acertou!\n");
            return 0;
        }
        if(k>N) printf("O número sorteado é menor!\n");
        else printf("O número sorteado é maior\n");
        c++;
        if(c>N_TENTATIVAS) {
            printf("Número de tentativas esgotadas, você perdeu!\n");
            printf("O número sorteado era %d\n", N);
            return 0;
        }
    }
    return 0;
}
