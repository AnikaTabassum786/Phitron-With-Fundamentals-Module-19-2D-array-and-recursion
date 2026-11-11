#include<stdio.h>

long long int recursion(long long int a[],int n,int i){
  
    if(i==n-1){
      return a[i];
    }
    int sum=0;
    sum = a[i] + recursion(a,n,i+1);
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    long long int a[n];

    for(int i=0;i<n;i++){
     scanf("%lld",&a[i]); 
    }
    long long int result = recursion(a,n,0);
    printf("%lld",result);
     return 0;
}