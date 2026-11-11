// #include <stdio.h>

// int recursion(char s[], int i)
// {
//     if (s[i] == '\0')
//     {
//         return;
//     }
    
//     int count = 0;

//     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
//         s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
//     {
//         count++;
//     }

//     return count + recursion(s, i + 1);
  
// }

// int main()
// {

//     char s[201];
//     scanf("%s", s);
//     int result = recursion(s, 0);
//     printf("%d",result);
//     return 0;
// }


#include <stdio.h>

int recursion(char s[], int i)
{
    if (s[i] == '\0')
    {
        return;
    }
    
    int cnt = recursion(s, i + 1);

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
     return cnt+1;
    }
    else{
        return cnt;
    }
}

int main()
{

    char s[201];
    fgets(s,201,stdin);
    int result = recursion(s, 0);
    printf("%d",result);
    return 0;
}