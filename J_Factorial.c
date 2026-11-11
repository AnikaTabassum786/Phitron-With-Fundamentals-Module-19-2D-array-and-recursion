#include<stdio.h>

long long int recursion(int n){
   if(n==0){
    return 1;
   }
   long long int multi = n*recursion(n-1);
   return multi;
}

int main(){

    int n;
    scanf("%d",&n);

   long long int result = recursion(n);
   printf("%lld",result);
    
    return 0;
}