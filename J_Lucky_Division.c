#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int flag = 1;

    for (int i = 0; i < 14; i++)
    {
        if (n % a[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("NO");
    }
    if(flag==0){
        printf("YES");
    }

    return 0;
}