/**
* Author: Emily Sillars
* Description: This is a sandwich simulator game. It simulates for the user 
* eating a sandwich one "byte" or "nybble" at at time, and also displays 
* for the user the number of "crumbs" left.
* Methods:
* -
*
*/

#include <stdio.h>

void main() {
    /* similar to System.out.printf */
    char * str = "hello there\n";  
    printf("Hello world! (sandwich.c)\n");
    printf("%s",str);
    
    str =" ss      aa     nn    n  dd     w       w  ii   cc    hh   hh\n";
     printf("%s",str);
    str ="ssss    aaaa	n n   n  d dd   w       w  ii cc  cc  hh   hh\n";
    printf("%s",str);
    str ="ss      a  a    n  n  n  d  dd  w   w   w  ii cc      hh   hh\n";
    printf("%s",str);
    str =" ss    aaaaaa   n   n n  d  dd  w  w w  w  ii cc      hhhhhhh\n";
    printf("%s",str);
    str ="  ss   a    a   n    nn  d  dd  w w   w w  ii cc   c  hh   hh\n";
    printf("%s",str);
    str ="ssss  aa    aa  n     n  d dd   ww    www  ii cc  cc  hh   hh\n";
    printf("%s",str);
   str = " ss                      dd                     cc    hh   hh\n";
    printf("%s",str);
    
}

/*
#include <stdio.h>

int main(int argc, char **argv){
    printf("Hello world! (standard.c)\n");
    int i = 0;
    while (i < argc ) {
        printf("argv[%2d] = %s \n", i, argv[i] ); 
        i++;
    }
    return 0;
}
*/


/*
. Run the ”compiler” to convert the program to executable code (or binary):
gcc -Wall -g -o programName programSource.c
gcc is the name of the compiler.
-Wall is an option of gcc that tells it to generate and print all warnings (it’s always good to know what they are).
-g option tells gcc to generate debugging information (we will need that fairly soon).
-o programName option tells gcc to save the executable code in the file named programName. If you do not provide this
option, gcc will save your executable code in the file named a.out - this file gets overwritten without warning when the
same program or a different program is compiled in the same directory.
programSource.c is the name of the text file that contains the source code.
3. If any errors occur during step 2, go back to step 1, fix the errors and recompile. If any warnings occur during step 2, read through
them and decide if they need fixing.
4. Run the program: this is done using the following syntax
./programName

*/

/*
   ss      aa     nn    n  dd     w       w  ii   cc    hh   hh
    ssss    aaaa	n n   n  d dd   w       w  ii cc  cc  hh   hh
    ss      a  a    n  n  n  d  dd  w   w   w  ii cc      hh   hh
     ss    aaaaaa   n   n n  d  dd  w  w w  w  ii cc      hhhhhhh
      ss   a    a   n    nn  d  dd  w w   w w  ii cc   c  hh   hh
    ssss  aa    aa  n     n  d dd   ww    www  ii cc  cc  hh   hh
     ss                      dd                     cc    hh   hh
*/