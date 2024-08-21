#include <stdio.h>

int find_value(int *array, int size, int value){   

    for(int i = 0; i < size; i++){
        if(*array == value)
            return i;

        array++;           
    }
    return -1;       
}

void copy_array(int *src, int *dest, int size){
    
    for(int i = 0; i < size; i++){
        *dest = *src;
        src++; dest++;
    }

}

int sum_array(int *array, int size){

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *array;
        array++;
    }
    return sum;
}

void reverse_array(int *array, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        
        start++;
        end--;
    }
}

void sort_array(int *array, int size) {    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
