#include <stdio.h>

int main() {
	int i, j;
	int input;
	int sum = 0, number = 0;
	int count = 0;
	
	printf("������ �Է��Ͻÿ� : "); 
	scanf("%d", &input);
	printf("\n");
	
	for(i=1; i<=input; i++) {
		for(j=2; j<=i; j++) {
			if (i%j==0)	break;
		}
		if(i == j) {
			printf("%d\t", i);
			sum+=i;
			number++;
			count++;
		}
		if(count == 10) {
			count = 0;
			printf("\n");
		}
	}
	if(count != 0)	printf("\n\n");
	printf("�Ҽ��� �� : %d\n", sum); 
	printf("�Ҽ��� ���� : %d", number); 
}
