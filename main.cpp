#include <cstio.h>
#include "sum.h"

int main() {
	int a;
	scanf("%d", &a);

	int s = sum(a);
	
	printf("sum = %d", s);
	
	return 0;	
}
