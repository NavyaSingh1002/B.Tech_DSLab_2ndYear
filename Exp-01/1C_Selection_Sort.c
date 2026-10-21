#include<stdio.h>

void SelectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int min=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[min])
                min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("\nArray after sorting:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting:\n");
    for(int i=0;i<n; i++) {
        printf("%d ", arr[i]);
    }
    SelectionSort(arr, n);
    return 0;
}