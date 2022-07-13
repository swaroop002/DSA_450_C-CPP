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
void max_min(int *a,int n){
    int i=0,lg=0,sm;
    lg=*(a+i);
    sm=*(a+i);
    while(i<n-1){
        if(lg<*(a+(i+1))){
            lg=*(a+(i+1));
        }
        if(sm>*(a+(i+1))){
            sm=*(a+(i+1));
        }
    
        i++;
    }
    printf("\nLargest element is : %d",lg);
    
    printf("\nSmallest element is : %d",sm);
    
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
    max_min(a,n);
}
