/*
Name: DHRUVA BISHT
Section: DS
Class Roll No.: 25
University Roll No.: 2015162
*/
#include<stdio.h>
void sort(int *a,int left,int right){
    if(left<right){
        int m = (left+right)/2;
        sort(a,left,m);
        sort(a,m+1,right);
        merge(a,left,m,right);
    }
}
void merge(int *a,int left,int m,int right)
{
    int number1,number2,i,j,k;
    number1 = m-left+1;
    number2= right-m;
    int L[number1],R[number2];
    for(i=0;i<number1;i++)
        L[i]=a[i+left];
    for(j=0;j<number2;j++)
        R[j]=a[j+1+m];
    i=0;
    j=0;
    k = left;
    while(i<number1&&j<number2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(j<number2){
        a[k]=R[j];
        j++;
        k++;
    }
    while(i<number1){
        a[k]=L[i];
        i++;
        k++;
    }

}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,key,flag=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&key);
        sort(a,0,n-1);
        int j=n-1;
        i=0;
        while(i<j){
            if( a[i]+a[j]<key)
                i++;
            else if(a[i]+a[j]>key)
                j--;
            else{
                printf("%d %d,",a[i],a[j]);
                flag=1;
                i++;
                j--;
            }
        }
        printf("\n");
        if(flag==0)
            printf("The entered pair does not exist.\n");
    }
    return 0;
}

