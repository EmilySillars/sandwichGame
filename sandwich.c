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
#include <string.h>
    char sandwich[19] = "\nI am a sandwich.\n";

    int startIndex =0;
    int endIndex = 18;
    char tempChar = 0;
    //int nybbleCount = 2;

void main() {
    //three states, introduction screen, menu screen, and game.
    const INTRO = 0;
    const RULES = 1;
    const GAME = 2;
	const WORDSIZE = 7; //max word size of seven characters, including null terminator.
	const LINESIZE = 50; //max line size of 50 characters. Any more and game might break.
	char input[WORDSIZE]; //input string (one 7 character word, max).
	char line[LINESIZE]; //input line (50 characters, max).
    int bytes = 0;
    int nybbles = 0;
    int crumbs = 0;
	//printf("address of input is %p\n",input);
    char * introText = "\nWELCOME TO SANDWICH SIMULATOR!\nThis is placeholder text until we get fancy graphics...\nType 'start' and then press ENTER to begin.\n";
    char * rulesText = "\nThese are the placeholder rules:\n1.Type 'byte'+ press ENTER to bite the sandwich. \n2.Type 'nybble' + press ENTER to nibble the sandwich.\n\n4.Type 'help' + press ENTER to return to this screen.\n5.Type 'quit' + press ENTER to quit the game.\n\nType 'start' + press ENTER for sandwich!\n";
    char * gameText = "\nIn the game. Byte or nybble. Type help for the rules."; 

     char state = INTRO; //begin with introduction screen.
     printf("\nWELCOME TO SANDWICH SIMULATOR!\nThis is placeholder text until we get fancy graphics...\nType 'start' and then press ENTER to begin.\n");
     //need to use fgets to read line, then use sscanf to parse that line.
     fgets(line, LINESIZE, stdin);
     sscanf(line,"%6s",input);
     while((strcmp(input,"quit") != 0)){
        if(state == GAME){ //GAME STATE
            if(strcmp(input,"nybble") == 0){
            nybbles ++;
            printf("%s",gameText);
            printf("\nBytes: %i \tNybbles: %i \tCrumbs Left: Unknown.\n",bytes, nybbles);
            nybble();
            }
            else if(strcmp(input,"byte") == 0){
            bytes++;
            printf("%s",gameText);
            printf("\nBytes: %i \tNybbles: %i \tCrumbs Left: Unknown.\n",bytes, nybbles);
            bite();
            
            }
            else if(strcmp(input,"help") == 0){
            state = RULES;
            printf("%s", rulesText);
            }
            else{
            printf("\nsorry, that command is not recognized. check your spelling and type again,\n or type 'help' to see the rules.\n"); 
            }
        }
        else if(state == RULES){ //RULES SCREEN STATE
    	   if(strcmp(input,"eat") == 0){
            state = GAME;
            printf("%s",gameText);
            printf("\nBytes: %i \tNybbles: %i \tCrumbs Left: Unknown.\n",bytes, nybbles);
            }
            else if(strcmp(input,"nybble") == 0){
            printf("\nYou can't nybble the sandwich here. Type 'start' and then press ENTER to get to the sandwich.\n");
            }
            else if(strcmp(input,"byte") == 0){
            printf("\nYou can't byte the sandwich here. Type 'start' and then press ENTER to get to the sandwich.\n");
            }
            else if(strcmp(input,"help") == 0){
            state = RULES;
            printf("%s", rulesText);
            }
            else{
            printf("\nsorry, that command is not recognized. check your spelling and type again,\n or type 'help' to see the rules.\n"); 
            }
        }
        else{ //INTRO SCREEN STATE
            if(strcmp(input,"start") == 0){
            //change to rules screen
            state = RULES;
            printf("%s", rulesText);
            }
    	//printf("in the game.\n");
        }
    fgets(line, LINESIZE, stdin);
    sscanf(line,"%6s",input);
     }
     //BREAK OUT OF WHILE LO0P
     printf("you typed %s\n", input);
     //printf("address of input is %p\n",input);
/*
     scanf("%6s",input);
 
     while((strcmp(input,"quit") != 0)){
    if(state == GAME){
     	    	printf("in the game.\n");
    }
    else if(state == RULES){
    	printf("in the game.\n");
    }
    else{
    	//change to rules screen
    	printf("in the game.\n");
    }
    scanf("%6s",input);
     }
     printf("you typed %s\n", input);
     printf("address of input is %p\n",input);
  */

/***********************************************************************************************************/
/*
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
    */
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

bite(){
    if(startIndex > endIndex)
    {
        printf("Cannot byte the sandwich! No more bytes left!\n");
    }
    else{
        printf("%i %c\n", sandwich[startIndex],sandwich[startIndex]);
        sandwich[startIndex] = 0;
        printf("%i %c\n", sandwich[startIndex],sandwich[startIndex]);
        if(sandwich[startIndex] == 0b0){
        startIndex ++;
        printf("incremented start index.\n");
        }
        printfood();
     }   

}

nybble(){
    if(startIndex > endIndex)
    {
        printf("Cannot byte the sandwich! No more bytes left!\n");
    }
    else{
        printf("%i %c\n", sandwich[startIndex],sandwich[startIndex]);
        tempChar = sandwich[startIndex];
        tempChar >> 2;
        sandwich[startIndex] = tempChar;
        printf("%i %c\n", sandwich[startIndex],sandwich[startIndex]);
        if(sandwich[startIndex] == 0b0){
        startIndex ++;
        printf("incremented start index.\n");
        }
        printfood();
     }   

}

printfood(){
    int i;
    printf("\n");
    for (i=0; i< endIndex; i++){
        printf("%c",sandwich[i]);
    }
    printf(" <= that's the sandwich.\n");
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

