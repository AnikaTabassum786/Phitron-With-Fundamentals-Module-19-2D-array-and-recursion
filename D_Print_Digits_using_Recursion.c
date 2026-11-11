#include <stdio.h>

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    int result = n / 10;
    recursion(result);
    int last = n % 10;
    printf("%d ", last);
}

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int n;
        scanf("%d", &n);
        if(n==0){
         printf("%d",0);
        }
        recursion(n);
        printf("\n");
    }
   

    return 0;
}