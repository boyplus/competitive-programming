#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_ququq<int> queue
    int i=0,j=0,k=0,n=0;
    int max;
    scanf("%d",&max);
    int num[300]={0};
    int count=0;
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            for(k=0;k<max;k++)
            {
                if((i*6)+(j*9)+(k*20) <= max && (i*6)+(j*9)+(k*20)!=0)
                {
                    num[count] = (i*6)+(j*9)+(k*20);
                    queue.push(num[count]);
                    //printf("%d\n",num[count]);
                    count++;
                }
            }
        }
    }
    k=0;
    int temp =0;
    for(i=0;i<count;i++)
    {
        num[i] = queue.top();
        queue.pop();
    }
    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count-1;j++)
        {
            if(num[i] == num[j])
            {
                num[j] = -1;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        if(num[i] != -1)
        {
            printf("%d\n",num[i]);
        }
    }
    if(count==0)
    {
        printf("no\n");
    }
    return 0;
}
