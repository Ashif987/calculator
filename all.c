#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void handleaddition(double *result,double num);//
void handlesubtraction(double *result,double num);
void handlemultiplication(double *result,double num);
void handledivision(double *result,double num);

int main() {
	char input[256];//  array to hold input
	char *token;// pointer too hold token
	double num;// variable to store numbers
	double result;// variable to store final result
	char op=0;
	int first = 1; //
while(1) { 
	printf("arithmetic expression(e.g.,1+2*8)or exit to quit:");
	if(fgets(input,sizeof(input),stdin) == NULL) {
		printf("error reading.\n");
		exit(1);
	}
	if(strncmp(input,"exit",4)==0) {
	    printf("exit the calc.\n");
	    exit(0);
	    
	}
	first=1;
	token = strtok(input,"\t\n");
	while(token != NULL){
		if (isdigit(token[0]) || (token[0]=='-' && isdigit(token[1])))
		{	num = atof(token);

			if(first)
			{	result=num;
				first = 0;
			} else
			{


				switch(op)
				{
				case '+':
					handleaddition(&result,num);
					break;

				case '-':
					handlesubtraction(&result,num);
					break;

				case '*':
					handlemultiplication(&result,num);
					break;
				case '/':
					handledivision(&result,num);
					break;

				default:
					printf("error.\n");
					return 1;
				}
			}
		} else if(strlen(token) == 1 && strchr("+-*/",token[0])) {
			op = token[0];
		} else {
			printf("input.\n");
			break;
		}
	token = strtok(NULL,"\t\n");
}
if (!first) {
printf("result:%.2f\n",result);

}

}

}


void handleaddition(double *result,double num) {
	*result += num;


}
void handlesubtraction(double *result,double num) {
	*result -= num;


}

void handlemultiplication(double *result,double num) {
	*result *= num;


}
void handledivision(double *result,double num)

{
	if (num!=0) {
		*result/=num;

	} else {
		printf("error:division by zero.\n");
		exit(1);
	}
}



