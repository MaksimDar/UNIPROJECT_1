#include <stdio.h>

int main() {
    char option;
    char local, destination;
    int countAlpha = 0;
    int countBeta = 0;
    int countGamma = 0;
    int elevatorAssigned = 0;
    char statusA = '4';
    char statusB = '1';
    char statusC = '1';
    char distanceA;
    char distanceB;
    char distanceC;
    char distanceA1;
    char distanceB1;
    char distanceC1;
    char elevatorName;
    

    printf("Welcome to our building!\n\n");

    do {
        printf("A. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
        printf("Enter option: ");
        scanf(" %c", &option);
        if (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q') {
            printf("(ERROR) Invalid option\n\n");
        }
    } while (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q');
    
  
   
    do   {
        printf("From? ");
        scanf(" %c", &local);
    } while (local != 'A' && local != 'B' &&  local != 'G' &&  !( local >= '1' && local <= '5'));
    
    switch(local) {
        case 'A':
        case 'G':
        case 'B':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("To? ");
            scanf(" %c", &destination);
            while (destination != 'A' && destination != 'G' && destination != 'B' && destination != '1' && destination != '2' && destination != '3' && destination != '4' && destination != '5')  {
               
                printf("To? ");
                scanf(" %c", &destination);
            }
            break;
    }
   

    while (local == destination) {
        printf("(ERROR) Are you joking?\n\n");
        do {
            printf("A. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
            printf("Enter option: ");
            scanf(" %c", &option);
            if (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q') {
              printf("(ERROR) Invalid option\n\n");
            }
        } while (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q');
        do   {
        printf("From? ");
        scanf(" %c", &local);
        switch(local) {
        case 'A':
        case 'G':
        case 'B':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("To? ");
            scanf(" %c", &destination);
            while (destination != 'A' && destination != 'G' && destination != 'B' && destination != '1' && destination != '2' && destination != '3' && destination != '4' && destination != '5')  {
               
                printf("To? ");
                scanf(" %c", &destination);
            }
            break;
    };
    } while (local != 'A' && local != 'B' &&  local != 'G' &&  !( local >= '1' && local <= '5'));
    };

    // Calculate distances
    if ((local >= '1' && local <= '5') && (destination >= '1' && destination <= '5')) {


    distanceA = statusA - local;
    distanceB = statusB - local;
    distanceC = statusC - local;

    if (distanceA > distanceB && distanceA > distanceC ) {
        printf("Elevator Alpha assigned\n");
        printf("%c", statusA);
        if (destination > local) {
            if (local > statusA) {
                while (local > statusA) {
                 printf("..%c", statusA+1);
                 statusA++;
                }
            } else {
                while (local < statusA) {
                 printf("..%c", statusA-1); 
                 statusA--;
                }
            }
            printf(" Going up! ");
            printf("%c",local);
            do {
                printf("..%c", local+1);
                local++;
            } while (destination > local);
            

        } else {
            if (local > statusA) {
                while (local > statusA) {
                 printf("..%c", statusA+1);
                 statusA++;
                }
            } else {
                while (local < statusA) {
                 printf("..%c", statusA-1);
                 statusA--;
                }
            }
            printf(" Going down! ");
            printf("%c",local);
            do {
              printf("..%c", local-1);
              local--;
        } while (destination < local);
        }
        
    }
    }
    
    
    return 0;
}