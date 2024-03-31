#include <stdio.h>

int main() {
    char option;
    char local, destination;
    int countAlpha = 0;
    int countBeta = 0;
    int countGamma = 0;
    int elevatorAssigned = 0;
    char statusA = '1';
    char statusB = '4';
    char statusC = '5';
    int distanceA;
    int distanceB;
    int distanceC;
    int distanceAn;
    int distanceBn;
    int distanceCn;
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
    if ((local >= '1' && local <= '5') && (destination >= '1' && destination <= '5') && (statusA >= '1' && statusA <= '5') && (statusB >= '1' && statusB <= '5') && (statusC >= '1' && statusC <= '5')) {
        distanceA = statusA - local;
        distanceB = statusB - local;
        distanceC = statusC - local;
        printf("distanceA: %d", distanceA );
        printf("distanceB: %d", distanceB );
        printf("distanceC: %d", distanceC );
    
        if ((distanceA > distanceB && distanceA > distanceC) || distanceA == 0 ) {
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


    // } else {
    //     switch(statusA) {
    //         case 'G':
    //             statusA = '0';
    //             break;
    //         case 'B':
    //             statusA = (char)-1;
    //             break;
    //         case 'A':
    //             statusA = '6';
    //             break;
    //         default:
    //             break;
    //         }

    //     switch(statusB) {
    //         case 'G':
    //             statusB = '0';
    //             break;
    //         case 'B':
    //             statusB = (char)-1;
    //             break;
    //         case 'A':
    //             statusB = '6';
    //             break;
    //         default:
    //          break;
    //         }

    //     switch(statusC) {
    //         case 'G':
    //             statusC = '0';
    //             break;
    //         case 'B':
    //             statusC = (char)-1;
    //             break;
    //         case 'A':
    //             statusC = '6';
    //             break;
    //         default:
    //             break;
    //         }
    //         switch(local) {
    //             case 'G':
    //                local = '0';
    //                break;
    //             case 'B':
    //                local = (char)-1;
    //                break;
    //             case 'A':
    //               local = '6';
    //               break;
    //             default:
    //             break;
    //         }
    //         switch(destination) {
    //             case 'G':
    //                destination = '0';
    //                break;
    //             case 'B':
    //                destination = (char)-1;
    //                break;
    //             case 'A':
    //               destination = '6';
    //               break;
    //             default:
    //             break;
    //         };

    //         distanceA = statusA - local;
    //         distanceB = statusB - local;
    //         distanceC = statusC - local;
    //         if ((distanceA > distanceB && distanceA > distanceC) || (distanceA + (-2.0 * distanceA) > distanceB && distanceA + (-2.0 * distanceA) > distanceC ) ) {
    //         printf("Elevator Alpha assigned\n");
    //             if (statusA == -1) {
    //                 statusA = 'B';
                    
    //             }
    //             if (statusA == '0') {
    //                 statusA = 'G';
                
    //             }
    //             if (statusA == '6') {
    //                 statusA = 'A';
                    
    //             }
    //             printf("%c..", statusA);

        //     if (destination > local) {
        //         switch(statusA) {
        //            case 'G':
        //            statusA = '0';
        //            break;
        //           case 'B':
        //            statusA = '-';
        //            break;
        //            case 'A':
        //           statusA = '6';
        //           break;
        //            default:
        //            break;
        //         }
                
        //         if (local > statusA) {
        //             while (local > statusA) {
        //             printf("..");
        //             if (statusA == -1) {
        //                 statusA = 'B';
        //                 printf("%c..", statusA);
        //             }
        //             if (statusA == 'B') {
        //                 statusA = 'G';
        //                 printf("%c..", statusA);
        //             }
        //             if (statusA == 'G') {
        //                 statusA = '1';
        //             }
        //             if (statusA >= '1' && statusA <= '5') {
        //                 printf("%c..", statusA);
        //                 statusA++;
        //             }
        //             if (statusA == '6') {
        //                 statusA = 'A';
        //                 printf("%c..", statusA);
        //             }
        //         } 
        //         } else {
        //             while (local < statusA) {
        //             printf("..");
        //             switch (statusA) {
        //                 case '0':
        //                     statusA = 'G';
        //                     printf("%c", statusA);
        //                     break;
        //                 case -1:
        //                     statusA = 'B';
        //                     printf("%c", statusA);
        //                     break;
        //                 case '5':
        //                     statusA = 'A';
        //                     printf("%c", statusA);
        //                     break;
        //                 default:
        //                     printf("%c", statusA - 1);
        //                     break;
        //                 }
        //                 statusA--;
        //             }
        //         }
        //         printf(" Going up! ");
        //         printf("%c",local);
        //         do {
        //             if (local == -1) {
        //                 local = 'B';
        //                 printf("%c..", local);
        //             }
        //             if (local == 'B') {
        //                 local = 'G';
        //                 printf("%c..", local);
        //             }
        //             if (local == 'G') {
        //                 local = '1';
        //             }
        //             if (local >= '1' && local <= '5') {
        //                 printf("%c..", local);
        //                 local++;
        //             }
        //             if (local == '6') {
        //                 local = 'A';
        //                 printf("%c..", local);
        //             }
        //         } while (local != 'A');
            
        //     } 
        //     else {
        //         switch(statusA) {
        //            case 'G':
        //            statusA = '0';
        //            break;
        //           case 'B':
        //            statusA = '-';
        //            break;
        //            case 'A':
        //           statusA = '6';
        //           break;
        //            default:
        //            break;
        //         }
                
        //         if (local > statusA) {
        //             while (local > statusA) {
        //             printf("..");
        //             switch (statusA) {
        //                 case 0:
        //                     statusA = 'G';
        //                     printf("%c", statusA);
        //                     break;
        //                 case -1:
        //                     statusA = 'B';
        //                     printf("%c", statusA);
        //                     break;
        //                 case '6':
        //                     statusA = 'A';
        //                     printf("%c", statusA);
        //                     break;
        //                 default:
        //                     printf("%c", statusA + 1);
        //                     break;
        //                 }
        //                 statusA++;
        //             }
        //         } else {
        //             while (local < statusA) {
        //             printf("..");
        //             switch (statusA) {
        //                 case 0:
        //                     statusA = 'G';
        //                     printf("%c", statusA);
        //                     break;
        //                 case -1:
        //                     statusA = 'B';
        //                     printf("%c", statusA);
        //                     break;
        //                 case '6':
        //                     statusA = 'A';
        //                     printf("%c", statusA);
        //                     break;
        //                 default:
        //                     printf("%c", statusA - 1);
        //                     break;
        //                 }
        //                 statusA--;
        //             }
        //         }
        //         printf(" Going down! ");
        //         printf("%c",local);
        //         do {
        //          printf("..");
        //             switch (local) {
        //                 case -1:
        //                     local = 'G';
        //                     printf("%c", local);
        //                     break;
        //                 case -2:
        //                     local = 'B';
        //                     printf("%c", local);
        //                     break;
        //                 case '5':
        //                     local = 'A';
        //                     printf("%c", local);
        //                     break;
        //                 default:
        //                     printf("%c", local - 1);
        //                     break;
        //             }
        //             local--;
        //         } while (destination < local);
        //     }
        // }
    }
    return 0; 
        
} 

          
