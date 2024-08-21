
# C Array Operations

This project includes a collection of functions for basic array operations in C. The functions provided include searching for a value in an array, copying an array, summing array elements, reversing an array, and sorting an array using Bubble Sort.

## Features

- **`find_value`**: Searches for a specific value in an array and returns its index.
- **`copy_array`**: Copies the contents of one array to another.
- **`sum_array`**: Computes the sum of all elements in an array.
- **`reverse_array`**: Reverses the order of elements in an array.
- **`sort_array`**: Sorts an array in ascending order using the Bubble Sort algorithm.

## Functions

### `int find_value(int *array, int size, int value)`

Searches for `value` in the array. Returns the index of the first occurrence, or `-1` if the value is not found.

**Parameters:**
- `array`: Pointer to the start of the array.
- `size`: Number of elements in the array.
- `value`: Value to search for.

### `void copy_array(int *src, int *dest, int size)`

Copies elements from the `src` array to the `dest` array.

**Parameters:**
- `src`: Pointer to the source array.
- `dest`: Pointer to the destination array.
- `size`: Number of elements to copy.

### `int sum_array(int *array, int size)`

Calculates the sum of all elements in the array.

**Parameters:**
- `array`: Pointer to the start of the array.
- `size`: Number of elements in the array.

**Returns:**
- Sum of the elements.

### `void reverse_array(int *array, int size)`

Reverses the elements of the array in place.

**Parameters:**
- `array`: Pointer to the array.
- `size`: Number of elements in the array.

### `void sort_array(int *array, int size)`

Sorts the array in ascending order using the Bubble Sort algorithm.

**Parameters:**
- `array`: Pointer to the array.
- `size`: Number of elements in the array.

## Compilation and Execution

To compile and run the project, follow these steps:

1. **Compile**:
   ```bash
   gcc -o array_operations main.c
   ```

2. **Run**:
   ```bash
   ./array_operations
   ```

## Example

### `main.c`

```c
#include <stdio.h>

// Function prototypes
int find_value(int *array, int size, int value);
void copy_array(int *src, int *dest, int size);
int sum_array(int *array, int size);
void reverse_array(int *array, int size);
void sort_array(int *array, int size);

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array) / sizeof(array[0]);
    int index, sum;
    int copy[5];

    // Example usage of find_value
    index = find_value(array, size, 22);
    printf("Value 22 found at index: %d\n", index);

    // Example usage of copy_array
    copy_array(array, copy, size);
    printf("Copied array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");

    // Example usage of sum_array
    sum = sum_array(array, size);
    printf("Sum of array elements: %d\n", sum);

    // Example usage of reverse_array
    reverse_array(array, size);
    printf("Reversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Example usage of sort_array
    sort_array(array, size);
    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
```

## Algorithm Details

### Bubble Sort

Bubble Sort is a simple sorting algorithm that:

1. Compares adjacent pairs of elements in the array.
2. Swaps the elements if they are out of order.
3. Repeats the process until the array is sorted.

The algorithm performs multiple passes through the array, moving larger elements towards the end of the array with each pass.
