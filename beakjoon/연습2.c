#include <stdio.h>
#include <string.h>

used[26] = {0,};

int main(){
	char str[100];
	int j,i,count,n;
	scanf("%d", &n);
	count = n;
	while(n!=0){
		scanf("%s", &str);
		for ( i = 0; i < 26; i++) {
			used[i] = 0;
		}
		for(j = 'a'; j <= 'z' ;j++){
		for(i=0;i< strlen(str);i++){
			if(str[i] == j && str[i] != str[i+1]){
				used[j-97]++;
			}
		}
	}
	
	for ( i = 0; i < 26; i++) {
		if(used[i] > 1){
			count --;
			break;
		}
	}
	n--;
	}
	
	printf("%d", count);

	return 0;
}
