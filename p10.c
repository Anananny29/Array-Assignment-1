#include<stdio.h>

void main(){

	int n;
	printf("Enter size : ");
	scanf("%d",&n);

	char a[n];
	
	getchar();
        for(int i=0; i<n; i++){
		

		scanf("%c",&a[i]);
		getchar();
	}

	for(int i=0; i<n ; i++){

		if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){

			printf("%c %d\n",a[i], i);
		}
	}
}
