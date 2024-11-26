#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void printBin(int input);
int checkValidInput(int input);

int main()
{
    char input;
    int output;

    while (true)
    {
        printf("Enter in a Hexadecimal character: ");
        scanf(" %c", &input);

         if (input == 'X')
        {
            break;
        }

        input = toupper(input);
        input = checkValidInput(input);

        if (input > -1)
        {
            printBin(input);
            printf("\n");
        }
        
  
    }

    return 0;
}

int checkValidInput(int input)
{
    if ((input > 69 || input < 65) && (input > 57 || input < 48))
    {
        return -1;
    }
    
    if (input - 55 > 0)
    {
      return input - 55;   
    }
    else if (input - 48)
    {
        return input - 48;
    } else
    {
        return -1;
    }
    
}

void printBin(int input)
{
    printf("The output is: ");
    for (int i = 3; i >= 0; i--)
    {
        int output = input >> i;

        if (output & 1)
            printf("1");
        else
            printf("0");
    }
}
