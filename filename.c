#include <stdio.h>

int main() {
    char option;
    char local, destination;
    int countAlpha = 0;
    int countBeta = 0;
    int countGamma = 0;
    char statusA = '2';
    char statusB = '5';
    char statusC = '5';
    int localInt, destinationInt, statusAInt,statusBInt,statusCInt;
    char elevatorAssigned;
    int distanceA;
    int distanceB;
    int distanceC;
    int distanceAN;
    int distanceBN;
    int distanceCN;
    int i;
    int countA = 0;
    int countB = 0;
    int countC = 0;

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
    switch(statusA) {
        case 'B': statusAInt = -1; break;
        case 'G': statusAInt = 0; break;
        case '1': statusAInt = 1; break;
        case '2': statusAInt = 2; break;
        case '3': statusAInt = 3; break; 
        case '4': statusAInt = 4; break;   
        case '5': statusAInt = 5; break;    
        case 'A': statusAInt = 6; break;
        default: statusAInt = -2; break;
    }

    switch(statusB) {
        case 'B': statusBInt = -1; break;
        case 'G': statusBInt = 0; break;
        case '1': statusBInt = 1; break;
        case '2': statusBInt = 2; break;
        case '3': statusBInt = 3; break; 
        case '4': statusBInt = 4; break;   
        case '5': statusBInt = 5; break;    
        case 'A': statusBInt = 6; break;
        default: statusBInt = -2; break;
    }

    switch(statusC) {
        case 'B': statusCInt = -1; break;
        case 'G': statusCInt = 0; break;
        case '1': statusCInt = 1; break;
        case '2': statusCInt = 2; break;
        case '3': statusCInt = 3; break; 
        case '4': statusCInt = 4; break;   
        case '5': statusCInt = 5; break;    
        case 'A': statusCInt = 6; break;
        default: statusCInt = -2; break;
    }
    switch(local) {
        case 'B': localInt = -1; break;
        case 'G': localInt = 0; break;
        case '1': localInt = 1; break;
        case '2': localInt = 2; break;
        case '3': localInt = 3; break; 
        case '4': localInt = 4; break;   
        case '5': localInt = 5; break;    
        case 'A': localInt = 6; break;
        default: localInt = -2; break;
    }
    switch(destination) {
        case 'B': destinationInt = -1; break;
        case 'G': destinationInt = 0; break;
        case '1': destinationInt = 1; break;
        case '2': destinationInt = 2; break;
        case '3': destinationInt = 3; break; 
        case '4': destinationInt = 4; break;   
        case '5': destinationInt = 5; break;    
        case 'A': destinationInt = 6; break;
        default: destinationInt = -2; break;
    };
    distanceA = statusAInt - localInt;
    if (distanceA < 0) {
      distanceAN = -distanceA;
    }
    distanceB = statusBInt - localInt;
    if (distanceB < 0) {
        distanceBN = distanceB;
    }
    distanceC = statusCInt - localInt;
    if (distanceC < 0) {
        distanceCN = distanceC;
    }
    
    if ((distanceA < distanceB && distanceA < distanceC) || (distanceAN < distanceB && distanceAN < distanceC)) {
        elevatorAssigned = 'A';
        printf("Elevator Alpha assigned\n");
        switch(statusAInt) {
            case 0:
                statusA = 'G';
                printf("%c", statusA);
                break;
            case -1:
                statusA = 'B';
                printf("%c", statusA);
                break;
            case 6:
                statusA = 'A';
                printf("%c", statusA);
                break;
            default:
                printf("%c", statusA);
                break;
            }
    }
        if (elevatorAssigned == 'A') {
            if (localInt > statusAInt) {
                for (int i = statusAInt+1; i <= localInt; i++) {
                    switch(i) {
                        case -1: printf("..B"); break;
                        case 0: printf("..G"); break;
                        case 1: printf("..1"); break;
                        case 2: printf("..2"); break;
                        case 3: printf("..3"); break;
                        case 4: printf("..4"); break;
                        case 5: printf("..5"); break;
                        case 6: printf("..A"); break;
                        default: break; 
                    }
                }
            };  
            if (localInt < statusAInt) {
                for (int i = statusAInt-1; i >= localInt; i--) {
                    switch(i) {
                        case -1: printf("..B"); break;
                        case 0: printf("..G"); break;
                        case 1: printf("..1"); break;
                        case 2: printf("..2"); break;
                        case 3: printf("..3"); break;
                        case 4: printf("..4"); break;
                        case 5: printf("..5"); break;
                        case 6: printf("..A"); break;
                        default: break; 
                    }
                }
            }
            if (destinationInt > localInt) {
                printf(" Going up! ");
                switch(localInt) {
                    case -1: printf("B"); break;
                    case 0: printf("G"); break;
                    case 1: printf("1"); break;
                    case 2: printf("2"); break;
                    case 3: printf("3"); break;
                    case 4: printf("4"); break;
                    case 5: printf("5"); break;
                    case 6: printf("A"); break;
                    default: break; 
                }
                for (i = localInt+1; i <= destinationInt; i++) {
                    switch(i) {
                        case -1: printf("..B"); break;
                        case 0: printf("..G"); break;
                        case 1: printf("..1"); break;
                        case 2: printf("..2"); break;
                        case 3: printf("..3"); break;
                        case 4: printf("..4"); break;
                        case 5: printf("..5"); break;
                        case 6: printf("..A"); break;
                        default: break; 
                    }     
                } 

            }
            
            if (destinationInt < localInt) {
                printf(" Going down! ");
                switch(localInt) {
                    case -1: printf("B"); break;
                    case 0: printf("G"); break;
                    case 1: printf("1"); break;
                    case 2: printf("2"); break;
                    case 3: printf("3"); break;
                    case 4: printf("4"); break;
                    case 5: printf("5"); break;
                    case 6: printf("A"); break;
                    default: break; 
                }
                for (i = localInt-1; i >= destinationInt; i--) {
                        switch(i) {
                        case -1: printf("..B"); break;
                        case 0: printf("..G"); break;
                        case 1: printf("..1"); break;
                        case 2: printf("..2"); break;
                        case 3: printf("..3"); break;
                        case 4: printf("..4"); break;
                        case 5: printf("..5"); break;
                        case 6: printf("..A"); break;
                        default: break; 
                    }
                     
                } 
            }
        }
    return 0;    
} 