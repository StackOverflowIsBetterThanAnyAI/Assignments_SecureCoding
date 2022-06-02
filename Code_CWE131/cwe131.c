#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int *id_sequenz;
    
    /* Speicherplatz für ein Array mit 3 IDs reservieren*/
    id_sequenz = (int*) malloc(3);
    if (id_sequenz == NULL) exit(1);

    /* Das Array mit den IDs befüllen */
    id_sequenz[0] = 13579;
    id_sequenz[1] = 24680;
    id_sequenz[2] = 97531;
}
