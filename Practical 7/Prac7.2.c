// Define a union to store data of different types (integer, float, and character).

#include <stdio.h>
#include <string.h>

union data {
    int roomNumber;
    float roomRent;
    char roomType[10];
};

int main () {
    union data room;
    
    room.roomNumber = 149;
    room.roomRent = 4325.34;
    strcpy("AC Room", room.roomType);
    
    printf("Room Number: %d", room.roomNumber);
    printf("Room Rent(INR): %.2f", room.roomRent);
    printf("Room Type: %s", room.roomType);
    
    return 0;
}