#include <stdio.h>

main(){
	int i, su, cnt=0;
	printf("�����Է�:");
	scanf("%d" , &su);
	
	i = 1;
	while( i <=su  ){
		if(su%i==0) //����߰��ϸ� cnt���� 
			cnt++;
		i++; //��������				
	}
	if(cnt == 2 )
		printf("%d�� �Ҽ�\n" , su)	;
	else
		printf("%d�� �Ҽ��� �ƴ�\n" , su)	;
}	
