#include <stdio.h>
main(){
	
	int i;
	for(i=3; i>0 ; i-- )
	{
		printf("%d ", i);
	}
	printf("\nFor문종료 후 i=%d\n", i);
	
	printf("\n[예제1]=============\n");
	for(i=0 ; i<=2 ; i++){
		printf("**********\n");
	}
	printf("\n[예제2]=============\n");
	for(i=1 ; i<=6; i++ )
	{
		printf("i=%d \n", i);
	}
	
	printf("\n[예제3]=============\n");
	int sum=0;
	for(i=1; i<=10 ; i++ ){
		sum = sum+i;  //sum+=i
	}
	printf("1~10까지의 합:%d" , sum);
	
	printf("\n[예제5]=============\n");
	for(i=1 ; i<10 ; i++ ){
		printf("2 * %d = %d\n", i , i*2);
	}
	
}








