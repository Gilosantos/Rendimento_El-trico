/******************************************************************************

Programa para cálculo de rendimento elétrico.
O rendimento é a relação entre a energia liberada e a energia introduzida.
O rendimento elétrico pode ser calculado dividindo a potência de saída pela potência de entrada.
O resultado é exibido em valor percentual.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void tela();//função para cabeçalho

int main()
{
    float ie, is, te, ts, pe, ps, rendimento = 0;
    //printf("\n\nie = %.2f\nis = %.2f\nte = %.2f\nts = %.2f\npe = %.2f\nps = %.2f\nrendimento = %.2f\n\n", ie, is, te, ts, pe, ps, rendimento); //teste inicialização de variáveis
    
    tela();//chamada de função para exibir cabeçalho
    
    //Aquisição de parâmetros de entrada
    do{
    printf("Corrente de entrada: ");
    scanf("%f", &ie);
    //printf("ie = %.2fA\n", ie);//teste leitura corrente de entrada
    printf("Tensão de entrada: ");
    scanf("%f", &te);
    printf("\n");
    //printf("te = %.2fV\n", te);//teste leitura de tensão de entrada
    
    
    //Aquisição de parâmetros de saída
    printf("Corrente de saída: ");
    scanf("%f", &is);
    //printf("is = %.2fA\n", is);//teste leitura corrente de saída
    printf("Tensão de saída: ");
    scanf("%f", &ts);
    //printf("ts = %.2fV\n", ts);//teste leitura de tensão de saída
    
    
    //Cálculo e exibição das potências e rendimento
    system("clear");//limpa a tela
    tela();
    printf("Potência de entrada: %.2fVA\nPotência de saída: %.2fW\n", pe = ie*te, ps = is*ts);
    rendimento = (ps/pe)*100;
    printf("RENDIMENTO: %.2f%%", rendimento);
    if(rendimento>=100)
        printf("\nReveja os valores e tente novamente!\n");//A potência de saída não pode ser maior que a de entrada
    }while(rendimento >=100);
    return 0;
}

void tela()
{
    printf("***********************\n");
    printf("*                     *\n");
    printf("* RENDIMENTO ELETRICO *\n");
    printf("*                     *\n");
    printf("*                     *\n");
    printf("*Autor: Gilson Santos *\n");
    printf("***********************\n\n");
}
