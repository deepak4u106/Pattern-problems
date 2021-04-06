//----****|
//---**** |
//--****  |  5 x 8
//-****   |
//****    |


#include<stdio.h>
#include<stdlib.h>
int main()
{
	
        char *arr;
	int r, c, space, star, i, j;
	printf("%s : Begin\n",__func__);
	printf("Enter the value of ROW\n");
	scanf("%d", &r);
	printf("Enter the value of COL\n");
	scanf("%d", &c);
	arr = (char*)malloc(sizeof(char)*r*c); //Memory alloacation for arr


	for(i = 0 ; i < r ; i++)
	{

		for( space = 0 ; space < (c/2) - i ; space++)
		{
			*(arr + i*c + space) = ' ';
		}
		for( star = c/2 ; star < c ; star++)
		{
			
			*(arr + i*c + star) = '*';
		}
	


	}

	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < c ; j++)
		{
			printf("%c", *(arr + i*c + j));

		}
		printf("\n");
	}	





	printf("%s : End\n",__func__);



}

