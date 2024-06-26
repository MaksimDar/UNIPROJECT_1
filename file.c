
/***********************************************
 *
 * @Purpose: The purpose of this project is to implement a common elevator
 *system in all La Salle buildings. This involves the software of three new
 *elevators in each building: Alpha, Beta and Gamma.
 * @Author: Maksym Dovhusha
 * @Creation date:
 * @Date of last modification:
 *
 ************************************************/

#include <stdio.h>
#define FLOORS_FOR_INSPECTION 12
#define INSPECTION_PRICE 150

/***********************************************
 *
 * @Purpose: Convert elevator floor name to its number.
 * @Parameters:    in: ch = the name of the lift.
 * @Return: Returns the floor number of ch
 *
 ************************************************/
int convertChar(char ch) {
  switch (ch) {
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

/***********************************************
 *
 * @Purpose: Convert elevator floor number to its name.
 * @Parameters:    in: status_int = the name of the lift.
 * @Return: Returns the floor name of status_char
 *
 ************************************************/

char getStatus(int status_int) {
  char status_char;
  switch (status_int) {
  case -1:
    status_char = 'B';
    break;
  case 0:
    status_char = 'G';
    break;
  case 1:
    status_char = '1';
    break;
  case 2:
    status_char = '2';
    break;
  case 3:
    status_char = '3';
    break;
  case 4:
    status_char = '4';
    break;
  case 5:
    status_char = '5';
    break;
  case 6:
    status_char = 'A';
    break;
  default:
    break;
  };
  return status_char;
};
/***********************************************
 *
 * @Purpose: Simulate the elevator moving up to a target floor.
 * @Parameters:     in: status = the current floor of the elevator.
 *                  in: local = the target floor the elevator is moving to.
 * @Return: ----.
 *
 ************************************************/
void upLocal(int status, int local) {
  for (int i = status + 1; i <= local; i++) {
    switch (i) {
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
/***********************************************
 *
 * @Purpose: Simulate the elevator descending to a target floor.
 * @Parameters:     in: status = the current floor of the elevator.
 *                  in: local = the target floor the elevator is moving to.
 * @Return: ----.
 *
 ************************************************/
void downLocal(int status, int local) {
  for (int i = status - 1; i >= local; i--) {
    switch (i) {
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
/***********************************************
 *
 * @Purpose: Get the floor name where current lift is.
 * @Parameters:     in: local = the location of floor.
 * @Return: ----.
 *
 ************************************************/
void getLocal(int local) {
  switch (local) {
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

/***********************************************
 *
 * @Purpose: Save the floor name  where lift reached destination.
 * @Parameters:     in: destination = the floor number where lift stopped.
 * @Return: Returns the floor name where the lift has arrived.
 *
 ************************************************/
int destinationStatus(int destination) {
  char status;
  switch (destination) {
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
/***********************************************
*
* @Purpose: Calculate the total price of an elevator inspection.
* @Parameters:     in: floors = number of times the floor inspection level has
                   been exceeded.
* @Return: Returns the total price of INSPECTION_PRICE * times_exceeded.
*
************************************************/
int calculatePrice(int floors) {
  float times_exceeded =
      (floors - FLOORS_FOR_INSPECTION) / FLOORS_FOR_INSPECTION;
  if (times_exceeded >= 0 && times_exceeded < 1) {
    times_exceeded = 1;
  } else {
    times_exceeded = times_exceeded + 1;
  }

  int total_price = INSPECTION_PRICE * times_exceeded;
  return total_price;
}

int main() {
  char option;
  char local, destination;
  char status_a = 'G';
  char status_b = 'G';
  char status_g = 'G';
  int local_int, destination_int, status_int1, status_int2, status_int3;
  int distance_a;
  int distance_b;
  int distance_c;
  int i;
  int count_a = 0;
  int count_b = 0;

  int count_g = 0;

  float price_a;
  float price_b;
  float price_g;

  int counter_rides1 = 0;
  int counter_rides2 = 0;
  int counter_rides3 = 0;

  int count_up1 = 0;
  int count_up2 = 0;
  int count_up3 = 0;
  int count_down1 = 0;
  int count_down2 = 0;
  int count_down3 = 0;

  char inspection;

  int inspection_status1 = 0;
  int inspection_status2 = 0;
  int inspection_status3 = 0;

  float sum;
  float total_sum;
  float prev = 0;
  printf("Welcome to our building!");

  do {
    // Selection of functionality.
    printf("\n\nA. Use Elevator | B. Statistics | C. Elevators inspection | Q. "
           "Quit\n");
    printf("Enter option: ");
    scanf(" %c", &option);

    if (option != 'A' && option != 'a' && option != 'B' && option != 'b' &&
        option != 'C' && option != 'c' && option != 'Q' && option != 'q') {
      printf("(ERROR) Invalid option");
    }

    if (option == 'Q' && option == 'q') {
      printf("See you later");
    }

    switch (option) {
    case 'A':
    case 'a':
      printf("\n");
      do {
        printf("From? ");
        scanf(" %c", &local);
      } while (local != 'A' && local != 'B' && local != 'G' &&
               !(local >= '1' && local <= '5'));

      switch (local) {
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
        while (destination != 'A' && destination != 'G' && destination != 'B' &&
               destination != '1' && destination != '2' && destination != '3' &&
               destination != '4' && destination != '5') {
          printf("To? ");
          scanf(" %c", &destination);
        }
        break;
      }

      while (local == destination) {
        printf("(ERROR) Are you joking?\n\n");
        do {
          printf("\n\nA. Use Elevator | B. Statistics | C. Elevators "
                 "inspection | Q. Quit\n");
          printf("Enter option: ");
          scanf(" %c", &option);
          if (option != 'A' && option != 'a' && option != 'B' &&
              option != 'b' && option != 'C' && option != 'c' &&
              option != 'Q' && option != 'q') {
            printf("(ERROR) Invalid option\n\n");
          }
        } while (option != 'A' && option != 'a' && option != 'B' &&
                 option != 'b' && option != 'C' && option != 'c' &&
                 option != 'Q' && option != 'q');
        do {
          // Selection of starting and ending floors.
          printf("From? ");
          scanf(" %c", &local);
          switch (local) {
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
            while (destination != 'A' && destination != 'G' &&
                   destination != 'B' && destination != '1' &&
                   destination != '2' && destination != '3' &&
                   destination != '4' && destination != '5') {
              printf("To? ");
              scanf(" %c", &destination);
            }
            break;
          };
        } while (local != 'A' && local != 'B' && local != 'G' &&
                 !(local >= '1' && local <= '5'));
      };
      // Convert the floor name to its number.
      status_int1 = convertChar(status_a);
      status_int2 = convertChar(status_b);
      status_int3 = convertChar(status_g);
      local_int = convertChar(local);
      destination_int = convertChar(destination);
      // Counting distance between current lift position and call floor.
      distance_a = status_int1 - local_int;
      if (distance_a < 0) {
        distance_a = -distance_a;
      }
      distance_b = status_int2 - local_int;
      if (distance_b < 0) {
        distance_b = -distance_b;
      }
      distance_c = status_int3 - local_int;
      if (distance_c < 0) {
        distance_c = -distance_c;
      }
      // Elevator selection.
      char elevator_assigned = 'M';
      if (elevator_assigned == 'M' && distance_a < distance_b &&
          distance_a < distance_c) {
        elevator_assigned = 'A';
      }

      if (elevator_assigned == 'M' && distance_b < distance_a &&
          distance_b < distance_c) {
        elevator_assigned = 'B';
      }

      if (elevator_assigned == 'M' && distance_c < distance_a &&
          distance_c < distance_b) {
        elevator_assigned = 'C';
      }

      if (elevator_assigned == 'M' && distance_a == distance_b) {
        elevator_assigned = (count_a <= count_b) ? 'A' : 'B';
      }

      if (elevator_assigned == 'M' && distance_a == distance_c) {
        elevator_assigned = (count_a <= count_g) ? 'A' : 'C';
      }

      if (elevator_assigned == 'M' && distance_b == distance_c) {
        elevator_assigned = (count_b <= count_g) ? 'B' : 'C';
      }

      if (elevator_assigned == 'M') {
        elevator_assigned = 'A';
      }

      if (elevator_assigned == 'A') {
        printf("Elevator Alpha assigned\n");
        counter_rides1++;
        // Update status of elevator Alpha.
        status_a = getStatus(status_int1);
        // Check if elevator Alpha needs to move to start point.
        if (status_int1 != local_int) {
          printf("%c", status_a);
          if (local_int > status_int1) {
            upLocal(status_int1, local_int);
          } else {
            if (local_int < status_int1) {
              downLocal(status_int1, local_int);
            }
          }
        }
        // Check if destination is below or above the current floor.
        if (destination_int > local_int) {
          printf("Going up! ");
          count_up1++;
          // Get the number of start floor.
          getLocal(local_int);
          for (i = local_int + 1; i <= destination_int; i++) {
            switch (i) {
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
            count_a++;
          };
          // Update elevator Alpha status after reaching destination.
          status_a = destinationStatus(destination_int);
        }

        if (destination_int < local_int) {
          printf("Going down! ");
          count_down1++;
          getLocal(local_int);
          for (i = local_int - 1; i >= destination_int; i--) {
            switch (i) {
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
            count_a++;
          };
          // Update elevator Alpha status after reaching destination.
          status_a = destinationStatus(destination_int);
        }
      } else {
        if (elevator_assigned == 'B') {
          printf("Elevator Beta assigned\n");
          counter_rides2++;
          // Update status of elevator Beta.
          status_b = getStatus(status_int2);
          // Check if elevator Beta needs to move to start point.
          if (status_int2 != local_int) {
            printf("%c", status_b);
            if (local_int > status_int2) {
              upLocal(status_int2, local_int);
            } else {
              if (local_int < status_int2) {
                downLocal(status_int2, local_int);
              }
            }
          }
          // Check if destination is below or above the current floor.
          if (destination_int > local_int) {
            printf("Going up! ");
            count_up2++;
            // Get the number of start floor.
            getLocal(local_int);
            for (i = local_int + 1; i <= destination_int; i++) {
              switch (i) {
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
              count_b++;
            };
            // Update elevator B status after reaching destination.
            status_b = destinationStatus(destination_int);
          }

          if (destination_int < local_int) {
            printf("Going down! ");
            count_down2++;
            // Get the number of start floor.
            getLocal(local_int);
            for (i = local_int - 1; i >= destination_int; i--) {
              switch (i) {
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
              count_b++;
            };
            // Update elevator B status after reaching destination.
            status_b = destinationStatus(destination_int);
          }
        } else {
          if (elevator_assigned == 'C') {
            counter_rides3++;
            printf("Elevator Gamma assigned\n");
            // Update status of elevator Gamma.
            status_g = getStatus(status_int3);
            // Check if elevator Gamma needs to move to start point.
            if (status_int3 != local_int) {
              printf("%c", status_g);
              if (local_int > status_int3) {
                upLocal(status_int3, local_int);
              } else {
                if (local_int < status_int3) {
                  downLocal(status_int3, local_int);
                }
              }
            }
            // Determine whether the destination is above or below the current
            // floor.
            if (destination_int > local_int) {
              printf("Going up! ");
              count_up3++;
              switch (local_int) {
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

              for (i = local_int + 1; i <= destination_int; i++) {
                switch (i) {
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
                count_g++;
              };
              // Update elevator Gamma status after reaching destination.
              status_g = destinationStatus(destination_int);
            }

            if (destination_int < local_int) {
              printf("Going down! ");
              count_down3++;
              switch (local_int) {
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
              for (i = local_int - 1; i >= destination_int; i--) {
                switch (i) {
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
                count_g++;
              };
              // Update elevator Gamma status after reaching destination.
              status_g = destinationStatus(destination_int);
            }
          }
        }
      }
      break;
    case 'B':
    case 'b':
      printf("\nElevators statistics:\n\n");
      printf("ALPHA: %d rides (%d-%d) and %d floors traveled\n", counter_rides1,
             count_up1, count_down1, count_a);
      printf("BETA: %d rides (%d-%d) and %d floors traveled\n", counter_rides2,
             count_up2, count_down2, count_b);
      printf("GAMMA: %d rides (%d-%d) and %d floors traveled", counter_rides3,
             count_up3, count_down3, count_g);
      break;
    case 'C':
    case 'c':
      if (count_a >= FLOORS_FOR_INSPECTION ||
          count_b >= FLOORS_FOR_INSPECTION ||
          count_g >= FLOORS_FOR_INSPECTION) {
        // Check and schedule inspections for each elevator if necessary

        if (count_a >= FLOORS_FOR_INSPECTION) {
          printf("\n");
          printf("Elevator Alpha: inspection required");
          inspection_status1 = 1;
          price_a = calculatePrice(count_a);
        }

        if (count_b >= FLOORS_FOR_INSPECTION) {
          printf("\n");
          printf("Elevator Beta: inspection required");
          inspection_status2 = 1;
          price_b = calculatePrice(count_b);
        }

        if (count_g >= FLOORS_FOR_INSPECTION) {
          inspection_status3 = 1;
          printf("\n");
          printf("Elevator Gamma: inspection required");
          price_g = calculatePrice(count_g);
        }
        printf("\n\n");
        do {
          printf("Perform inspection? ");
          scanf(" %c", &inspection);
        } while (inspection != 'Y' && inspection != 'y' && inspection != 'N' &&
                 inspection != 'n');

        if (inspection == 'Y' || inspection == 'y') {
          // Check process if elevators require inspection
          if (inspection_status1 == 1 && inspection_status2 == 1 &&
              inspection_status3 == 1) {
            printf("Elevator Alpha inspected! (%.f euros)\n", price_a);
            printf("Elevator Beta inspected! (%.f euros)\n", price_b);
            printf("Elevator Gamma inspected! (%.f euros)\n", price_g);
            // Reset Alpha, Beta and counters.
            count_a = 0;
            count_b = 0;
            count_g = 0;
            // Calculate expenses.
            sum = price_a + price_b + price_g;
            total_sum = sum + prev;
            // Reset inspection statuses.
            inspection_status1 = 0;
            inspection_status2 = 0;
            inspection_status3 = 0;
            printf("\nAccumulated expense: %.f euros", total_sum);
            prev = sum;
          } else {
            if (inspection_status1 == 1 && inspection_status2 == 1) {
              printf("Elevator Alpha inspected! (%.f euros)\n", price_a);
              printf("Elevator Beta inspected! (%.f euros)\n", price_b);
              // Reset Alpha and Beta counters.
              count_a = 0;
              count_b = 0;
              // Calculate expenses.
              sum = price_a + price_b;
              total_sum = sum + prev;
              // Reset inspection statuses.
              inspection_status1 = 0;
              inspection_status2 = 0;
              printf("\nAccumulated expense: %.f euros", total_sum);
              prev = sum;
            } else {
              if (inspection_status1 == 1 && inspection_status3 == 1) {
                printf("Elevator Alpha inspected! (%.f euros)\n", price_a);
                printf("Elevator Gamma inspected! (%.f euros)\n", price_g);
                // Reset Alpha and Gamma counters.
                count_a = 0;
                count_g = 0;
                // Calculate expenses.
                sum = price_a + price_g;
                total_sum = sum + prev;
                // Reset inspection statuses.
                inspection_status1 = 0;
                inspection_status3 = 0;
                printf("\nAccumulated expense: %.f euros", total_sum);
                prev = sum;
              } else {
                if (inspection_status2 == 1 && inspection_status3 == 1) {
                  printf("Elevator Beta inspected! (%.f euros)\n", price_b);
                  printf("Elevator Gamma inspected! (%.f euros)\n", price_g);
                  // Reset Beta and Gamma counters.
                  count_b = 0;
                  count_g = 0;
                  // Calculate expenses.
                  sum = price_b + price_g;
                  total_sum = sum + prev;
                  // Reset inspection statuses.
                  inspection_status2 = 0;
                  inspection_status3 = 0;
                  printf("\nAccumulated expense: %.f euros", total_sum);
                  prev = sum;
                } else {
                  if (inspection_status1 == 1) {
                    printf("Elevator Alpha inspected! (%.f euros)\n", price_a);
                    // Reset Alpha counter.
                    count_a = 0;
                    // Calculate expenses.
                    sum = price_a;
                    total_sum = sum + prev;
                    // Reset inspection status.
                    inspection_status1 = 0;
                    printf("\nAccumulated expense: %.f euros", total_sum);
                    prev = sum;
                  };
                  if (inspection_status2 == 1) {
                    printf("Elevator Beta inspected! (%.f euros)\n", price_b);
                    // Reset Beta counter.
                    count_b = 0;
                    sum = price_b;
                    // Calculate expenses.
                    total_sum = sum + prev;
                    // Reset inspection status.
                    inspection_status2 = 0;
                    printf("\nAccumulated expense: %.f euros", total_sum);
                    prev = sum;
                  }
                  if (inspection_status3 == 1) {
                    printf("Elevator Gamma inspected! (%.f euros)\n", price_g);
                    // Reset Gamma counter.
                    count_g = 0;
                    // Calculate expenses.
                    sum = price_g;
                    total_sum = sum + prev;
                    // Reset inspection status.
                    inspection_status3 = 0;
                    printf("\nAccumulated expense: %.f euros", total_sum);
                    prev = sum;
                  }
                }
              }
            }
          }
        } else {
          if (inspection == 'N' || inspection == 'n') {
            total_sum = sum + prev;

            printf("\nAccumulated expense: %.f euros", total_sum);
          }
        }
      } else {
        printf("No required inspection\n\n");
        printf("Accumulated expense: %.f euros", total_sum);
      }

      break;

    case 'Q':
    case 'q':
      printf("\n");
      printf("See you later!");
      break;
    default:
      break;
    }
  } while (option != 'Q' && option != 'q');

  return 0;
}