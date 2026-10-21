#include <stdio.h>

int BinarySearch(int arr[], int n, int key, int low, int high) {
    int loc=-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(arr[mid]==key) {
           loc=mid;
           break;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return loc;
}

int main() {
    int n, key;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in sorted order: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to be searched: ");
    scanf("%d", &key);
    //
    int low=0, high=n;
    int loc=BinarySearch(arr, n, key, low, high);
    if(loc==-1)
        printf("Element not found.");
    else
        printf("Element found at %d position.", loc+1);
    return 0;
}