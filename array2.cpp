#include <stdio.h>

int main(){
	int arr[10];
	int n =10;
	int i;
	int val,count = 0;
	for(i = 0;i < 10;i++){
		printf("what do you want to enter in the array: \n");
		scanf("%d",&arr[i]);
	}
	printf("what number do you want to search: \n");
	scanf("%d",&val);
	for(i = 0;i< 10;i++){
		if(arr[i] == val){
			count = count + 1;
		}
	}
	if(count <=0){
		printf("No value found.\n");
	}else{
		printf("total amount of times %d occured is %d",val,count);
	}	
	return 0;
}
