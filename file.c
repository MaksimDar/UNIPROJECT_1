#include <stdio.h>
#define FLOORS_FOR_INSPECTION 12
#define INSPECTION_PRICE 150
int convertCharToInteger(char ch)
{
    switch (ch)
    {
    case 'B':
        ch = -1;
        break;
    case 'G':
        ch = 0;
        break;
    case '1':
        ch = 1;
        break;
    case '2':
        ch = 2;
        break;
    case '3':
        ch = 3;
        break;
    case '4':
        ch = 4;
        break;
    case '5':
        ch = 5;
        break;
    case 'A':
        ch = 6;
        break;
    default:
        ch = -2;
        break;
    }
    return ch;
};

char getStatus(int statusInt)
{
    char statusChar;
    switch (statusInt)
    {
    case -1:
        statusChar = 'B';
        break;
    case 0:
        statusChar = 'G';
        break;
    case 1:
        statusChar = '1';
        break;
    case 2:
        statusChar = '2';
        break;
    case 3:
        statusChar = '3';
        break;
    case 4:
        statusChar = '4';
        break;
    case 5:
        statusChar = '5';
        break;
    case 6:
        statusChar = 'A';
        break;
    default:
        break;
    };
    return statusChar;
};

void upToLocal(int status, int local)
{
    for (int i = status + 1; i <= local; i++)
    {
        switch (i)
        {
        case -1:
            printf("..B");
            break;
        case 0:
            printf("..G");
            break;
        case 1:
            printf("..1");
            break;
        case 2:
            printf("..2");
            break;
        case 3:
            printf("..3");
            break;
        case 4:
            printf("..4");
            break;
        case 5:
            printf("..5");
            break;
        case 6:
            printf("..A");
            break;
        default:
            break;
        }
    }
    printf(" ");
}

void downToLocal(int status, int local)
{
    for (int i = status - 1; i >= local; i--)
    {
        switch (i)
        {
        case -1:
            printf("..B");
            break;
        case 0:
            printf("..G");
            break;
        case 1:
            printf("..1");
            break;
        case 2:
            printf("..2");
            break;
        case 3:
            printf("..3");
            break;
        case 4:
            printf("..4");
            break;
        case 5:
            printf("..5");
            break;
        case 6:
            printf("..A");
            break;
        default:
            break;
        }
    }
    printf(" ");
}

void getLocal(int local)
{
    switch (local)
    {
    case -1:
        printf("B");
        break;
    case 0:
        printf("G");
        break;
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    case 5:
        printf("5");
        break;
    case 6:
        printf("A");
        break;
    default:
        break;
    }
}

int destinationStatus(int destination)
{
    char status;
    switch (destination)
    {
    case -1:
        status = 'B';
        break;
    case 0:
        status = 'G';
        break;
    case 1:
        status = '1';
        break;
    case 2:
        status = '2';
        break;
    case 3:
        status = '3';
        break;
    case 4:
        status = '4';
        break;
    case 5:
        status = '5';
        break;
    case 6:
        status = 'A';
        break;
    default:
        break;
    }
    return status;
};

int calculatePrice(int floors)
{
    int times_exceeded = (floors - 11) / FLOORS_FOR_INSPECTION;
    int total_price = INSPECTION_PRICE * times_exceeded;
    return total_price;
}

