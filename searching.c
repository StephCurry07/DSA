#include <stdio.h>

int linear_search(int arr[],int elem,int size){
    for(int i = 0; i < size;i++){
        if(arr[i] == elem){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int elem, int size){
    int low, mid, high;
    low = 0;
    high = size - 1;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == elem){
            return mid;
        }
        if(arr[mid] > elem)
            high = mid-1;
        else
            low = mid + 1;
    }
    return -1;
}


int main(){
    int arr[] = {2,4,5,7,8,9,35,86,567};
    printf("%d\n", linear_search(arr,4,sizeof(arr)/sizeof(int)));
    printf("%d\n", binary_search(arr,7,sizeof(arr)/sizeof(int)));
    return 0;
}