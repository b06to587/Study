#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MIN(a,b) (a<b? a:b)
char a[55], b[55];
int alen, blen, sum = INT_MAX, min, i, j;


int main() {
	scanf("%s %s", a, b);
	alen = strlen(a);
	blen = strlen(b);
	for(i = 0; i <= blen - alen; i++){
		min = 0;
		for(j=0;j<alen;j++){
			if(a[j] != b[j+i])
			++min;
		}
		sum = MIN(sum,min);
	}
	printf("%d",sum);
	return 0;
}
