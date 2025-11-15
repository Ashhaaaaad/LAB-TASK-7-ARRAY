#include <stdio.h>

int main() {
	int id[10];
	int i = 0, j = 0;

	printf("Please enter 10 integer IDs.\n\n");

	for(i = 0; i < 10; i++) {
		printf("Enter id number %d: ", i + 1);
		fflush(stdin);
		scanf("%d",&id[i]);
	}

	for (i=0; i<10; i++) {
		for (j=0; j<i; j++) {
			if (id[i]==id[j]) {
				id[i]=-1;
				break;
			}
		}
	}
	printf("Updated Array: ");

	for (i = 0; i < 10; i++) {
		printf("%d ", id[i]);
	}

	return 0;
}