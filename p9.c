#include<stdio.h>

void main(){

	int n;
	printf("Enter size : ");
	scanf("%d",&n);

	int a[n];
	for(int i=0; i<n ; i++){

		scanf("%d",&a[i]);
	}

	for(int i=0; i<n; i++){

		if(a[i]%5==0){
		
			printf("First element divisible by 5 found at index %d\n",i);
			break;
		}
	}
}
