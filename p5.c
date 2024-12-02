
#include<stdio.h>

void main(){

        int n;
        printf("Enter size of array : ");
        scanf("%d",&n);

        int a[n];

        for(int i=0;i<n;i++){

             scanf("%d",&a[i]);
        }

        printf("Product of Odd elements are : \t");
        int prod =1;
	for(int i=0; i<n; i++){

                 if(i%2!=0){

                 prod *= a[i];
             }
        }
printf("%d\n", prod);

}
