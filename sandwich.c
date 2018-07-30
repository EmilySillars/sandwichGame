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
	 char * input = 1;
	 //three states, introduction screen, menu screen, and game.
    const INTRO = 0;
    const RULES = 1;
    const GAME = 2;
    //ONE state
     char state = INTRO;
    /* similar to System.out.printf */
    //char * str = "hello there\n";  
   

   //char ** strArray = 
    printf("\nWelcome to\n SANDWICH SIMULATOR!\n\n Press ENTER to start!\n");
   
    input = scanf("%s");
    if(state == GAME){

    }
    else if(state == RULES){

    }
    else{
    	//change to rules screen

    }
    //printf("%s",str);


    /******************************************************************************************************/
 /*   
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
    

    str ="     __                 _  ___ _   _\n";
    printf("%s",str);
	str ="     \\  | |\\/| | | |   |_|  | / \\ |_\\\n";
	printf("%s",str);
	str ="     _\\ | |  | |_| |__ | |  | \\_/ | \\\n\n";
	printf("%s",str);


     
    	str = "       ____________________________     _____\n";
    	printf("%s",str);
    	str = "      ||---------------------------\\\\  //----\\\\\n"; 
    	printf("%s",str);
    	str = "  ,---|| . . . . . . . . . . . . . .\\\\// . . . \\\\----,\n";
    	printf("%s",str);
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . .\\\\  |\n";
		printf("%s",str);
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . . || |\n";
		printf("%s",str);
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . . || |\n";
		printf("%s",str);
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . . || |\n";
		printf("%s",str);
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . .//| |\n";
		printf("%s",str);
		str = "  |   ||. . . . . . . . . . . . . . . /\\\\. . ....//| |\n";
		printf("%s",str);
		str = "  |   ||_._._.__._._._._._._._._._._./||\\\\_._._//||  |\n";
		printf("%s",str);
		str = "  |   | | | | | | | | | | | | | | | | ||| | | |||/   |\n";
		printf("%s",str);
		str = "  |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/     |\n";
		printf("%s",str);
		str = "  |                                                  |\n";
		printf("%s",str);
		str = "  `-----,---------------------------------------,----'\n";
		printf("%s",str);
		str = "   (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,)\n";
		printf("%s",str);
		str = "    `\\/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\__)\n";
		printf("%s",str);
		str = "      | | | | | | | | | | | | | | | | ||| | | |||/\n";
		printf("%s",str);
        str = "      |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/\n";
        printf("%s",str);

*/


} //end of main

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

/*	  __                 _  ___ _   _
	  \  | |\/| | | |   |_|  | / \ |_\
	  _\ | |  | |_| |__ | |  | \_/ | \
	  */

/*
    	 ____________________________     _____
    	||---------------------------\\  /-----\\
    	|| . . . . . . . . . . . . . .\\/. . . . \\
		||. . . . . . . . . . . . . . . . . . . . .\\
		||. . . . . . . . . . . . . . . . . . . . . ||
		||. . . . . . . . . . . . . . . . . . . . . ||
		||. . . . . . . . . . . . . . . . . . . . . ||
		||. . . . . . . . . . . . . . . . . . . . .//|
		||. . . . . . . . . . . . . . . . . . ....//||
		|| . . . . . . . . . . . . . . . . . . .// |||
		|======================================| | |||





		 	       ____________________________     _____
    	      ||---------------------------\\  /-----\\ 
    	  ,---|| . . . . . . . . . . . . . .\\/. . . . \\----,
		  |   ||. . . . . . . . . . . . . . . . . . . . .\\  |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . .//| |
		  |   ||. . . . . . . . . . . . . . . /\ . . ....//| |
		  |   ||_._._.__._._._._._._._._._._./||\._._._//||  |
		  |   | | | | | | | | | | | | | | | | ||| | | |||/   |
		  |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\|_|_|/,/     |
		  |                                                  |
		  `-----,----------------------------------------,----'
		      ||_( ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) )
		      | | \/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\/
              |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\|_|_|/,/


                  	       ____________________________     _____
    	      ||---------------------------\\  /-----\\ 
    	  ,---|| . . . . . . . . . . . . . .\\/. . . . \\----,
		  |   ||. . . . . . . . . . . . . . . . . . . . .\\  |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . .//| |
		  |   ||. . . . . . . . . . . . . . . /\ . . ....//| |
		  |   ||_._._.__._._._._._._._._._._./||\._._._//||  |
		  |   | | | | | | | | | | | | | | | | ||| | | |||/   |
		  |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\|_|_|/,/     |
		  |                                                  |
		  `-----,----------------------------------------,----'
		   (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,) 
		    `\/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\__)
		      | | | | | | | | | | | | | | | | ||| | | |||/
              |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\|_|_|/,/




    str = "       ____________________________     _____\n";
    	str = "      ||---------------------------\\  //----\\\n"; 
    	str = "  ,---|| . . . . . . . . . . . . . .\\// . . . \\----,\n";
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . .\\  |\n";
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . . || |\n";
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . . || |\n";
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . . || |\n";
		str = "  |   ||. . . . . . . . . . . . . . . . . . . . .//| |\n";
		str = "  |   ||. . . . . . . . . . . . . . . /\\. . ....//| |\n";
		str = "  |   ||_._._.__._._._._._._._._._._./||\\_._._//||  |\n";
		str = "  |   | | | | | | | | | | | | | | | | ||| | | |||/   |\n";
		str = "  |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/     |\n";
		str = "  |                                                  |\n";
		str = "  `-----,----------------------------------------,----'\n";
		str = "   (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,)\n";
		str = "    `\\/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\__)\n";
		str = "      | | | | | | | | | | | | | | | | ||| | | |||/\n";
        str = "      |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/\n";
*/

