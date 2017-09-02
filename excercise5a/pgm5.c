#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 30

char ** split_name(char *full_name){

	int i=0,j=0,k=0;

	char **names=(char **)malloc(3*sizeof(char*));
	for(i=0;i<20;i++)
		names[i]=(char *)malloc(MAX_LEN*sizeof(char));

	for(i=0;full_name[i]!='\0';i++){
		if(full_name[i]==' '){
			names[j][k]='\0';
			k=0;j++;
		}else{
			names[j][k++]=full_name[i];
		}
	}
	names[j][k]='\0';
	return names;
}

int main(){

	char full_name[MAX_LEN*3];
	char **names;
	printf("Enter full name: ");
	fgets(full_name,sizeof(full_name),stdin);
	names=split_name(full_name);
	printf("First name: %s\n",names[0]);
	printf("Middle name: %s\n",names[1]);
	printf("Last name: %s\n",names[2]);
	return 0;
}