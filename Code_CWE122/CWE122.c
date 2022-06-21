#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 256

int main(int argc, char **argv){ //Argumente für Kommandozeile
    char *buf;
    buf = (char*)malloc(sizeof(char)*BUFSIZE);
    strcpy(buf, argv[1]);
    printf(argv[1]);
}

