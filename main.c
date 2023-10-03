#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Pedro Henrique Ferreira Simões 12221BSI222
int ptcia (int x, int n){
    int const a = x;
    if(n>0){
    for(int i=1;i<n;i++){
        x = a*x;
    }
    }
    else if (n==0){
        x = 1;
    }
    else if (n<0){
        for(int i = 1;i<-n;i++){
            x = a*x;
        }
        x = 1/x;
    }
    return x;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    int expo;
    int res;
    printf("Questão 1...\nNúmero:\n");scanf("%d", &num); setbuf(stdin, NULL);
    printf("Expoente:");scanf("%d",&expo); setbuf(stdin, NULL);
    res = ptcia(num,expo);
    printf("O resultado ééé.....\n"); setbuf(stdin, NULL);
    printf("%d", res);
    return 0;
}
