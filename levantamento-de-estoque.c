#include <stdio.h>
int main(){
    char vinho;
    float total;
    int tinto, branco, rose, fim;
    tinto = 0;
    branco = 0;
    rose = 0;
    fim = 0;
    printf("Digite a inicial de cada vinho do estoque, para acabar digite F\n");
    do{
        scanf("%c", &vinho);
        switch(vinho){
            case 't':
                tinto++;
            break;
            case 'b':
                branco++;
            break;
            case 'r':
                rose++;
            break;
            case 'f':
                total = tinto + branco + rose;
                fim = 1;
            break;
        }
    }while(fim < 1);

    printf("O total de vinho tinto: %.1f %%\n",(tinto/total)*100);
    printf("O total de vinho branco: %.1f %%\n",(branco/total)*100);
    printf("O total de vinho rosê: %.1f %%\n", (rose/total)*100);

    return 0;
}