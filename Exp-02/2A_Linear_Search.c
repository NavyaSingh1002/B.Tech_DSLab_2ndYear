#include<stdio.h>

int LinearSearch(int arr[], int n, int key) {
    int loc=-1;
    for(int i=0; i<n; i++) {
        if(arr[i]==key) {
            loc=i;
            break;
        }
    }
    return loc; 
}

int main() {
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    int loc=LinearSearch(arr, n, key);
    if(loc==-1)
        printf("Element %d not found in the array.", key);
    else
        printf("Element %d found at position %d.", key, loc+1);
    return 0;
}
