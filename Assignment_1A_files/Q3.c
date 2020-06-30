/* CS261- Assignment 1A - Question 3
   Name: 
   Date: 
   Solution description:
*/

#include <stdio.h>
#include <stdlib.h>

char toUpperCase(char ch)
{
  // Convert ch to upper case, assuming it is in lower case currently
  if(ch >= 'a' && ch <= 'z')
    ch = ch - 32;

}

char toLowerCase(char ch)
{
  if(ch >= 'A' && ch <='Z')
    ch = ch + 32;
  // Convert ch to lower case, assuming it is in upper case currently                          

}

int stringLength(char s[])
{

  int length = 0;
  while (s[length] != '\0')
  {
    length++;
  }

  return length;
   // Return the length of the string
}


void camelCase(char* word)
{
  //printf("Print something. \n");

  int index = 0;
  int index_2 = 0;
  int next_index = 0;
  int is_contain_non_letter = 0; // first initialize to false
  //int first_letter = 0; // to see if the false 
  int lowercase_group_num = 0;
  while(word[index] != '\0')
  {
      if(word[index] < 65 || (word[index] > 91 && word[index] < 97) || word[index] > 122)
      {
        is_contain_non_letter = 1;
        /*if(word[index] >= 'a' && word[index] <= 'z')
        {
          index_2 = 0;
          while(word[index_2] >= 'a' && word[index_2] <= 'z')
          {
            index_2++;
            if(word[index_2] < 65 || (word[index_2] > 91 && word[index_2] < 97) || word[index_2] > 122)
            {
              lowercase_group_num++;
              break;
            }
            
          }
        }*/
      }

    index++;
  }
  printf("is_contain_symbols: %d \n", is_contain_non_letter);
  printf("lowercase_group_num: %d \n", lowercase_group_num);
  if(is_contain_non_letter == 0)//|| lowercase_group_num < 2)
  {
    printf("Invalid input string.\n");
    return;
  }

  printf("After return.\n");
  index = 0;
  index_2 = 0;
  while(word[index]!='\0')
  {
    if(word[index]=='_')
    {
      index_2=index+1;
      //upper case next character
      word[index_2] = toUpperCase(word[index_2]);
      //shift content to left by one
      while(word[index_2]!='\0')
      {
        word[index_2-1]=word[index_2];
        index_2++;
      }
      word[index_2-1]='\0';
    }
    index++;
  }
  
	// Convert to camelCase
	
	
}

int main()
{

	// Read the string from the keyboard
  char s[100];
	printf("Please enter a string.\n");
  scanf("%s",s);
  //int length = stringLength(s);
	//printf("The string is: %s \n", s);
 // printf("The string length: %d \n", length);
	// Call camelCase
	camelCase(s);
  printf("After converting: %s \n ", s);
	
	// Print the new string
	
	
	return 0;
}

