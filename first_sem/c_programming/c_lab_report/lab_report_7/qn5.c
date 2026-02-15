#include<stdio.h>
void bubblesort(int n){
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the %d elements: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    bubblesort(n);
    return 0;
}