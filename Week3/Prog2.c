/*
Name: DHRUVA BISHT
Section: DS
Class Roll No.: 25
University Roll No.: 2015162
*/

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int size,i,j,shift=0,comparison=0;
        scanf("%d",&size);
        int a[size];
        for(i=0;i<size;i++)
            scanf("%d",&a[i]);
        for(i=0;i<size-1;i++){
            int pos=i;
            for(j=i+1;j<size;j++){
                comparison++;
                if(a[j]<a[pos]){
                    pos=j;
                }
            }
            shift++;
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
        for(i=0;i<size;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",comparison);
        printf("\nShift: %d\n\n",shift);
    }
    return 0;
}
