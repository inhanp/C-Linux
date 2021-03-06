#include <stdio.h>

const int secondsPerMinute = 60;
const int minutesPerHour = 60;

void sumTimes() {
    int sumOfSeconds = 0;
    int minutes;
    int seconds;

    printf("To stop input, enter 0\n");

    while ( scanf("%d:%d\n", &minutes, &seconds) == 2 ) {
        sumOfSeconds += seconds + secondsPerMinute*minutes;
    }

    int totalSeconds = sumOfSeconds % secondsPerMinute;
    sumOfSeconds /= secondsPerMinute;
    int totalMinutes = sumOfSeconds % minutesPerHour;
    int totalHours = sumOfSeconds / minutesPerHour;

    printf("Total time: %d:%02d:%02d\n", totalHours, totalMinutes, totalSeconds);
}

int main(int argc, char** argv) {

    //check input error
    sumTimes();

    return 0;
}