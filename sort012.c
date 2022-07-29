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
void sort012(int a[], int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch(a[mid]){
            case 0:
            swap(&a[low++],&a[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(&a[mid],&a[high--]);
            break;

        }
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
