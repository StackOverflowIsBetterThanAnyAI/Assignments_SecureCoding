#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int *id_sequence;
    
    /* Speicherplatz für ein Array mit 3 IDs reservieren*/
    id_sequence = (int*) malloc(3);
    if (id_sequence == NULL) exit(1);

    /* Das Array mit den IDs befüllen */
    id_sequence[0] = 13579;
    id_sequence[1] = 24680;
    id_sequence[2] = 97531;
}
