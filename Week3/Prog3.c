/*
Name: DHRUVA BISHT
Section: DS
Class Roll No.: 25
University Roll No.: 2015162
*/
#include<stdio.h>
void merge(int *a,int start,int mid,int end){
    int i,j,k,n,m;
    n = mid-start+1;
    m =end-mid;
    int l[m],r[n];
    for(i=0;i<n;i++)
        l[i]=a[start+i];
    for(j=0;j<m;j++)
        r[j]=a[mid+1+j];
    i=j=0;
    k=start;
    while(i<n&&j<m){
        if(l[i]<=r[j]){
            a[k]=l[i];
            i++;
        }
        else{
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<m){
        a[k]=r[j];
        j++;
        k++;
    }
}

void merge_sort(int *a,int start,int end){
    if(start<end){
        int mid =(start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}

int main(){
    int temp;
    scanf("%d",&temp);
    while(temp--){
        int size,flag=0;
        scanf("%d",&size);
        int a[size];
        for(int i=0;i<size;i++)
            scanf("%d",&a[i]);
        merge_sort(a,0,size-1);
        for(int i=0;i<size;i++){
            if(a[i]==a[i+1]){
                printf("YES\n");
                flag = 1;
                break;
            }
        }
        if(flag==0){
            printf("NO\n");
        }
    }
    return 0;
}


