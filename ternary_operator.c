######################################
//? :  = the terinary operator
// simulates a simple if/else

//Example

int x = (x < 3)  ? 5 : 6;//Declare that x is less than '3'. 5 is printed if true, 6 is printed if false.

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//1. Create a scenario where you would use the ternary operator.
int main(void)
{
 int x = 5;//Set 'x' to 5
 x = (x < 3)  ? 5 : 6;//Test if less than 3 or not
 printf("%i",x);//Display answer onscreen
}
//so it's 5, if the experession is true (less than 3) and 6 if the expression is false.

//#####################################################
#include <cs50.h> 
#include <stdio.h>//
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//2. Now create your own program to do the same with void intputs and void outputs.
void my(void);//The prototype of your function
int main (void)
{
    my();//No inputs here
}    
    
    void my(void)//My function. void output, void input
    {
    int x = get_int("Enter a number: ");//This time we are taking user input rather than hard coding a number of our choosing.
    x = (x < 5)  ?  5 : 6; 
    printf("%i\n", x);
	//Program doesn't return anything
    }

//###############################################################

#include <cs50.h>
#include <stdio.h>//
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//3. Now with a void output but an input.
void my(int x);
int main (void)
{
    int nmber = get_int ("Enter a number: ");//Take user input
    my(nmber);//use 'nmber' as an input to your program below
}    
    
    void my(int x)
    {
    x = (x < 5)  ?  5 : 6; 
    printf("%i\n", x);
	//Program doesn't return anything
    }
	
//###############################################################
#include <cs50.h> //Switch
#include <stdio.h>//
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//3. Now with an output but no input. 
int my(void);
int main (void)
{
    printf("%i ", my());
}
    
    int my(void)
    {
        int x = 5;
        x = (x < 5) ? 5 : 6;
        return x;
        
    }

//#############################################################
#include <cs50.h>
#include <stdio.h>//
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//4. Now with an input and and output.
int my(int x);
int main (void)
{
    int nmber = get_int ("Enter a number: ");
    my(nmber);// Input is whatever the user typed above.
}    
    
    int my(int x)
    {   
    x = (x < 5)  ?  5 : 6; 
    printf("%i\n", x);
    return 0;//This is the ouput
    }