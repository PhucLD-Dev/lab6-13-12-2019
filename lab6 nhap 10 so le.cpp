#include <stdio.h>
int main(){
	printf("nhap 10 so le\n");
	int aray[10];
	for(int i=0;i<10;i++)
	{
		do{
			printf("so le thu %d la ", i+1);
			scanf("%d; ",&aray[i]);
		}while(aray[i]%2==0);
	}
	return 0;
}
