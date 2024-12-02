#include<stdio.h>

void main(){

	int n;
	int prod =1;
	printf("Enter size : ");
	scanf("%d",&n);

	int a[n];

	
	for(int i=0; i<n; i++){
	
		scanf("%d",&a[i]);
		
		if(i%2!=0){
		
			prod *= a[i];
		}
	}

	printf("Product : %d\n",prod);

	
}
