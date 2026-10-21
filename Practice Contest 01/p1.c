#include <stdio.h>
int main()
{
    int a,i,p,e;
    scanf("%d %d %d %d",&a,&i,&p,&e);

    if(a>=30 && i>=95 && p>=90){
        printf("Selected\n");
    }
    else if(a>=21 && a<=35 && i>=80 && p>=70 && 2>=e){
        printf("Selected\n");
    }
    else{
        printf("Rejected\n");
    }
    return 0;
}