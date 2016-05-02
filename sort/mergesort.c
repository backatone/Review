#include "../include/common.h"
#include "../include/head.h"

//#define len 100

void merge(int *target,int *tmpArr,int lstart,int lend,int end)
{
	int i,num,rstart,rend;
	num = end - lstart + 1;
	i = lstart;
	rstart = lend + 1;
	rend = end;
	while (lstart<=lend && rstart<=rend){
		if (target[lstart]<target[rstart]){tmpArr[i++] = target[lstart++];}	
		else{tmpArr[i++] = target[rstart++];}
	}
	while (lstart<=lend){tmpArr[i++] = target[lstart++];}
	while (rstart<=rend){tmpArr[i++] = target[rstart++];}
	for (i=0;i<num;i++,end--){target[end] = tmpArr[end];}
}

void mergesort(int *target,int *tmpArr,int start,int end)
{
	int center;
	if (start+10>end){insertsort(target,start,end);}
	else{
		center = (start + end)/2;
		mergesort(target,tmpArr,start,center);
		mergesort(target,tmpArr,center+1,end);
		merge(target,tmpArr,start,center,end);
	}	
	
}


/*
void main()
{
int *target = (int*)malloc(len*sizeof(int));
int *tmpArr = (int*)malloc(len*sizeof(int));
int i=0,tmp=len;
while (i<len)
target[i++] = tmp--;

mergesort(target,tmpArr,0,len-1);

for (i=0;i<len;i++)
printf("%d ",target[i]);
printf("\n");
free(target);
free(tmpArr);
}
*/
