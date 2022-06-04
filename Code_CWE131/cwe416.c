#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int abrt = 2;
    int groesse = 10;
    bool err = true;
    char* ptr = (char*)malloc (groesse*sizeof(int));
    //... mache etwas mit dem Pointer
    //... rufe evtl einen Fehler hervor -> err=true;
    if (err) 
    {
        abrt = 1;
        free(ptr);
    }
    // ...
    printf("Legen Sie ein Passwort fest, welches aus 4 Zeichen besteht: ");
    char* passwort = (char*)malloc (4*sizeof(char));
    // Passworteingabe
    // Überprüfung der Eingabe
    // Mache etwas mit dem Passwort
    if (abrt==1)
        printf("Operation ist fehlgeschlagen: %s" , ptr);
}

