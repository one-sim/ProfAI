#include <stdio.h>

int main(){

    int totale = 0;
    //conteggio multipli di 3 da 0 a 30
    for (int i = 3; i < 30; i++)
    {
        if(i%3==0){
            totale++;
        }
    }

    int multipli[totale];

    printf("\nsizeof:%d\n",sizeof(multipli)/sizeof(multipli[0]));
    printf("\ntotale:%d\n",totale);

    totale = 0;
    
    //assegnazione multipli ad array e stampa
    for (int i = 3; i < 30; i++)
    {
        if(i%3==0){
            multipli[totale]=i;
            printf("\nmultipli[%d]: %d",totale,multipli[totale]);
            totale++;
        }
    }
    
    //stampa valori
    for (int i = 0; i < sizeof(multipli)/sizeof(multipli[0]); i++)
    {
        for (int j = 0; j < multipli[i]; j++)
        {
            printf("\n%d",multipli[i]);
        }
        
    }
    
}