#include<stdio.h>
#include<stdlib.h>
int countrange(int arr[],int isize)
{
	int i=0,icnt=0;
	for(i=0;i<isize;i++)
	{
	  if((arr[i]>0 && arr[i]<20))
	  {
	  	icnt++;
	  }	
	  
	}
	return icnt;
}
int main()
{
	int ilength=0,i=0;
	int *ptr=NULL;
	int iret=0;

	printf("ennter the numbers of elements");
	scanf("%d",&ilength);

   ptr=(int*)malloc(sizeof(int)*ilength);

   printf("eneter the elements\n");
   for(i=0;i<ilength;i++)
   {
   	scanf("%d",&ptr[i]);
   }

   iret=countrange(ptr,ilength);
   
   printf("count range is:%d",iret);

   free(ptr);
	return 0;
}