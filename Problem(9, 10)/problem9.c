#include <stdio.h>

void fill_array(int arr[], int size);
void rotate_array(int arr[], int size, int k);
void print_array(int arr[], int size);


int main(){
    int size, k;
    printf("Enter the size of the array between 1 and 1000: ");
    scanf("%d", &size);
    
    if(size < 1 || size > 1000){
        printf("the size is not within the range [1:1000]");
        return -1;
    }

    int arr[size];
    printf("\nFill the array :-\n");
    fill_array(arr, size);

    printf("\nEnter the number you want to rotate the array by: ");
    scanf("%d", &k);
    rotate_array(arr, size, k);

    printf("the array after rotate it by %d positions:- ", k);
    print_array(arr, size);

    return 0;
}


void fill_array(int arr[], int size){

    for(int i = 0; i < size; i++){
        printf("Enter the element number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }

}


void rotate_array(int arr[], int size, int k){
    int rotations = k % size;
    if(rotations == 0){
        return;
    }

    while(rotations > 0){
        int last_element = arr[size - 1];
        for(int i = size - 1; i > 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = last_element;
        rotations--;
    }
}

void print_array(int arr[], int size){

    printf("[");
    for(int i = 0; i < size; i++){
        if(i == size - 1){
            printf("%d", arr[i]);
        }
        else{
            printf("%d, ", arr[i]);
        }    
    }
    printf("]\n");
}