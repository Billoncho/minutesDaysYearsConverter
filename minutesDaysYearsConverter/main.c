/*
Author: Billy Ridgeway
Purpose: This programs converts the number of minutes entered by the
user to day and years and displays then on the command line.
Date: 21 May, 2022
*/

int main (int argc, char *argv[])
{
    int minutes = 0;
    double minutesInDay = 0;
    double minutesInYear = 0;
    double years = 0;
    double days = 0;

    // Ask user for input and assign to varible minutes.
    printf("Please enter the number of minutes you would like converted to days and years: \n");
    scanf("%d",&minutes);
    printf("You entered: %d\n\n", minutes);

    minutesInDay = (60 * 24);
    minutesInYear = (60 * 24 * 365);

    // Calculate the number of days.
    days = (minutes / minutesInDay);
    printf("Days equal: %f\n\n", days);

    // Calculate the number of years.
    years = (minutes / minutesInYear);
    printf("Years equal: %f\n\n", years);

    return 0;
}
