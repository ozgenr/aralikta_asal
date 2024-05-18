#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int baslangic,bitis,i,j,bayrak=1;
	printf("baslangic ve bitis degerini sirasiyla giriniz:");
	scanf("%d%d",&baslangic,&bitis);
	for(i=baslangic+1;i<bitis;i++)
	{  for(j=2;j<i&&bayrak==1;j++)
	   {  if((i%j)==0)
	      bayrak=0;
	   }
	   if(bayrak==1&&i!=1)
	   printf("%d ",i);
	   bayrak=1;
	
	}
	
	return 0;
}
