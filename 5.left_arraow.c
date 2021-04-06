/**
 *      file    :  5.left_arraow.c
 *      author  :  deepak_jangra
 *      created :  2021 Apr 04 09:16:24  IST
 *      lastMod :  Sunday 04 April 2021 09:16:24 PM IST
 **/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

  char *ptr;

  int r,c,space,star,rowIndex,j = 0,k = 0;
  printf("%s : Begin\n",__func__);
  printf("Enter the Rows\n");
  scanf("%d", &r);
  printf("Enter the Col\n");
  scanf("%d", &c);
  ptr = (char*)malloc(sizeof(char)*r*c);
  
  for(rowIndex = 0 ; rowIndex < r/2 ; rowIndex++)
  {
    for(space = 0 ; space < (c/2)-rowIndex ; space++)
    {
        *(ptr + rowIndex*c + space) = '-';
    }
    for(star = c/2 ; star < c-rowIndex ; star++)
    {
        *(ptr + rowIndex*c + star) = '*';
    }
  
  }
  j = 1;
  for(rowIndex = r/2 ; rowIndex < r ; rowIndex++)
  {
  
    for(space = 0 ; space < k  ; space++)
    {
        *(ptr + rowIndex*c + space) = '-';
    }
   for(star = k ; star < k + j  ; star++)
    {
        *(ptr + rowIndex*c + star) = '*';
    }
    
    j++;
    k++;
  
  }

    for(rowIndex = 0 ; rowIndex < r ; rowIndex++)
    {
    
        for(j = 0 ; j < c ; j++)
        {
            printf("%c", *(ptr + rowIndex*c + j));
        }
    printf("\n");
    }





  printf("%s : End\n",__func__);
  return 0;
}    

