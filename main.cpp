#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //dichiarazione delle variabili del programma
    uint16_t n1;    //memorizza il primo valore
    uint16_t n2;    //memorizza il secondo valore
    uint8_t ri8;    //memorizza risultato somma a 8 bit
    uint16_t ri16;  //memorizza risultato somma a 16 bit
    uint8_t so8; //memorizza risultato sottrazione a 8 bit
    uint8_t so16; //memorizza risultato sottrazione a 16 bit
    uint8_t pr8; //memorizza risultato prodotto a 8 bit
    uint16_t pr16; //memorizza risultato prodotto a 16 bit
    uint8_t di8; //memorizza risultato divisione a 8 bit
    uint16_t di16; //memorizza risultato divisione a 16 bit 

    //stampa messaggio di richiesta sulla console
    cout << "Inserire primo valore: ";
    //ottengo il primo valore da utente
    cin >> n1;

    fflush(stdin);

    //stampa messaggio di richiesta sulla console
    cout << "Inserire secondo valore: ";
    //ottengo il secondo valore da utente
    cin >> n2;

    //stampa due righe vuote sulla console
    cout << endl << endl;

    //calcolo somma a 8 bit
    ri8 = n1 + n2;

    //calcolo somma a 16 bit
    ri16 = n1 + n2;

    //calcolo sottrazione a 8 bit
    so8 = n1 - n2;

    //calcolo sottrazione a 16 bit
    so16 = n1 - n2;

    //calcolo prodotto a 8 bit
    pr8 = n1 * n2;

    //calcolo prodotto a 16 bit
    pr16 = n1 * n2;

    //calcolo divisione a 8 bit
    di8 = n1 / n2;

    //calcolo divisione a 16 bit
    di16 = n1 / n2;

    //restituisco i risultati
    printf("Risultato a 8 bit = %d\n", ri8);
    printf("Risultato a 16 bit = %d\n", ri16);
    printf("Risultato sottrazione a 8 bit = %d\n", so8);
    printf("Risultato sottrazione a 16 bit = %d\n", so16);
    printf("Risultato prodotto a 8 bit = %d\n", pr8);
    printf("Risultato prodotto a 16 bit = %d\n", pr16);
    printf("Risultato divisione a 8 bit = %d\n", di8);
    printf("Risultato divisione a 16 bit = %d\n", di16);

    return 0;
}
