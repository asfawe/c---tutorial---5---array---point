#include <stdio.h>

void print_pxy(int* pxy[2]);

void main(void)
{
	int x = 0, y = 0;
	int *pxy[2];
	
	pxy[0] = &x;
	pxy[1] = &y;  // pxy[1]�� y�� �н����� �����մϴ�. 
	
	*pxy[0] = 5;  // x�� �н��� pxy[0]�� ����ؼ� x�� ���� 5�� �����մϴ�. 
	*pxy[1] = 10; // y�� �н��� pxy[1]�� ����ؼ� y�� ���� 10���� �����մϴ�. 
	
//	printf("%d \n", *pxy);
//	printf("%d \n", *pxy[0]);
//	printf("%d \n", *pxy[1]);

	print_pxy(pxy);	
	// pxy�� print_pxy() �Լ��� �����մϴ�. pxy�� int *pxy[2]��� ���ǵǾ� �ֱ� ������, print_pxy()
	// �Լ��� �μ��� int *pxy[2]��� ����ϸ� �˴ϴ�. ���� pxy�� ���� �̸��̱� ������ �ٸ� �̸�����
	// ����� ���� �ֽ��ϴ�. ���� ��� ppxy��� �ص� �ǰ���! 
} 

void print_pxy(int* pxy[2]) // �̷� ������ int* pxy[2] �Ķ���Ϳ� ���� ������ ������ �迭�� �����ű� �����Դϴ�.
//  int* pxy[200] �̷������� ��� ������ �����ϴ�. 
{
	printf("pxy[0] = %d \n", *pxy[0]); // print_pxy() �Լ��� pxy�� main() �Լ����� ���Ǵ� pxy�� �н��̱� ������ *pxy[0]�� ���� 5�� �˴ϴ�. 
	printf("pxy[1] = %d \n", *pxy[1]); // print_pxy() �Լ��� pxy�� main() �Լ����� ���Ǵ� pxy�� �н��̱� ������ *pxy[1]�� ���� 10�� �˴ϴ�. 
}
