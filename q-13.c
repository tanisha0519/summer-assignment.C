#include <stdio.h>
int main()
{
    int choice;
    int availableSeats = 50;
    int bookedSeats = 0;
    int seats;
    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Booking Details\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Available Seats: %d\n", availableSeats);
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);
                if (seats <= availableSeats && seats > 0)
                {
                    availableSeats -= seats;
                    bookedSeats += seats;
                    printf("%d ticket(s) booked successfully.\n", seats);
                }
                else
                {
                    printf("Booking failed! Not enough seats available.\n");
                }
                break;
            case 2:
                printf("\n----- Booking Details -----\n");
                printf("Total Seats     : 50\n");
                printf("Booked Seats    : %d\n", bookedSeats);
                printf("Available Seats : %d\n", availableSeats);
                break;
            case 3:
                if (bookedSeats == 0)
                {
                    printf("No tickets booked yet.\n");
                }
                else
                {
                    printf("Enter number of tickets to cancel: ");
                    scanf("%d", &seats);
                    if (seats > 0 && seats <= bookedSeats)
                    {
                        bookedSeats -= seats;
                        availableSeats += seats;
                        printf("%d ticket(s) cancelled successfully.\n", seats);
                    }
                    else
                    {
                        printf("Invalid number of tickets.\n");
                    }
                }
                break;
            case 4:
                printf("Thank you for using the Ticket Booking System!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}