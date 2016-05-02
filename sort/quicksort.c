#include "../include/common.h"
#include "../include/head.h"

//#define len 100


int getmid(int *target,int start,int end)
{
	int center = (start+end)/2;
	if (target[start]>target[center]){swap(&target[start],&target[center]);}
	if (target[start]>target[end]){swap(&target[start],&target[end]);}
	if (target[center]>target[end]){swap(&target[center],&target[end]);}
	swap(&target[center],&target[end-1]);	
	return target[end-1];	
}
void quicksort(int *target,int start,int end)
{
	int center = (start+end)/2;
	int middle,i,j;
	if (start+10>end){insertsort(target,start,end);}
	else{
		middle = getmid(target,start,end);	
		i = start;
		j = end - 1;
		for (;;){
			while (target[++i]<middle);
			while (target[--j]>middle);
			if (i<j){swap(&target[i],&target[j]);}
			else{
				swap(&target[i],&target[end-1]);
				break;			
			}
		}
		quicksort(target,start,i-1);
		quicksort(target,i+1,end);
	}
}

/*
void main()
{
int *target = (int*)malloc(len*sizeof(int));
int i,tmp=len;
for (i=0;i<len;i++,tmp--){target[i] = tmp;}
quicksort(target,0,len-1);
for (i=0;i<len;i++)
printf("%d ",target[i]);
printf("\n");
free(target);
}
*/
