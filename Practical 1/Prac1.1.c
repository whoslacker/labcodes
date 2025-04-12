// Write a c program to increase or decrease the existing size of an 1D array.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int size, new_size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed.");
        return 1;
    }
    else {
        for(int i = 0; i < size; i++){
            printf("Enter element for index %d: ", i);
            scanf("%d", &arr[i]);
        }
            printf("\nValues stored in the array are: ");
            for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
    }
    printf("\n\nEnter new size of array: ");
    scanf("%d", &new_size);
    
    arr = (int *)realloc(arr, new_size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!");
    }
    else {
        if(new_size > size){
            for(int i = size; i < new_size; i++){
                printf("Enter element for index %d: ",i);
                scanf("%d", &arr[i]);
            }
        }
        printf("\nUpdated array elements are: ");
        for(int i = 0; i < new_size; i++){
            printf("%d ", arr[i]);
        }
    }
    free(arr);
    
    return 0;
}  