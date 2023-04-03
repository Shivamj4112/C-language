#include<stdio.h>

int main(){
	
	FILE *p;
	
	char a[50];
	p = fopen("Demo.txt","a");
	
	if(p == NULL){
		
		printf("Error");
	}
	else{
		
		printf("Enter Text : ");
		gets(a);
		
		fputs("\n",p);
		fputs(a,p);
		
		fclose(p);
		
	}
	
	return 0;
}
