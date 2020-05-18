#include<stdio.h>
int main(){
    int n,arr[100],i,j,sum1=0,sum2=0,temp;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++){
        sum1+=arr[i];
    }
    for(i=1;i<n;i++){
        sum2+=arr[i];
    }
    printf("%d %d",sum1,sum2);
}
