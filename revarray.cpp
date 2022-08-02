#include <stdio.h>
#include <stdlib.h>
void fill(int *a,int n){
    for(int i=0;i<n;i++){
        printf("Enter Element : ");
        scanf("%d",(a+i));
    }
}
void display(int *a,int n){
    printf("\nArray Elements : ");
    for(int i=0;i<n;i++){
        printf("%d\t",*(a+i));
    }
}
void reverse(int *a,int n){
    int i=0,tmp=0;
    while(i<=n/2){
        tmp=*(a+i);
        *(a+i)=*(a+(n-1));
        *(a+(n-1))=tmp;
        i++;
        n--;
    }
}

void main()
{
    int *a;
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    fill(a,n);
    display(a,n);
    reverse(a,n);
    display(a,n);
}
