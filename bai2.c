// tinh tong 2 so nguyen
#include <stdio.h>
 
 int main()
 {
 	int a,b;
 	// nhap  cac bien dau vao
 	printf("Nhap vao so nguyen a=");
 	scanf("%d", &a);
 	printf("Nhap vao so nguyen b=");
 	scanf("%d", &b);
 	
 	int s;//day la tong cua 2 so a va b
 	s=a+b;
 	
 	printf("Tong 2 so nguyen a+b=%d+%d = %d\n",a,b,s);
 }
