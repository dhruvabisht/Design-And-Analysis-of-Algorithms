/*
Name: DHRUVA BISHT
Section: DS
Class Roll No.: 25
University Roll No.: 2015162
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    while(temp--){
        int size;
        scanf("%d",&size);
        int a[size],i,j,count=0;
        for(i=0;i<size;i++)
            scanf("%d",&a[i]);
        int key;
        scanf("%d",&key);
        for(i=0;i<size-1;i++){
            for(j=i+1;j<size;j++){
                if(fabs(a[j]-a[i])==key){
                        count++;
                }
            }
        }
        if(count==0)
            printf("No Pair Found.\n");
        else
            printf("%d\n",count);
    }
    return 0;
}

