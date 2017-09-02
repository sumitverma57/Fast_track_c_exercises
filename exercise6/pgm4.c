#include <stdio.h>
#include <stdlib.h>

void countFile(){
	
	FILE *fp;
	char ch;
	int spaces=0,lines=0,chars=0;

	fp=fopen("file1.txt","r");
	if(fp==NULL){
		printf("Cannot open file\n");
		exit(0);
	}

	while((ch=fgetc(fp))!=EOF){
		if(ch==' ')
			spaces++;
		else if(ch=='\t')
			spaces+=7;
		else if(ch=='\n')
			lines++;
		else
			chars++;
	}

	printf("For file1.txt:\nSpaces=%d\nLines=%d\nCharacters=%d\n",spaces,lines,chars);
	fclose(fp);

}

int main(int argc,char *argv[]){
	
	countFile();
	return 0;
}