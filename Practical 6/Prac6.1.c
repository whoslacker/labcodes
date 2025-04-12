// Define enumeration for the days of the week and display the name of the day based on its value.

#include <stdio.h>

enum weekDays {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main () {
    enum weekDays today = TUESDAY;
    printf("Today is: %d", today);
    
    return 0;
}