#include<stdio.h>
int rev(int a[],int n){
 int i;
 printf("\n reverse of the array elements");
 for(i=n-1;i>=0;i--)
 {
   printf("\n %d",a[i]);
 }
}
int main()
{
   int a[100],n;
   int i;
   printf("enter the size of the array\n");
   
   scanf("%d",&n);
   printf("enter %d elements",n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   rev(a,n);
}
