#include <stdio.h>
main(){
	printf("\n[����6]=============\n");
	
	int i , count = 0, sum=0;
	for(i=3; i<=50; i+=3){
		printf("%4d" , i );
		sum=sum+i;
		++count;
		if(count%5==0)
			printf("\n");
		
	}
	printf("\nsum=%d\n", sum);
	
	
	printf("\n[����7]=============\n");
	char ch;
	for( ch='F' ; ch >= 'A' ; ch--  ){
		printf("%c " , ch);
	}

	
}






