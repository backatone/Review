#include "../include/head.h"
#include "../include/common.h"

//#define len 100

//start end means the index of the first and last number of the being sorted array
void insertsort(int *target,int start,int end)
{
if (start==end)
return;
if (start>end)
swap(&start,&end);
int i,j,tmp;
for (i=start+1;i<=end;i++)
{
tmp = target[i];
for (j=i;j>start && tmp<target[j-1];j--)
{target[j] = target[j-1];}
target[j] = tmp;
}
}

/* for test
void main()
{
int target[len];
int i,j,tmp;
tmp = len;
for (i=0;i<len;i++,tmp--)
target[i] = tmp;

insertsort(target,0,len-1);

for (i=0;i<len;i++)
printf("%d ",target[i]);	
printf("\n");
}

*/
