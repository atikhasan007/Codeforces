
#include<stdio.h>
#include<string.h>
int main()
{

    char n[100],a[100];
    int ln,i,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%s",&n);
        ln = strlen(n);
        if(ln<=10)
            printf("%s\n",n);

    else
    {
        printf("%c%d%c\n",n[0],ln-2,n[ln-1]);
    }
    }
    return 0;

}
