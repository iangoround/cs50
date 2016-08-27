// include header files
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


/*  A program that prompts the user for their name and then outputs
    their initials in upper case
*/

// declare variables
char firstInitial, secondInitial, lastInitial;
int nameIndex = 0;

// begin main loop


int main(void)
{
    // get the users name and pull the first letter for the first initial
    
    string name = GetString();
    
    
    // find first initial
    
    firstInitial = name[0];
    
    // find the initials
    
    for (int i = 0, s = strlen(name); i < s; i++)
    {
      
      
      // find the second initial
      
        if (name[i] == ' ')
        {
            secondInitial = name[i + 1];
            nameIndex = i + 1;
            break;
        }
     }
    
    for (int i = nameIndex, s = strlen(name); i < s; i++)
    {
        if (name[i] == ' ')
        {
            lastInitial = name[i + 1];
        }
        
      
    }
     
    // change results to upper case
    if (isalpha(firstInitial))
    {
        firstInitial = toupper(firstInitial);
        printf("%c", firstInitial);
    }
    if (isalpha(secondInitial))
    {
        secondInitial = toupper(secondInitial);
        printf("%c", secondInitial);
    }
    if (isalpha(lastInitial))
    {
        lastInitial = toupper(lastInitial);
        printf("%c\n", lastInitial);
    }
    else
    {
        printf("\n");
    }
  
    
}
