/**
 *      file    :  2.hollow_rhombus.c
 *      author  :  deepak_jangra
 *      created :  2021 Apr 06 12:34:42  IST
 *      lastMod :  Tuesday 06 April 2021 12:34:42 AM IST
 **/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
  char *ptr;
  int r,c,space,star,rowIndex,j;

  printf("%s :Begin\n",__func__);
  printf("Enter the ROWS\n");
  scanf("%d", &r);
  printf("Enter the COL\n");
  scanf("%d", &c);
  ptr = (char*)malloc(sizeof(char)*r*c);
//S p a c e s 
  for(rowIndex = 0 ; rowIndex < r ; rowIndex++)
  {
    for(space = 0 ; space < (c/2)-rowIndex ; space++)
    {
      *(ptr + rowIndex*c + space) = '-';
    }
  }

//Enter the * in first row 
  for(rowIndex = 0 ; rowIndex < 1 ; rowIndex++)
  {
    for(star = c/2 ; star < c ; star++)
    {
      *(ptr + rowIndex*c + star) = '*';
    }
  }
  //------------------------------------
  for(rowIndex = 1 ; rowIndex < r - 1 ; rowIndex++)
  {
    for(star = (c/2)-rowIndex ; star <= (c/2)-rowIndex ; star++)
    {
      *(ptr + rowIndex*c + star) = '*';
    }
  }
  //------------------------------------
  for(rowIndex = 1 ; rowIndex < r - 1 ; rowIndex++)
  {
    for(star = c-rowIndex ; star <= c-rowIndex ; star++)
    {
      *(ptr + rowIndex*c + star) = '*';
    }
  }
//Enter the * in last row 
  for(rowIndex = r-1 ; rowIndex < r ; rowIndex++)
  {
    for(star = c/2 ; star < c ; star++)
    {
      *(ptr + rowIndex*c + star) = '*';
    }
  }
  
  //----------Print--------------------
  for(rowIndex = 0 ; rowIndex < r ; rowIndex++)
  {
    for(j = 0 ; j < c ; j++)
    {
      printf("%c",*(ptr + rowIndex*c + j));
    }
    printf("\n");
  }


  printf("%s :End\n",__func__);    
  return 0;
}    

