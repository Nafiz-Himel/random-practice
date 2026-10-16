#include <stdio.h>
#include <stdbool.h>
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
 
    bool is = false;
    for (int i = 0; i < 14; i++)
    {
        if (n % lucky[i] == 0)
        {
            is = true;
            break;
        }
    }
 
    if (is == true)
        printf("YES");
    else
        printf("NO");
 
    return 0;
}