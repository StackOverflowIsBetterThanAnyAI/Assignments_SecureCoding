#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int *id_sequenz;
    
    /* Speicherplatz für ein Array mit 3 IDs reservieren*/
    id_sequenz = (int*) malloc(3);
    if (id_sequenz == NULL) exit(1);

    /* Das Array mit den IDs befüllen lassen*/
    int id;
    for(int y=0; y<3; y++)
    {
        printf("\nGeben Sie die %d. vierstellige ID ein: ",y+1);
        scanf("%4d", &id);
        id_sequenz[y]=id;
    }
}
