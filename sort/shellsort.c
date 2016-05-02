#include "../include/common.h"
#include "../include/head.h"


//#define len 100

void shellsort(int *target,int start,int end)
{
if (start==end)
return;
if (start>end)
swap(&start,&end);
int length = end - start + 1;
int i,j,interval,tmp;
for (interval=length/2;interval>0;interval/=2)
{
for (i=interval+start;i<=end;i++)
{
tmp = target[i];
for (j=i;j>=start+interval && tmp<target[j-interval];j-=interval)
{target[j] = target[j-interval];}
target[j] = tmp;
}
}
}

/*
void main()
{
int *target = (int*)malloc(len*sizeof(int));
int interval,i,j,tmp;
tmp = len;
for (i=0;i<len;i++,tmp--)
target[i] = tmp;

shellsort(target,0,len-1);

for (i=0;i<len;i++)
printf("%d ",target[i]);
printf("\n");

free(target);
}
*/
