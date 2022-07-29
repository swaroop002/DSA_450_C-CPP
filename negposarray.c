// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void negpos(int a[], int n)
{
    int st=0,end=n-1;
    while(st<=end){
        if(a[st]<=0){
          st++;
        }
        else{
        swap(&a[st++],&a[end--]);
        }

    }
}

// { Driver Code Starts.

int main() {

        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        negpos(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");

    return 0;
}
  // } Driver Code Ends
