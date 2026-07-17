#include <stdio.h>

void search(int arr[], int value, int n){
    int low = 0;
    int high = n - 1;
    int flag=1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == value){
            flag--;
            printf("%d found at position %d", value, mid+1);
            break;
        }
        else if (arr[mid] < value)
            low = mid + 1;
        else if(arr[mid]>value)
            high = mid - 1;
        }
        if(flag)
            printf("Position not found!!!");
}

int main(){
    int n,value;
    printf("Enter the element number: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d", &value);
    search(arr, value, n);
    return 0;
}