int main()
{
    char option;
    char local, destination;
    int countAlpha = 0;
    int countBeta = 0;
    int countGamma = 0;
    char statusA = 'G';
    char statusB = 'G';
    char statusC = 'G';
    int localInt, destinationInt, statusAInt, statusBInt, statusCInt;
    int distanceA;
    int distanceB;
    int distanceC;
    int i;
    int countA = 0;
    float countAFloat;
    int countB = 0;
    float countBFloat;
    int countC = 0;
    float countCFloat;

    float priceA;
    float priceB;
    float priceC;

    int countRiderA = 0;
    int countRiderB = 0;
    int countRiderC = 0;

    int countUpA = 0;
    int countUpB = 0;
    int countUpC = 0;
    int countDownA = 0;
    int countDownB = 0;
    int countDownC = 0;

    char inspection;

    int inspectionStatusA = 0;
    int inspectionStatusB = 0;
    int inspectionStatusC = 0;

    float sum;
    float differenceA;
    float differenceB;
    float differenceC;

    printf("Welcome to our building!");

    do
    {
        printf("\n\nA. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
        printf("Enter option: ");
        scanf(" %c", &option);
        printf("\n");

        if (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q')
        {
            printf("(ERROR) Invalid option");
        }
        switch (option)
        {
        case 'A':
        case 'a':
            do
            {
                printf("From? ");
                scanf(" %c", &local);
            } while (local != 'A' && local != 'B' && local != 'G' && !(local >= '1' && local <= '5'));

            switch (local)
            {
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
                while (destination != 'A' && destination != 'G' && destination != 'B' && destination != '1' && destination != '2' && destination != '3' && destination != '4' && destination != '5')
                {
                    printf("To? ");
                    scanf(" %c", &destination);
                }
                break;
            }

            while (local == destination)
            {
                printf("(ERROR) Are you joking?\n\n");
                do
                {
                    printf("\n\nA. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
                    printf("Enter option: ");
                    scanf(" %c", &option);
                    if (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q')
                    {
                        printf("(ERROR) Invalid option\n\n");
                    }
                } while (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q');
                do
                {
                    printf("From? ");
                    scanf(" %c", &local);
                    switch (local)
                    {
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
                        while (destination != 'A' && destination != 'G' && destination != 'B' && destination != '1' && destination != '2' && destination != '3' && destination != '4' && destination != '5')
                        {
                            printf("To? ");
                            scanf(" %c", &destination);
                        }
                        break;
                    };
                } while (local != 'A' && local != 'B' && local != 'G' && !(local >= '1' && local <= '5'));
            };

            statusAInt = convertCharToInteger(statusA);
            statusBInt = convertCharToInteger(statusB);
            statusCInt = convertCharToInteger(statusC);
            localInt = convertCharToInteger(local);
            destinationInt = convertCharToInteger(destination);

            distanceA = statusAInt - localInt;
            if (distanceA < 0)
            {
                distanceA = -distanceA;
            }
            distanceB = statusBInt - localInt;
            if (distanceB < 0)
            {
                distanceB = -distanceB;
            }
            distanceC = statusCInt - localInt;
            if (distanceC < 0)
            {
                distanceC = -distanceC;
            }
            char elevatorAssigned = 'M';
            if (elevatorAssigned == 'M' && distanceA < distanceB && distanceA < distanceC)
            {
                elevatorAssigned = 'A';
            }

            if (elevatorAssigned == 'M' && distanceB < distanceA && distanceB < distanceC)
            {
                elevatorAssigned = 'B';
            }

            if (elevatorAssigned == 'M' && distanceC < distanceA && distanceC < distanceB)
            {
                elevatorAssigned = 'C';
            }

            if (elevatorAssigned == 'M' && distanceA == distanceB)
            {
                elevatorAssigned = (countA <= countB) ? 'A' : 'B';
            }

            if (elevatorAssigned == 'M' && distanceA == distanceC)
            {
                elevatorAssigned = (countA <= countC) ? 'A' : 'C';
            }

            if (elevatorAssigned == 'M' && distanceB == distanceC)
            {
                elevatorAssigned = (countB <= countC) ? 'B' : 'C';
            }

            if (elevatorAssigned == 'M')
            {
                elevatorAssigned = 'A';
            }

            if (elevatorAssigned == 'A')
            {
                printf("Elevator Alpha assigned\n");
                countRiderA++;
                statusA = getStatus(statusAInt);
                if (statusAInt == localInt)
                {
                    printf("");
                }
                else
                {
                    printf("%c", statusA);
                    if (localInt > statusAInt)
                    {
                        upToLocal(statusAInt, localInt);
                    }
                    else
                    {
                        if (localInt < statusAInt)
                        {
                            downToLocal(statusAInt, localInt);
                        }
                    }
                }
                if (destinationInt > localInt)
                {
                    printf("Going up! ");
                    countUpA++;
                    getLocal(localInt);
                    for (i = localInt + 1; i <= destinationInt; i++)
                    {
                        switch (i)
                        {
                        case -1:
                            printf("..B");
                            break;
                        case 0:
                            printf("..G");
                            break;
                        case 1:
                            printf("..1");
                            break;
                        case 2:
                            printf("..2");
                            break;
                        case 3:
                            printf("..3");
                            break;
                        case 4:
                            printf("..4");
                            break;
                        case 5:
                            printf("..5");
                            break;
                        case 6:
                            printf("..A");
                            break;
                        default:
                            break;
                        };
                        countA++;
                    };
                    statusA = destinationStatus(destinationInt);
                }

                if (destinationInt < localInt)
                {
                    printf("Going down! ");
                    countDownA++;
                    getLocal(localInt);
                    for (i = localInt - 1; i >= destinationInt; i--)
                    {
                        switch (i)
                        {
                        case -1:
                            printf("..B");
                            break;
                        case 0:
                            printf("..G");
                            break;
                        case 1:
                            printf("..1");
                            break;
                        case 2:
                            printf("..2");
                            break;
                        case 3:
                            printf("..3");
                            break;
                        case 4:
                            printf("..4");
                            break;
                        case 5:
                            printf("..5");
                            break;
                        case 6:
                            printf("..A");
                            break;
                        default:
                            break;
                        }
                        countA++;
                    };
                    statusA = destinationStatus(destinationInt);
                }
            }
            else
            {
                if (elevatorAssigned == 'B')
                {
                    printf("Elevator Beta assigned\n");
                    countRiderB++;
                    statusB = getStatus(statusBInt);
                    if (statusBInt == localInt)
                    {
                        printf("");
                    }
                    else
                    {
                        printf("%c", statusB);
                        if (localInt > statusBInt)
                        {
                            upToLocal(statusBInt, localInt);
                        }
                        else
                        {
                            if (localInt < statusBInt)
                            {
                                downToLocal(statusBInt, localInt);
                            }
                        }
                    }

                    if (destinationInt > localInt)
                    {
                        printf("Going up! ");
                        countUpB++;
                        getLocal(localInt);
                        for (i = localInt + 1; i <= destinationInt; i++)
                        {
                            switch (i)
                            {
                            case -1:
                                printf("..B");
                                break;
                            case 0:
                                printf("..G");
                                break;
                            case 1:
                                printf("..1");
                                break;
                            case 2:
                                printf("..2");
                                break;
                            case 3:
                                printf("..3");
                                break;
                            case 4:
                                printf("..4");
                                break;
                            case 5:
                                printf("..5");
                                break;
                            case 6:
                                printf("..A");
                                break;
                            default:
                                break;
                            };
                            countB++;
                        };
                        statusB = destinationStatus(destinationInt);
                    }

                    if (destinationInt < localInt)
                    {
                        printf("Going down! ");
                        countDownB++;
                        getLocal(localInt);
                        for (i = localInt - 1; i >= destinationInt; i--)
                        {
                            switch (i)
                            {
                            case -1:
                                printf("..B");
                                break;
                            case 0:
                                printf("..G");
                                break;
                            case 1:
                                printf("..1");
                                break;
                            case 2:
                                printf("..2");
                                break;
                            case 3:
                                printf("..3");
                                break;
                            case 4:
                                printf("..4");
                                break;
                            case 5:
                                printf("..5");
                                break;
                            case 6:
                                printf("..A");
                                break;
                            default:
                                break;
                            };
                            countB++;
                        };
                        statusB = destinationStatus(destinationInt);
                    }
                }
                else
                {
                    if (elevatorAssigned == 'C')
                    {
                        countRiderC++;
                        printf("Elevator Gamma assigned\n");
                        statusC = getStatus(statusCInt);
                        if (statusCInt == localInt)
                        {
                            printf("");
                        }
                        else
                        {
                            printf("%c", statusC);
                            if (localInt > statusCInt)
                            {
                                upToLocal(statusCInt, localInt);
                            }
                            else
                            {
                                if (localInt < statusCInt)
                                {
                                    downToLocal(statusCInt, localInt);
                                }
                            }
                        }

                        if (destinationInt > localInt)
                        {
                            printf("Going up! ");
                            countUpC++;
                            switch (localInt)
                            {
                            case -1:
                                printf("B");
                                break;
                            case 0:
                                printf("G");
                                break;
                            case 1:
                                printf("1");
                                break;
                            case 2:
                                printf("2");
                                break;
                            case 3:
                                printf("3");
                                break;
                            case 4:
                                printf("4");
                                break;
                            case 5:
                                printf("5");
                                break;
                            case 6:
                                printf("A");
                                break;
                            default:
                                break;
                            }
                            for (i = localInt + 1; i <= destinationInt; i++)
                            {
                                switch (i)
                                {
                                case -1:
                                    printf("..B");
                                    break;
                                case 0:
                                    printf("..G");
                                    break;
                                case 1:
                                    printf("..1");
                                    break;
                                case 2:
                                    printf("..2");
                                    break;
                                case 3:
                                    printf("..3");
                                    break;
                                case 4:
                                    printf("..4");
                                    break;
                                case 5:
                                    printf("..5");
                                    break;
                                case 6:
                                    printf("..A");
                                    break;
                                default:
                                    break;
                                };
                                countC++;
                            };
                            statusC = destinationStatus(destinationInt);
                        }

                        if (destinationInt < localInt)
                        {
                            printf("Going down! ");
                            countDownC++;
                            switch (localInt)
                            {
                            case -1:
                                printf("B");
                                break;
                            case 0:
                                printf("G");
                                break;
                            case 1:
                                printf("1");
                                break;
                            case 2:
                                printf("2");
                                break;
                            case 3:
                                printf("3");
                                break;
                            case 4:
                                printf("4");
                                break;
                            case 5:
                                printf("5");
                                break;
                            case 6:
                                printf("A");
                                break;
                            default:
                                break;
                            }
                            for (i = localInt - 1; i >= destinationInt; i--)
                            {
                                switch (i)
                                {
                                case -1:
                                    printf("..B");
                                    break;
                                case 0:
                                    printf("..G");
                                    break;
                                case 1:
                                    printf("..1");
                                    break;
                                case 2:
                                    printf("..2");
                                    break;
                                case 3:
                                    printf("..3");
                                    break;
                                case 4:
                                    printf("..4");
                                    break;
                                case 5:
                                    printf("..5");
                                    break;
                                case 6:
                                    printf("..A");
                                    break;
                                default:
                                    break;
                                }
                                countC++;
                            };
                            statusC = destinationStatus(destinationInt);
                        }
                    }
                }
            }
            break;
        case 'B':
        case 'b':
            printf("\n\nElevators Statistics\n\n");
            printf("ALPHA: %d rides (%d-%d) and %d floors traveled\n", countRiderA, countUpA, countDownA, countA);
            printf("BETA: %d rides (%d-%d) and %d floors traveled\n", countRiderB, countUpB, countDownB, countB);
            printf("GAMMA: %d rides (%d-%d) and %d floors traveled\n", countRiderC, countUpC, countDownC, countC);
            break;
        case 'C':
        case 'c':
            if (countA >= FLOORS_FOR_INSPECTION || countB >= FLOORS_FOR_INSPECTION || countC >= FLOORS_FOR_INSPECTION)
            {
                if (countA >= FLOORS_FOR_INSPECTION)
                {
                    printf("Elevator Alpha: inspection required\n");
                    inspectionStatusA = 1;
                    countAFloat = countA;
                    priceA = calculatePrice(countA);
                }

                if (countB >= FLOORS_FOR_INSPECTION)
                {
                    printf("Elevator Beta: inspection required\n");
                    inspectionStatusB = 1;
                    countBFloat = countB;
                    priceB = calculatePrice(countB);
                }

                if (countC >= FLOORS_FOR_INSPECTION)
                {
                    inspectionStatusC = 1;
                    printf("Elevator Gama: inspection required\n");
                    countCFloat = countB;
                    priceC = calculatePrice(countC);
                };

                printf("Perform inspection? ");
                scanf(" %c", &inspection);

                if (inspection == 'Y' || inspection == 'y' || inspection == 'N' || inspection == 'n')
                {
                    printf("\n");
                    if (inspection == 'Y' || inspection == 'y')
                    {
                        if (inspectionStatusA == 1 && inspectionStatusB == 1 && inspectionStatusC == 1)
                        {
                            printf("Elevator Alpha inspected! (%.f euros)\n", priceA);
                            printf("Elevator Beta inspected! (%.f euros)\n", priceB);
                            printf("Elevator Gama inspected! (%.f euros)\n", priceC);
                            countA = 0;
                            countB = 0;
                            countC = 0;
                            sum = priceA + priceB + priceC;
                            inspectionStatusA = 0;
                            inspectionStatusB = 0;
                            inspectionStatusC = 0;
                            printf("\nAccumulated %.f", sum);
                        }
                        else
                        {
                            if (inspectionStatusA == 1 && inspectionStatusB == 1)
                            {
                                printf("Elevator Alpha inspected! (%.f euros)\n", priceA);
                                printf("Elevator Beta inspected! (%.f euros)\n", priceB);
                                countA = 0;
                                countB = 0;
                                sum = priceA + priceB;
                                inspectionStatusA = 0;
                                inspectionStatusB = 0;
                                printf("\nAccumulated %.f", sum);
                            }
                            else
                            {
                                if (inspectionStatusA == 1 && inspectionStatusC == 1)
                                {
                                    printf("Elevator Alpha inspected! (%.f euros)\n", priceA);
                                    printf("Elevator Gama inspected! (%.f euros)\n", priceC);
                                    countA = 0;
                                    countC = 0;
                                    sum = priceA + priceC;
                                    inspectionStatusA = 0;
                                    inspectionStatusC = 0;
                                    printf("\nAccumulated %.f", sum);
                                }
                                else
                                {
                                    if (inspectionStatusB == 1 && inspectionStatusC == 1)
                                    {
                                        printf("Elevator Beta inspected! (%.f euros)\n", priceB);
                                        printf("Elevator Gama inspected! (%.f euros)\n", priceC);
                                        countB = 0;
                                        countC = 0;
                                        sum = priceB + priceC;
                                        inspectionStatusB = 0;
                                        inspectionStatusC = 0;
                                        printf("\nAccumulated %.f", sum);
                                    }
                                    else
                                    {
                                        if (inspectionStatusA == 1)
                                        {
                                            printf("Elevator Alpha inspected! (%.f euros)\n", priceA);
                                            countA = 0;
                                            sum = priceA;
                                            inspectionStatusA = 0;
                                            printf("\nAccumulated %.f", sum);
                                        };
                                        if (inspectionStatusB == 1)
                                        {
                                            printf("Elevator Beta inspected! (%.f euros)\n", priceB);
                                            countB = 0;
                                            sum = priceB;
                                            inspectionStatusB = 0;
                                            printf("\nAccumulated %.f", sum);
                                        }
                                        if (inspectionStatusC == 1)
                                        {
                                            printf("Elevator Gama inspected! (%.f euros)\n", priceC);
                                            countC = 0;
                                            sum = priceC;
                                            inspectionStatusC = 0;
                                            printf("\nAccumulated %.f", sum);
                                        }
                                    }
                                }
                            }
                        };
                    }
                }
            }

            break;
        default:
            break;
        }
    } while (option != 'Q' && option != 'q');
    return 0;
}
