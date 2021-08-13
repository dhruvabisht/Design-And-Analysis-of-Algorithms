/*
Name: DHRUVA BISHT
Section: DS
Class Roll No.: 25
University Roll No.: 2015162
*/
#include<stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    while(temp--){
        int size;
        scanf("%d",&size);
        int a[size],i,j,k,flag=0;
        for(i=0;i<size;i++)
            scanf("%d",&a[i]);
        for(i=0;i<size-2;i++){
            for(j=i+1;j<size-1;j++){
                for(k=j+1;k<size;k++){
                        if(a[i]+a[j]==a[k]){
                            printf("%d,%d,%d\n",i+1,j+1,k+1);
                            flag=1;
                            goto outer;
                        }
                }
            }
        }
        outer:
        if(flag==0){
            printf("No sequence found.\n");
        }
    }
    return 0;
}
