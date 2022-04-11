#include<stdio.h>
int main()
{
    int ca;
    scanf("%d",ca);
    while(ca--)
    {
        int num,loop=0,key,i=0;
        scanf("%d",num);
        int arr[num];
        for(int i=0;i<num;i++)
        scanf("%d",arr[i]);
        scanf("%d",key);
        for(;i<num;i++)
        {
            loop++;
            if(key==arr[i])
            {
                printf("Present %d\n",loop);
                break;
            }
        }
        if(i==num)
        printf("Not Present %d\n",loop);
    }
}
