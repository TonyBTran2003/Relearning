#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct {
    int *data;      // pointer to the raw array on the heap
    int size;       // number of items currently stored
    int capacity;   // number of items the array can hold
} Vector;


// Pick a starting capacity
// Minimum is 16
// If requested is bigger than 16, go up by powers of 2
int choose_capacity(int requested) {
    int capacity = 16;

    while (capacity < requested) {
        capacity *= 2;
    }
    return capacity;
}

void vector_init(Vector *v, int requested) {
    v->size = 0;
    v->capacity = choose_capacity(requested);
    v->data = malloc(v->capacity * sizeof(int));

    if (v->data == NULL) {
        printf("malloc failed\n");
        exit(1);
    }
}

bool is_empty(Vector *v){
    return v->size == 0;
    
}

int size(Vector *v){
    return v->size;
}

int capacity(Vector *v){
    return v->capacity;
}

int at(Vector *v, int index) {
    
}
// Creating my own vector class with all functions in C
int main(void){
    return 0;
}