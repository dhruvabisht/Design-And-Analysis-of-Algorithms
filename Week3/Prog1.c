/*
Name: DHRUVA BISHT
Section: DS
Class Roll No.: 25
University Roll No.: 2015162
*/
#include<stdio.h>
int main(){
    int temp;
    scanf("%d",&temp);
    while(temp--){
        int size,i,shift,comparison,flag=0;
        shift=comparison=0;
        scanf("%d",&size);
        int a[size];
        for(i=0;i<size;i++)
            scanf("%d",&a[i]);
        for(i=1;i<size;i++){
            int key=a[i];
            int j=i-1;
            while(j>=0&&key<a[j]){
                comparison++;
                shift++;
                flag = 1;
                a[j+1]=a[j];
                j--;
            }
            if(j!=-1)
                comparison++;
            a[j+1]=key;
            if(flag==1){
                shift++;
                flag = 0;
            }
        }
        for(i=0;i<size;i++)
            printf("%d ",a[i]);
        printf("\nComparisons: %d",comparison);
        printf("\nShift: %d\n\n",shift);
    }
    return 0;
}
