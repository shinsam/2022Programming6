#include <stdio.h>

main(){
	//while������ ���� ������ ����Ͽ� 
	//1~10������ ���� ���ϵ� 
	//5�� ����� �����ϴ� ���α׷��� ����غ���. 

	int i =0, sum = 0;
	
	while(1){
		i++;
		if(i>10)
			break;
		if(i%5==0)
			continue;//5�� ����� ����
		sum+=i;
	}
	printf("sum=%d\n" , sum);
}
