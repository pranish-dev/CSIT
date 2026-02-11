#include<stdio.h>
void search(int n){
    int arr[n], key, i;
    for(i=0; i<n; i++){
          printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for(i=0; i<n; i++){
        if(arr[i] == key){
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found in the array.\n");
}
int main(){
    search(10);
    return 0;
}