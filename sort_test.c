#include "./include/head.h"
#include "./include/common.h"

#define len 1000


void main()
{
	int *tmpArr = (int*)malloc(len*sizeof(int));
	int tmp = len;
	int i;
	int *target = (int*)malloc(len*sizeof(int));
	for (i=0;i<len;i++,tmp--){target[i] = tmp;}
//	quicksort(target,0,len-1);
//	insertsort(target,0,len-1);
//	mergesort(target,tmpArr,0,len-1);
	shellsort(target,0,len-1);
	for (i=0;i<len;i++){printf("%d ",target[i]);}
	printf("\n");
	free(target);
	free(tmpArr);
}
