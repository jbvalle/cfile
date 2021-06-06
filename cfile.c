#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE *ptr;
	int num;

	ptr = fopen("C:\\Users\\jv\\Desktop\\cfile.txt","w+");

	printf("Please Type a number of your choosing: ");
	scanf("%d",&num);

	//hello 234567

	//hello fasdfasdf
	
    printf("Your chosen number is: %d", num);
	fprintf(ptr,"%d",num);
	fclose(ptr);

	return 0;
}
