#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
#include<ctype.h>

// Erwartetes Format <Text><Nummer> bspw., abc123
// Diese Methode hat als return den Wert <Text> und entfernt somit die Nummern
char* entferneEndnummern(char *eingabeMsg, int länge) {
    char *ausgabeMsg = (char*) 
    malloc(sizeof(char)*(länge+1));
    memcpy(ausgabeMsg, eingabeMsg, länge);
    ausgabeMsg[länge] = '\0';
    // Nummern entfernen
    int i = länge-1;
    while (i>=0 && isdigit(ausgabeMsg[i])) {
    ausgabeMsg[i] = '\0';
    i--;
    }
    // return der Ausgabe ohne Nummern
    return ausgabeMsg;
}

int main() {
    printf("Hallo");
    char eingabe[100];
    printf("\nGeben Sie ein Wort mit der Form <Text><Nummer> ein:");
    scanf("%99s", &eingabe);
    printf(entferneEndnummern(eingabe, strlen(eingabe)));
    return 0;
}