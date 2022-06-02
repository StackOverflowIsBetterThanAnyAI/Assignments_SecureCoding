#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>

// Diese Methode hat als return den Wert eines Arrays. 
// Es wird ein Error zurückgegeben wenn der Wert nicht exisitert.
int getArrayWert(int *array, int länge, int index) { 
int wert; // überprüfen dass Array index kleiner ist als Maximum
// Länge des Array
if (index < länge) {
// Wert des Arrays an der Stelle des Index abrufen
wert = array[index];
}
// Wenn Array Index ungültig dann Ausgabe Error
// Rückgabe des Wertes der Error erzeugt
else { 
printf("Wert ist: %d\n", array[index]);
wert = -1;
}
return wert;
}

int main(int argc, char const *argv[])
{
    int anzahl = 4;
    int index = 10;
    int länge = 3;
    //Array generieren
    printf("Wie viele Werte soll Array haben:");
    scanf("%d", &anzahl);
    int array[anzahl];
    printf("\nGeben Sie ihre Array-Werte ein: \n");
    for(int i = 0; i < anzahl; i++) {
      printf("%d. Zahl > ", i+1);
      scanf("%d", &array[i]);
   }
    printf("\nGeben Sie den Index ein, wo der Array-Wert ausgelesen werden soll (Startet bei 0):");
    scanf("%d", &index);
    int wert = getArrayWert(array, anzahl, index);
    printf("Der Wert ist: %d",wert);
    return 0;
}
