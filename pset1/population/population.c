#include <stdio.h>
#include <cs50.h>
int main(void)
{
    //  Prompt for start size
    int start; 
    do 
    {
            start = get_int("Start size: ");
    }
    while (start < 9);

    // Prompt for end size
    int end;
    do
    {
        end = get_int("End Size: ");
    }
    while (end < start);
    
    int years = 0;
        
    while (start < end)
    {
     start = start + (start / 3) - (start / 4);
           years++;
    }
        
    printf("Years: %i\n", years);
        
            
}