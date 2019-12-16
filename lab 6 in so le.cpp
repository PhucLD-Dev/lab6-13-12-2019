#include <stdio.h>
int main(){
	printf("in ra cac so le trong mang\n");
	int n;
	printf("so phan tu n = ");
	scanf("%d",&n);
	int aray[n];
	for(int i=0;i<n;i++)
	{
		printf("so thu %d la ",i+1);
		scanf("%d",&aray[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(aray[i]%2!=0){
			printf("%d; ",aray[i]);
		}
	}
	return 0;
}
