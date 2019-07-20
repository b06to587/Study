#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>   

#define MAX 100001
 
typedef struct Time{
	int start;
	int end;
}TIME;

int compare(const int *a, const int *b){
	TIME *end1 = (TIME *) a;
	TIME *end2 = (TIME *) b;
	
	if(end1->end != end2->end){
		if(end1->end > end2->end) return 1;
		else if(end1->end < end2->end) return -1;
	}else if(end1->end == end2->end){
		if(end1->start > end2->start) return 1;
		else if(end1->start < end2->start) return -1;
	}else return 0;

}

int main() {
	TIME time[MAX];
	int n,i;
	int max_meeting = 0;
	int limit = 0;
	
	scanf("%d",&n);
	
	for(i= 0; i< n; i++){
		scanf("%d %d", &time[i].start, &time[i].end);
	}
	
	printf("%d",sizeof(time[0]));
	
	qsort(time,n,sizeof(time[0]),compare); 
	
	for(i= 0; i< n; i++){
		printf("%d %d\n", time[i].start, time[i].end);
	}
	
	
	for(i = 0; i< n; i++){
		if(time[i].start < limit) 	continue;
		limit = time[i].end;
		max_meeting++;
	}
	
	 printf("%d", max_meeting);
     
    return 0;
}


