#include <stdio.h>

void print_pxy(int* pxy[2]);

void main(void)
{
	int x = 0, y = 0;
	int *pxy[2];
	
	pxy[0] = &x;
	pxy[1] = &y;  // pxy[1]을 y의 분신으로 지정합니다. 
	
	*pxy[0] = 5;  // x의 분신인 pxy[0]을 사용해서 x의 값을 5로 설정합니다. 
	*pxy[1] = 10; // y의 분신인 pxy[1]을 사용해서 y의 값을 10으로 설정합니다. 
	
//	printf("%d \n", *pxy);
//	printf("%d \n", *pxy[0]);
//	printf("%d \n", *pxy[1]);

	print_pxy(pxy);	
	// pxy를 print_pxy() 함수에 전달합니다. pxy는 int *pxy[2]라고 정의되어 있기 때문에, print_pxy()
	// 함수의 인수도 int *pxy[2]라고 사용하면 됩니다. 물로 pxy는 변수 이름이기 때문에 다른 이름으로
	// 사용할 수도 있습니다. 예를 들어 ppxy라고 해도 되겠죠! 
} 

void print_pxy(int* pxy[2]) // 이런 식으로 int* pxy[2] 파라미터에 적는 이유는 포인터 배열을 받을거기 때문입니다.
//  int* pxy[200] 이런식으로 적어도 문제는 없습니다. 
{
	printf("pxy[0] = %d \n", *pxy[0]); // print_pxy() 함수의 pxy는 main() 함수에서 사용되는 pxy의 분신이기 때문에 *pxy[0]의 값은 5가 됩니다. 
	printf("pxy[1] = %d \n", *pxy[1]); // print_pxy() 함수의 pxy는 main() 함수에서 사용되는 pxy의 분신이기 때문에 *pxy[1]의 값은 10이 됩니다. 
}
