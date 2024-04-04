#include <stdio.h>
int convertCharToInteger(char ch) {
    switch(ch) {
        case 'B': ch = -1; break;
        case 'G': ch = 0; break;
        case '1': ch = 1; break;
        case '2': ch = 2; break;
        case '3': ch = 3; break; 
        case '4': ch = 4; break;   
        case '5': ch = 5; break;    
        case 'A': ch = 6; break;
        default:  ch= -2; break;
    }
    return ch;

};
int getStatus(int statusInt) {
    char statusChar;
    switch(statusInt) {
        case -1:
            statusChar = 'B';
            printf("%c", statusChar);
            break;
        case 0:
            statusChar = 'G';
            printf("%c", statusChar);
            break;
        case 1:
            statusChar = '1';
            printf("%c", statusChar);
            break;
        case 2:
            statusChar = '2';
            printf("%c", statusChar);
            break;
        case 3:
            statusChar = '3';
            printf("%c", statusChar);
            break;
        case 4:
            statusChar = '4';
            printf("%c", statusChar);
            break;
        case 5:
            statusChar = '5';
            printf("%c", statusChar);
            break;    
        case 6:
            statusChar = 'A';
            printf("%c", statusChar);
            break;
        default:
            break;
    };
    return statusChar;

};

int main() {
    char option;
    char local, destination;
    int countAlpha = 0;
    int countBeta = 0;
    int countGamma = 0;
    char statusA = '2';
    char statusB = '3';
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

    printf("Welcome to our building!");

    do {
        printf("\n\nA. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
        printf("Enter option: ");
        scanf(" %c", &option);
        
        if (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q') {
            printf("(ERROR) Invalid option\n\n");
        }
        switch (option) {
            case 'A':
            case 'a': 
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
                        printf("\n\nA. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
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


                statusAInt = convertCharToInteger(statusA);
                statusBInt = convertCharToInteger(statusB);
                statusCInt = convertCharToInteger(statusC);
                localInt = convertCharToInteger(local);
                destinationInt = convertCharToInteger(destination);

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
                } else {
                    if ((distanceB < distanceA && distanceB < distanceC) || (distanceBN < distanceAN && distanceBN < distanceC)) {
                        elevatorAssigned = 'B';
                    } else {
                        if ((distanceC < distanceA && distanceC < distanceB) || (distanceCN < distanceAN && distanceCN < distanceBN)) {
                            elevatorAssigned = 'C';
                        }
                    }
                }
                if (elevatorAssigned == 'A') {
                    printf("Elevator Alpha assigned\n");
                    statusA = getStatus(statusAInt);
                    // switch(statusAInt) {
                    //     case 0:
                    //         statusA = 'G';
                    //         printf("%c", statusA);
                    //         break;
                    //     case -1:
                    //         statusA = 'B';
                    //         printf("%c", statusA);
                    //         break;
                    //     case 6:
                    //         statusA = 'A';
                    //         printf("%c", statusA);
                    //         break;
                    //     default:
                    //         printf("%c", statusA);
                    //         break;
                    // }
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
                            };  
                        };
                        switch (destinationInt) {
                            case -1: statusA = 'B'; break;
                            case 0: statusA = 'G'; break;
                            case 1: statusA = '1'; break;
                            case 2: statusA = '2'; break;
                            case 3: statusA = '3'; break;
                            case 4: statusA = '4'; break;
                            case 5: statusA = '5'; break;
                            case 6: statusA = 'A'; break;
                            default: break;
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
                             
                        };
                        switch (destinationInt) {
                            case -1: statusA = 'B'; break;
                            case 0: statusA = 'G'; break;
                            case 1: statusA = '1'; break;
                            case 2: statusA = '2'; break;
                            case 3: statusA = '3'; break;
                            case 4: statusA = '4'; break;
                            case 5: statusA = '5'; break;
                            case 6: statusA = 'A'; break;
                            default: break;
                        }
                    }
                } 
        }
    } while (option != 'Q' && option != 'q');
    
  

    return 0;    
} 

          
