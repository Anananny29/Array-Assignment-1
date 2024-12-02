#include<stdio.h>

void main(){

        int n;
        printf("Enter size of array : ");
        scanf("%d",&n);

        int a[n];

        for(int i=0;i<n;i++){

             scanf("%d",&a[i]);
        }

        printf("Even elements are : \t");
        for(int i=0; i<n; i++){

                 if(a[i]%2==0){

                 printf("%d\t",a[i]);
             }
        }
printf("\n");

}


