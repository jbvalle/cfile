#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *ptr;
	int num;

	ptr = fopen("C:\\Users\\jv\\Desktop\\cfile.txt","w+");

	printf("Please Type a number: ");
	scanf("%d",&num);

   //printf("Please Type a number: %d", num);
	fprintf(ptr,"%d",num);
	fclose(ptr);

	return 0;
}
