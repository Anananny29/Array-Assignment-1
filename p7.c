#include<stdio.h>

void main(){

	int n;
	int EvenSum = 0;
	int OddSum = 0;
	int diff = 0;
	printf("Enter array size: ");
	scanf("%d",&n);
          
	int a[n];
        
	for(int i=0; i<n; i++){

		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<n; i++){
	
		if(i%2==0){
		
			EvenSum += a[i];
		}else{
		
			OddSum += a[i];
		}
	}

	diff = EvenSum - OddSum;
	printf("%d\n",diff);

}
