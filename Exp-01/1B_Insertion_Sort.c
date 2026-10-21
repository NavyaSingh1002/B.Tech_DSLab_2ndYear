#include<stdio.h>

void InsertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int j=i;
        while(j>0 && arr[j]<arr[j-1]) {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
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
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    InsertionSort(arr, n);
    return 0;
}