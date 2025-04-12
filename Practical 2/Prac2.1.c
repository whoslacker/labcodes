// Write a program to compare malloc and calloc by allocating memory for an array and printing the uninitialized values.
#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("Allocating memory using malloc:\n");
    int malloc_size;
    
    printf("Enter number of elements: ");
    scanf("%d", &malloc_size);
    
    int *malloc_arr = (int *)malloc(malloc_size * sizeof(int));
    if(malloc_arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    else{
        printf("Values from malloc (uninitialized):\n");
        for(int i = 0; i < malloc_size; i++){
            printf("Element at index %d is %d\n", i, malloc_arr[i]);
        }
    }
    
    printf("\nAllocating memory using calloc:\n");
    int calloc_size;
    
    printf("Enter number of elements: ");
    scanf("%d", &calloc_size);
    
    int *calloc_arr = (int *)calloc(calloc_size, sizeof(int));
    if(calloc_arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    else{
        printf("Values from calloc (initialized to 0):\n");
        for(int i = 0; i < calloc_size; i++){
            printf("Element at index %d is %d\n", i, calloc_arr[i]);
        }
    }
    
    free(malloc_arr);
    free(calloc_arr);
    
    return 0;
}