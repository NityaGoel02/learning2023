level 1 ques 3

#include <stdio.h>

// Structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Converting everything to seconds for easier calculation
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculating the absolute difference in seconds
    int differenceInSeconds = totalSeconds2 - totalSeconds1;
    if (differenceInSeconds < 0) {
        differenceInSeconds *= -1;
    }

    // Converting the difference back to hours, minutes, and seconds
    diff.hours = differenceInSeconds / 3600;
    differenceInSeconds %= 3600;
    diff.minutes = differenceInSeconds / 60;
    diff.seconds = differenceInSeconds % 60;

    return diff;
}

int main() {
    struct Time time1, time2, difference;

    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    difference = calculateTimeDifference(time1, time2);

    printf("\n");
    printf("Time difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
