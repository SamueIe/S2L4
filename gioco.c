#include <stdio.h>

int main() {
    char scelta;
    char nome[14]="Player";
    int punteggio;
    char risposta;

    printf("Benvenuto al quizone di EPICODE!\n");
    printf("Il nostro obiettivo è farti divertire!\n\n");

    do {
        printf("Scegli che vuoi fare:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        scanf(" %c", &scelta);

        if (scelta == 'A' || scelta == 'a') {
            printf("Okay, Prima di iniziare, come ti chiami? ");
            scanf("%s", nome);
            printf("Ottimo, %s, sei pronto per iniziare!\n", nome);

            punteggio = 0;

    do
    {
            printf("Prima Domanda:\n");
            printf("Qual è l'organo principale del sistema respiratorio umano?\n");
            printf("A) La trachea\n");
            printf("B) Il polmone\n");
            printf("C) I bronchi\n");
            printf("La tua risposta: ");
            scanf(" %c", &risposta);
            switch(risposta)
            {
                case 'A':
                case 'a':
                case 'C':
                case 'c':
                printf("Sbagliato!\n");
                break;
                
                case 'B':
                case 'b':
                printf("Esatto!\n");
                punteggio++;
                break;
                
                default:
                printf("Inserisci un dato valido!\n");
                break;
            }
    }while(risposta != 'A' && risposta != 'a' && risposta != 'B' && risposta != 'b' && risposta != 'C' && risposta != 'c');
        do
    {
            printf("Seconda Domanda:\n");
            printf("Chi ha dipinto la Mona Lisa?\n");
            printf("A) Raffaello Sanzio\n");
            printf("B) Michelangelo\n");
            printf("C) Leonardo da Vinci\n");
            printf("La tua risposta: ");
            scanf(" %c", &risposta);
            switch(risposta)
            {
                case 'A':
                case 'a':
                case 'B':
                case 'b':
                printf("Sbagliato!\n");
                break;
                
                case 'C':
                case 'c':
                printf("Esatto!\n");
                punteggio++;
                break;
                
                default:
                printf("Inserisci un dato valido!\n");
                break;
            }
    }while(risposta != 'A' && risposta != 'a' && risposta != 'B' && risposta != 'b' && risposta != 'C' && risposta != 'c');
    
            printf("\nIl tuo punteggio finale è: %d/2\n\n", punteggio);
        } else if (scelta != 'B' && scelta != 'b') {
            printf("Scelta non valida. Riprova.\n\n");
        }
    } while (scelta != 'B' && scelta != 'b');

    printf("Grazie per aver giocato, %s! A presto!\n", nome);

    return 0;
}
