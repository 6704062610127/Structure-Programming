#include <stdio.h>
int main(){
	int n1, n2;
	printf("Please enter n1 : ");
	scanf("%d", &n1);
	printf("Please enter n2 : ");
	scanf("%d", &n2);
	    if (n1 > n2){
	printf("number1 is greater than number2 = %d\n", n1 - n2);
	}else{
	printf("number2 is greater than number1 = %d\n", n2 - n1);
	}
	return 0;
}
