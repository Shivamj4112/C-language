#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *p;
	
	char a[50]; // Good Morning
	
	p = fopen("Demo.txt","w");
	
	if(p == NULL){
		
		printf("Error");
	}
	else{
		
		printf("Enter Text : ");
		gets(a);

		fputs(a,p);
		
		printf("Data Added");
		
		fclose(p);
	}
	
	
	return 0;
}
