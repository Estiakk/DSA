#include<stdio.h>
int main(){
    int n,search,found=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for(int i=0; i<n; i++){
        if(arr[i]==search){
            printf("%d is found in position %d", search, i+1);
            found=1;
        }
    }
    if(found==0)
        printf("Position not found");
    return 0;
}