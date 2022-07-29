
#include <stdio.h>
#include <stdlib.h>

void allocate(int *a,int len){
    for (int i=0;i<len;i++){
        printf("\nEnter Element :");
        scanf("%d",(a+i));
    }
}
void display(int *a,int len){
    printf("\nArray Elements :");
    for (int i=0;i<len;i++){
        printf("\t%d",*(a+i));
    }
}
int kthmin(int *a,int len,int k){
    int i,j,lg;
    for (i = 0; i < k; i++) {
      lg=i;
      for (j = i+1; j < len; j++) {
        if(*(a+j)>*(a+lg))
          lg=j;
      }
      int temp=*(a+lg);
      *(a+lg)=*(a+i);
      *(a+i)=temp;
    }
    return(*(a+(k-1)));

}

void main()
{
    int *ary;
    int len,k;
    printf("Enter Length Of Array : ");
    scanf("%d",&len);
    ary=(int*)calloc(len,sizeof(int));
    allocate(ary,len);
    printf("Enter K : ");
    scanf("%d",&k);
    display(ary,len);
    printf("\n%dth largest element is %d \n", k ,kthmin(ary,len,k));;

}
