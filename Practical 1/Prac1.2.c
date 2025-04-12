// Write a c program on 2D array to Increase & Decrease
//          a. No of subarrays
//          b. elements in the subarrays

#include <stdio.h>
#include <stdlib.h>

void printArray(int **arr, int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols, newRows, newCols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of cols: ");
    scanf("%d", &cols);
    
    int **arr = (int **)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++){
         arr[i] = (int *)malloc(cols * sizeof(int));
         for (int j = 0; j < cols; j++){
             printf("Enter value for index [%d][%d]: ", i,j);
             scanf("%d", &arr[i][j]);
         }
    }
    printf("Initital Array: \n");
    printArray(arr, rows, cols);
    
    newRows = rows + 2;
    arr = (int **)realloc(arr, newRows * sizeof(int *));
    for(int i = rows; i < newRows; i++){
        arr[i] = (int *)malloc(cols * sizeof(int));
        for(int j = 0; j < cols; j++){
            arr[i][j] = 0;
        }
    }
    printf("\nAfter Increasing Rows: \n");
    printArray(arr, newRows, cols);
    
    newCols = cols + 2;
    for(int i = 0; i < newRows; i++){
        arr[i] = (int *)realloc(arr[i], newCols * sizeof(int));
        for(int j = cols; j < newCols; j++){
            arr[i][j] = 0;
        }
    }
    printf("After Increasing Columns:\n");
    printArray(arr, newRows, newCols);
    
    rows = newRows - 1;
    for(int i = rows; i < newRows; i++){
        free(arr[i]);
    }
    arr = (int **)realloc(arr, rows * sizeof(int *));
    
    printf("\nAfter decreasing Rows:\n");
    printArray(arr, rows, newCols);
    
    cols = newCols - 1;
    for(int i = 0; i < rows; i++){
        arr[i] = (int *)realloc(arr[i], cols * sizeof(int));
    }
    printf("After decreasing Columns:\n");
    printArray(arr, rows, cols);
    
    for(int i = 0; i < rows; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}