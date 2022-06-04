#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

char* veraendere_string(char* string)
{
    int a;
    char buf[24];
    strcpy(buf, string);
    //... tue weitere Dinge Beispiel: string umdrehen
    a=strlen(buf);
    for (int i = a-1, j =0;i>=0;i--,j++){
        string[j]=buf[i];
    }
    return string;
}

int main(int argc, char const *argv[])
{
    char satz[100];
    printf("Geben Sie einen beliebigen Satz ein, welcher veraendert werden soll: ");
    scanf("%s",satz);
    printf("Der manpulierte Satz lautet: %s", veraendere_string(satz));
}

    
 char* veraendere_string_verbessert(char* string)
 {
    const size_t LAEN = 100;
    int a;
    char buf[LAEN];
    strncpy(buf, string, LAEN);
    buf [LAEN- 1] = '\0';
    //... tue weitere Dinge Beispiel: string umdrehen
    a=strlen(buf);
    for (int i = a-1, j =0;i>=0;i--,j++){
        string[j]=buf[i];
    }
    return string;
 }   

