#include<stdio.h>

void main(){

        int n;
        printf("Enter size of array : ");
        scanf("%d",&n);

        int a[n];

        for(int i=0;i<n;i++){

             scanf("%d",&a[i]);
        }

        printf("Sum of Even Indexed elements are : \t");
        int sum = 0;
	for(int i=0; i<n; i++){

                 if(i%2==0){

                 sum += a[i];

             }
        }
printf("%d\n",sum);

}
