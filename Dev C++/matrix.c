#include <stdio.h>
#include <stdlib.h>

 

int** initialize_matrix(int **matrix, int number_of_rows, int number_of_columns, int (*function_setter)(int, int)){
    matrix = (int **) malloc(sizeof (int *) * number_of_rows);
    for(int index_y = 0; index_y < number_of_rows; index_y++){
        matrix[index_y] =  (int *) malloc(sizeof (int *) * number_of_columns);
        for(int index_x = 0; index_x < number_of_columns; index_x++){
            matrix[index_y][index_x] = function_setter(index_y, index_x);
        }
    }
    return matrix;
}

 

void update_matrix(int **matrix, int number_of_rows, int number_of_columns, int (*function_setter)(int, int, int)){
    for(int index_y = 0; index_y < number_of_rows; index_y++){
        for(int index_x = 0; index_x < number_of_columns; index_x++){
            matrix[index_y][index_x] = function_setter(index_y, index_x, matrix[index_y][index_x]);
        }
    }
}

 

void print_matrix(int **matrix, int number_of_rows, int number_of_columns){
    for(int index_y = 0; index_y < number_of_rows; index_y++){
        for(int index_x = 0; index_x < number_of_columns; index_x++){
            printf("%d, ",matrix[index_y][index_x]);
        }
        printf("\n");
    }
}

 

int set_value(int index_y, int index_x){
    return (index_y*10)+index_x;
}

 

int update_value(int index_y, int index_x, int previous_value){
    return previous_value*2;
}

 

int main(){
    int number_of_rows = 10, number_of_columns = 10;
    int square_matrix[number_of_rows][number_of_columns];
    int **m = initialize_matrix(square_matrix, number_of_rows, number_of_columns, set_value);
    print_matrix(m, number_of_rows, number_of_columns);
    printf("\n");
    update_matrix(m, number_of_rows, number_of_columns, update_value);
    print_matrix(m, number_of_rows, number_of_columns);
    return 0;
}
