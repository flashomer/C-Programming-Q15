#include<stdio.h>
#include <ctype.h>

int main(void)
{
FILE *inp=fopen("sentence.txt","r");
FILE *wp=fopen("words.txt","w");

char ch[100],s;
int  i=1,b,l=0;
	if(inp== NULL)
		printf("\n File can not be opened!\n");
	else
	{
		
	printf("Enter a lowercase letter: ");
	scanf(" %c",&s);

	while(1){
		if(feof(inp)) {break;}
		fscanf(inp,"%s ",&ch);
		l++;
		
			if((ch[0]) == s || ch[0] == toupper(s) ){
				b++;
				//printf(" %s\n",ch);
				fprintf(wp, "%s \n", ch);
			}
		
		
	
		
	}	

	printf("There are %d words totally, and %d of them are starting with'%c'",l,b,s);
	fclose(inp);
	fclose(wp);
}

return 0;
}
