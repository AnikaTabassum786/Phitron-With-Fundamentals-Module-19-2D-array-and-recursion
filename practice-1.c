// #include<stdio.h>
// #include <string.h>

// int  recursion(char s[],int i){
//   if(s[i]=='\0' || s[i]=='\n'){
//     return 0;
//   }

//   int len=0;
//   if(s[i]!=0){
//     len++;
//   }
 
//   return len+recursion(s,i+1);
 
// }

// int main(){

//     char s[201];
//     fgets(s,201,stdin);
//     int result = recursion(s,0);
//     printf("%d",result);
//     return 0;
// }


#include<stdio.h>


int  recursion(char s[],int i){
  if(s[i]=='\0'){
    return 0;
  }

 int count = recursion(s,i+1);
 return count+1;
}

int main(){

    char s[201];
    fgets(s,201,stdin);
    int result = recursion(s,0);
    printf("%d",result);
    return 0;
}