/*
                                                                              __
		         /\            __    __  __    __     __  ______    ___  __   | |
		        /  \    /^\   |  \   || | .\   ||     || |__  __|  / _ \ | |  | | 
			   / /|_\  /  .\  | \ \  || ||\.\  ||     ||    ||    | / \/ | |  | | 
			   \ \    | /\ .| | |\ \ || || \.| ||     ||    ||    | |    | |__| |
			    \ \   | || .| | | \ \|| || |.| || /^\ ||    ||    | |    | ,--, |
   			   __\ \  |  _ .| | |  \  | || /.| ||//^\\||    ||    | |    | |  | |
               \ \| / | | | | | |   \ | ||/./  | /   \\|  __||__  | \_/\ | |  | |
                \  /  |_| |_| |_|    \| |__/   |/     \| |______|  \___/ |_|  | |
                 \/                                                           |_|

                                __                 _  ___ _   _
	                            \ `| |\/| | | |   |_|  | / \ |_\
	                           \_\ | |  | |_| |__ | |  | \_/ | \



	                                Press ENTER to start...
	  


              ______________________________________________________________________
             |----------------------------------------------------------------------|
             |                           --THE RULES--                              |
             | 1.Type 'byte'+ press ENTER to bite the sandwich.                     |
             | 2.Type 'nybble' + press ENTER to nibble the sandwich.                |
             | 3.Press ENTER to repeat the previous command.                        |
             |                                                                      |
             | 4.Type 'help' + press ENTER to return to this screen.                |
             | 5.Type 'quit' + press ENTER to quit the game.                        |
             |                                                                      |
             |                           BON APPETIT!                               |
             |                                                                      |
             |                      Press ENTER for sandwich...                     |
             |______________________________________________________________________|



   			     ____     __
			    | ___\   /__\
			     \\     / || \
			   ___\\   / /  \ \
		       \____| /_/    \_\


                  **              *
                 *  *   **  *   * * *
                 *     *  * **  * *  *
                  **   **** * * * *  *
                *   *  *  * *  ** *  *
                 ***   *  * *   * * *


            * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
            *                                                                  __
		    *     /\            __    __  __    __     __  ______    ___  __   | |
		    *    /  \    /^\   |  \   || | .\   ||     || |__  __|  / _ \ | |  | | 
			*   / /|_\  /  .\  | \ \  || ||\.\  ||     ||    ||    | / \/ | |  | | 
			*   \ \    | /\ .| | |\ \ || || \.| ||     ||    ||    | |    | |__| |
			*    \ \   | || .| | | \ \|| || |.| || /^\ ||    ||    | |    | ,--, |
   			*   __\ \  |  _ .| | |  \  | || /.| ||//^\\||    ||    | |    | |  | |
            *   \ \| / | | | | | |   \ | ||/./  | /   \\|  __||__  | \_/\ | |  | |
            *    \  /  |_| |_| |_|    \| |__/   |/     \| |______|  \___/ |_|  | |
            *     \/                                                           |_|
            *
            *                    __                 _  ___ _   _
	        *                    \ `| |\/| | | |   |_|  | / \ |_\
	        *                   \_\ | |  | |_| |__ | |  | \_/ | \
            *
            *
            *
	        *                       Press ENTER to start...
	        *
            *
            *


		       ____________________________     _____
    	      ||---------------------------\\  /-----\\ 
    	  ,---|| . . . . . . . . . . . . . .\\/. . . . \\----,
		  |   ||. . . . . . . . . . . . . . . . . . . . .\\  |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . . || |
		  |   ||. . . . . . . . . . . . . . . . . . . . .//| |
		  |   ||. . . . . . . . . . . . . . . /\ . . ....//| |
		  |   ||_._._.__._._._._._._._._._._./||\._._._//||  |
		  |   | | | | | | | | | | | | | | | | ||| | | |||/   |
		  |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\|_|_|/,/     |
		  |                                                  |
		  `----,----------------------------------------,----'
		   (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,) 
		    `\/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\_/^\__)
		      | | | | | | | | | | | | | | | | ||| | | |||/
              |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\|_|_|/,/


*/

