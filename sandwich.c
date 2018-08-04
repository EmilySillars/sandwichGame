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
#include <math.h>
    //char * length = "\nI am a sandwich.\n";
    //char sandwich[18] = "I am a sandwich.\n";
    const BITE = 3;
    const NYBBLE = 4;
    const CRUMB = 5;

    int prevCommand = 3;
    int repeat = 1;

    int startIndex = 17;
    int endIndex = 1159;
    char tempChar = 0;

    int bytes = 0;
    int nybbles = 0;
    int crumbs = 0;
    int crumbsLeft = 0;

    int bitsLeft = 8;

    int times;

    char * helpScreen[16];
    char * gameScreenTop[2];
    char * gameScreenBottom[3];
    char sandy[1160] ="                  ____________________________     _____\n                 ||---------------------------\\\\  /-----\\\\\n             ,---|| . . . . . . . . . . . . . .\\\\/. . . . \\\\----,\n             |   ||. . . . . . . . . . . . . . . . . . . . .\\\\  |\n             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n             |   ||. . . . . . . . . . . . . . . . . . . . .//| |\n             |   ||. . . . . . . . . . . . . . . /\\ . . ....//| |\n             |   ||_._._.__._._._._._._._._._._./||\\._._._//||  |\n             |   | | | | | | | | | | | | | | | | ||| | | |||/   |\n             |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/     |\n             |                                                  |\n             `----,----------------------------------------,----'\n              (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,)\n               `\\/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\__)\n                 | | | | | | | | | | | | | | | | ||| | | |||/\n                 |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/\n";
            

void main() {
    //three states, introduction screen, menu screen, and game.
  const INTRO = 0;
  const RULES = 1;
  const GAME = 2;

	const WORDSIZE = 7; //max word size of seven characters, including null terminator.
	const LINESIZE = 50; //max line size of 50 characters. Any more and game might break.
	char input[WORDSIZE]; //input string (one 7 character word, max).
	char line[LINESIZE]; //input line (50 characters, max).

	//printf("address of input is %p\n",input);
    char * introText = "\nWELCOME TO SANDWICH SIMULATOR!\nThis is placeholder text until we get fancy graphics...\nType 'eat' and then press ENTER to begin.\n";
    char * rulesText = "\nThese are the placeholder rules:\n1.Type 'byte'+ press ENTER to bite the sandwich. \n2.Type 'nybble' + press ENTER to nibble the sandwich.\n\n4.Type 'help' + press ENTER to return to this screen.\n5.Type 'quit' + press ENTER to quit the game.\n\nType 'eat' + press ENTER for sandwich!\n";
    //char * gameText = "\nByte, nybble, or eat crumb by crumb! Type 'help' for more info."; 
//printf("The length of sandy is %i\n",(int)strlen(sandy));
    /**************************************/
       /************************** SANDWICH SIMULATOR ***************************
            *                                                                       
                          Bytes: 0  Nybbles: 0  Crumbs: 0   Bits Left: 144.          \n*/
    //char * sandy ="*                  ____________________________     _____\n*                 ||---------------------------\\\\  /-----\\\\\n*             ,---|| . . . . . . . . . . . . . .\\\\/. . . . \\\\----,\n*             |   ||. . . . . . . . . . . . . . . . . . . . .\\\\  |\n*             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n*             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n*             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n*             |   ||. . . . . . . . . . . . . . . . . . . . .//| |\n*             |   ||. . . . . . . . . . . . . . . /\\ . . ....//| |\n*             |   ||_._._.__._._._._._._._._._._./||\\._._._//||  |\n*             |   | | | | | | | | | | | | | | | | ||| | | |||/   |\n*             |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/     |\n*             |                                                  |\n*             `----,----------------------------------------,----'\n*              (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,)\n*               `\\/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\__)\n*                 | | | | | | | | | | | | | | | | ||| | | |||/\n*                 |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/\n";
            /*         
            *                                                                       *
            *                                                                       *
            ***** Byte, nybble, or eat crumb by crumb! Type 'help' for more info. ***/



    //printf("Two forward slashes is //\n");
    //printf("%s",sandy);






            gameScreenTop[0] = " ************************** SANDWICH SIMULATOR ***************************\n";
            gameScreenTop[1] = " *                                                                       *\n";

            gameScreenBottom[0] = " *                                                                       *\n";
            gameScreenBottom[1] = " *                                                                       *\n";
            gameScreenBottom[2] = " ***** Byte, nybble, or eat crumb by crumb! Type 'help' for more info. ***\n";

            helpScreen[0] = " *  ____________________________________________________________________ *\n";
            helpScreen[1] = " * |--------------------------------------------------------------------|*\n";
            helpScreen[2] = " * |                           --THE RULES--                            |*\n";
            helpScreen[3] = " * | 1.Type 'byte'+ press ENTER to bite the sandwich.                   |*\n";
            helpScreen[4] = " * | 2.Type 'nybble' + press ENTER to nibble the sandwich.              |*\n";
            helpScreen[5] = " * | 3.Type 'crumb' + press ENTER to eat a crumb from the sandwich.     |*\n";
            helpScreen[6] = " * | 4.Type 'repeat' + press enter to repeat the previous command.      |*\n";
            helpScreen[7] = " * |                                                                    |*\n";
            helpScreen[8] = " * | 5.Type 'help' + press ENTER to return to this screen.              |*\n";
            helpScreen[9] = " * | 6.Type 'quit' + press ENTER to quit the game.                      |*\n";
            helpScreen[10] = " * |                                                                    |*\n";
            helpScreen[11] = " * |                           BON APPETIT!                             |*\n";
            helpScreen[12] = " * |                                                                    |*\n";
            helpScreen[13] = " * |                      Type 'eat' to start...                        |*\n";
            helpScreen[14] = " * |____________________________________________________________________|*\n";                                                                 
            helpScreen[15] = " *                                                                       *\n";

          char * intro[20];
          intro [0] = " * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
          intro [1] = " *                                                                  __   *\n";
          intro [2] = " *     /\\            __    __  __    __     __  ______    ___  __   | |  *\n";
          intro [3] = " *    /  \\    /^\\   |  \\   || | .\\   ||     || |__  __|  / _ \\ | |  | |  *\n";
          intro [4] = " *   / /|_\\  /  .\\  | \\ \\  || ||\\.\\  ||     ||    ||    | / \\/ | |  | |  *\n";
          intro [5] = " *   \\ \\    | /\\ .| | |\\ \\ || || \\.| ||     ||    ||    | |    | |__| |  *\n";
          intro [6] = " *    \\ \\   | || .| | | \\ \\|| || |.| || /^\\ ||    ||    | |    | ,--, |  *\n";
          intro [7] = " *   __\\ \\  |  _ .| | |  \\  | || /.| ||//^\\\\||    ||    | |    | |  | |  *\n";
          intro [8] = " *   \\ \\| / | | | | | |   \\ | ||/./  | /   \\\\|  __||__  | \\_/\\ | |  | |  *\n";
          intro [9] = " *    \\  /  |_| |_| |_|    \\| |__/   |/     \\| |______|  \\___/ |_|  | |  *\n";
          intro [10] = " *     \\/                                                           |_|  *\n";
          intro [11] = " *                                                                       *\n";
          intro [12] = " *                    __                 _  ___ _   _                    *\n";
          intro [13] = " *                    \\ `| |\\/| | | |   |_|  | / \\ |_\\                   *\n";
          intro [14] = " *                   \\_\\ | |  | |_| |__ | |  | \\_/ | \\                   *\n";
          intro [15] = " *                                                                       *\n";
          intro [16] = " *                                                                       *\n";
          intro [17] = " *                                                                       *\n";
          intro [18] = " *                         Type 'eat' to start...                        *\n";
          intro [19] = " *                                                                       *\n";
  
     
    /**************************************/
    //printf("*********************************\n");

     char state = INTRO; //begin with introduction screen.
     //print introduction screen
     int j;
     for(j =0; j<20; j++){
      printf("%s",intro[j]);
     }
     calculateCrumbsLeft();
     //printf("\nWELCOME TO SANDWICH SIMULATOR!\nThis is placeholder text until we get fancy graphics...\nType 'eat' and then press ENTER to begin.\n");
   
     //need to use fgets to read line, then use sscanf to parse that line.
     fgets(line, LINESIZE, stdin);
     sscanf(line,"%6s",input);
     while((strcmp(input,"quit") != 0)){
        if(state == GAME){ //GAME STATE
            if(strcmp(input,"nybble") == 0){
            nybble();
            }
            else if(strcmp(input,"byte") == 0){
            bite();
            }
            else if(strcmp(input,"crumb") == 0){
            crumb();
            }
            else if(strcmp(input,"help") == 0){
            state = RULES;
            printRules();
            }
            else if(strcmp(input,"repeat") == 0){
            printf(" * Repeat the previous command how many times? ");
            times = 0;
            fgets(line, LINESIZE, stdin);
            sscanf(line,"%i",&times);
                if(times == 0){
                printf(" * Invalid value. Only numbers allowed.\n");
                }
                else{
                repeatCommand(times);
                }
            }
            else{
            printCommandRejection();
            }
        }
        else if(state == RULES){ //RULES SCREEN STATE
    	   if(strcmp(input,"eat") == 0){
            state = GAME;
            //printf("%s",gameText);
            //printFoodStatus();
            printfood();
            }
            else if(strcmp(input,"nybble") == 0){
            printf("\n * You can't nybble the sandwich here. Type 'eat' and then press ENTER to get to the sandwich.\n");
            }
            else if(strcmp(input,"byte") == 0){
            printf("\n * You can't byte the sandwich here. Type 'eat' and then press ENTER to get to the sandwich.\n");
            }
            else if(strcmp(input,"crumb") == 0){
            printf("\n * You can't eat a crumb from the sandwich here. Type 'eat' and then press ENTER for the sandwich.\n");
            }
            else if(strcmp(input,"help") == 0){
            state = RULES;
            printRules();
            }
            else{
            printCommandRejection();
            }
        }
        else{ //INTRO SCREEN STATE
            if(strcmp(input,"eat") == 0){
            //change to rules screen
            state = GAME;
            printfood();
            }
            else if(strcmp(input,"help") == 0){
            //change to rules screen
            state = RULES;
            printRules();
            }
            else{
            printCommandRejection();   
            }
    	//printf("in the game.\n");
        }
    fgets(line, LINESIZE, stdin);
    sscanf(line,"%6s",input);
     }
     //BREAK OUT OF WHILE LO0P
     //printf("You typed %s. Exited game.\n", input);
     printf(" *                                                                       *\n * Exited simulator. See you later!                                      *\n *                                                                       *\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
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
    if(crumbsLeft < 8)
    {
        repeat = 0;
        printfood();
        printf(" * Cannot byte the sandwich! No more bytes left!\n");
    }
    else{
        prevCommand = BITE;
        bytes ++;
        bitsLeft -= 8;
        if(bitsLeft == 0){
          sandy[startIndex] = 0;
          startIndex ++;
          bitsLeft = 8;
        }
        else if(bitsLeft < 0){
          sandy[startIndex] = 0;
          startIndex ++;
          tempChar = sandy[startIndex];
          printf("bitsLeft is %i\n", bitsLeft );
          tempChar <<= abs(bitsLeft);
          printf("bitsLeft * -1 is %i\n", bitsLeft );
          sandy[startIndex] = tempChar;
          bitsLeft += 8;
        }
        else{
          printf("ERROR: somehow bitsLeft is > 0 after a bite!\n");
        }
        calculateCrumbsLeft();
        printfood();
     } 
}

nybble(){
    if(crumbsLeft < 4)
    {
        repeat = 0;
        printfood();
        printf(" * Cannot nybble the sandwich! No more nybbles left!\n");
    }
    else{
        prevCommand = NYBBLE;
        nybbles ++;
        bitsLeft -= 4;
        tempChar = sandy[startIndex];
        tempChar <<= 4;
        sandy[startIndex] = tempChar;
        if(bitsLeft == 0){
          startIndex ++;
          bitsLeft = 8;
        }
        else if(bitsLeft < 0){
          startIndex ++;
          tempChar = sandy[startIndex];
          tempChar <<= abs(bitsLeft);
          sandy[startIndex] = tempChar;
          bitsLeft += 8;
        }
        calculateCrumbsLeft();
        printfood();
     }   
}

crumb(){
    if(crumbsLeft < 2)
    {
        repeat = 0;
        printfood();
        printf("* Cannot eat a crumb from the sandwich! The sandwich is gone!\n");
    }
    else{
        prevCommand = CRUMB;
        crumbs ++;
        bitsLeft -= 2;
        tempChar = sandy[startIndex];
        tempChar <<= 2;
        sandy[startIndex] = tempChar;
        if(bitsLeft == 0){
          startIndex ++;
          bitsLeft = 8;
        }
        else if(bitsLeft < 0){
          startIndex ++;
          tempChar = sandy[startIndex];
          tempChar <<= abs(bitsLeft);
          sandy[startIndex] = tempChar;
          bitsLeft += 8;
        }
        calculateCrumbsLeft();
        printfood();
     }   
}

printfood(){
  //printf("\nByte, nybble, or eat crumb by crumb! Type 'help' for more info."); 
  printf("%s",gameScreenTop[0]);
  printf("%s",gameScreenTop[1]);
  printf("      Bytes: %i \tNybbles: %i\tCrumbs: %i \tBits Left: %i.\n",bytes, nybbles, crumbs, crumbsLeft);
  //printf("\nBytes: %i \tNybbles: %i \tCrumbs: %i \tBits Left: %i \tCrumbs Left: %i.\n",bytes, nybbles, crumbs, crumbsLeft, (crumbsLeft*2));
    int i;
    printf("\n");
    for (i=0; i< endIndex; i++){
        printf("%c",sandy[i]);
    }
    //printf("%s",sandy);
    //printf("%s",gameScreenBottom[0]);
    printf("%s",gameScreenBottom[1]);
    printf("%s",gameScreenBottom[2]);
}

printCommandRejection(){
  printf(" * Command not recognized. Type 'help' to see list of commands.\n"); 
}

calculateCrumbsLeft(){
  crumbsLeft = ((endIndex - startIndex) * 8) + bitsLeft;
}

printRules(){
  int k;
  for(k = 0; k < 15; k++){
    printf("%s", helpScreen[k]);
  }
}

repeatCommand(int times){
  //printf("inside repeatCommand function.");
  int g = 0;
  switch(prevCommand){
    case 3: //byte
    //printf("Okay, I'll repeat %i times.\n",times);
    while(repeat != 0 && g <= times){
      bite();
      //printf("biting %i times so far.", g);
      g++;
    }
    repeat = 1;
    break;

    case 4: //nybble
    while(repeat != 0 && g <= times){
      nybble();
      g++;
      //printf("nybbling %i times so far.", g);
    }
    repeat = 1;
    //printf("Okay, I'll repeat %i times.\n",times);
    break;

    case 5: //crumb
    while(repeat != 0 && g <= times){
      crumb();
      g++;
      //printf("Eaten %i crumbs so far.", g);
    }
    repeat = 1;
    //printf("Okay, I'll repeat %i times.\n",times);
    break;

    default:
    printf("ERROR: repeat function found an invalid value for variable prevCommand!");
    break;
  }
  //printf("exited switch statement\n");
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



	                                Type 'eat' to start...
	  


              ______________________________________________________________________
             |----------------------------------------------------------------------|
             |                           --THE RULES--                              |
             | 1.Type 'byte'+ press ENTER to bite the sandwich.                     |
             | 2.Type 'nybble' + press ENTER to nibble the sandwich.                |
             | 3.Type 'crumb' + press ENTER to eat a crumb from the sandwich.       |
             |                                                                      |
             | 4.Type 'help' + press ENTER to return to this screen.                |
             | 5.Type 'quit' + press ENTER to quit the game.                        |
             |                                                                      |
             |                           BON APPETIT!                               |
             |                                                                      |
             |                      Type 'eat' to start...                          |
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
            *                                                                  __   *
		        *     /\            __    __  __    __     __  ______    ___  __   | |  *
		        *    /  \    /^\   |  \   || | .\   ||     || |__  __|  / _ \ | |  | |  *
			      *   / /|_\  /  .\  | \ \  || ||\.\  ||     ||    ||    | / \/ | |  | |  *
			      *   \ \    | /\ .| | |\ \ || || \.| ||     ||    ||    | |    | |__| |  *
			      *    \ \   | || .| | | \ \|| || |.| || /^\ ||    ||    | |    | ,--, |  *
   			    *   __\ \  |  _ .| | |  \  | || /.| ||//^\\||    ||    | |    | |  | |  *
            *   \ \| / | | | | | |   \ | ||/./  | /   \\|  __||__  | \_/\ | |  | |  *
            *    \  /  |_| |_| |_|    \| |__/   |/     \| |______|  \___/ |_|  | |  *
            *     \/                                                           |_|  *
            *                                                                       *
            *                    __                 _  ___ _   _                    *
	          *                    \ `| |\/| | | |   |_|  | / \ |_\                   *
	          *                   \_\ | |  | |_| |__ | |  | \_/ | \                   *
            *                                                                       *
            *                                                                       *
            *                                                                       *
	          *                         Type 'eat' to start...                        *
	          *                                                                       *
             
            *  ____________________________________________________________________ *
            * |--------------------------------------------------------------------|*
            * |                           --THE RULES--                            |*
            * | 1.Type 'byte'+ press ENTER to bite the sandwich.                   |*
            * | 2.Type 'nybble' + press ENTER to nibble the sandwich.              |*
            * | 3.Type 'crumb' + press ENTER to eat a crumb from the sandwich.     |*
            * |                                                                    |*
            * | 4.Type 'help' + press ENTER to return to this screen.              |*
            * | 5.Type 'quit' + press ENTER to quit the game.                      |*
            * |                                                                    |*
            * |                           BON APPETIT!                             |*
            * |                                                                    |*
            * |                      Type 'eat' to start...                        |*
            * |____________________________________________________________________|*                                                                     
            *                                                                       *
            * Exited simulator. See you later!                                      *\n
            *                                                                       *\n



            ************************** SANDWICH SIMULATOR ***************************
            *                                                                       *
                          Bytes: 0  Nybbles: 0  Crumbs: 0   Bits Left: 144.
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
            *                                                                       *
            *                                                                       *
            ***** Byte, nybble, or eat crumb by crumb! Type 'help' for more info. ***





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


  ************************** SANDWICH SIMULATOR ***************************
            *                                                                       *
                          Bytes: 0  Nybbles: 0  Crumbs: 0   Bits Left: 144.          \n
            *                  ____________________________     _____\n
            *                 ||---------------------------\\\\  /-----\\\\\n
            *             ,---|| . . . . . . . . . . . . . .\\\\/. . . . \\\\----,\n
            *             |   ||. . . . . . . . . . . . . . . . . . . . .\\\\  |\n
            *             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n
            *             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n
            *             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n
            *             |   ||. . . . . . . . . . . . . . . . . . . . .//| |\n
            *             |   ||. . . . . . . . . . . . . . . /\\ . . ....//| |\n
            *             |   ||_._._.__._._._._._._._._._._./||\\._._._//||  |\n
            *             |   | | | | | | | | | | | | | | | | ||| | | |||/   |\n
            *             |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/     |\n
            *             |                                                  |\n
            *             `----,----------------------------------------,----'\n
            *              (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,)\n
            *               `\\/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\__)\n
            *                 | | | | | | | | | | | | | | | | ||| | | |||/\n
            *                 |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/\n         
            *                                                                       *
            *                                                                       *
            ***** Byte, nybble, or eat crumb by crumb! Type 'help' for more info. ***

char * sandy ="*                  ____________________________     _____\n*                 ||---------------------------\\\\  /-----\\\\\n*             ,---|| . . . . . . . . . . . . . .\\\\/. . . . \\\\----,\n*             |   ||. . . . . . . . . . . . . . . . . . . . .\\\\  |\n*             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n*             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n*             |   ||. . . . . . . . . . . . . . . . . . . . . || |\n*             |   ||. . . . . . . . . . . . . . . . . . . . .//| |\n*             |   ||. . . . . . . . . . . . . . . /\\ . . ....//| |\n*             |   ||_._._.__._._._._._._._._._._./||\\._._._//||  |\n*             |   | | | | | | | | | | | | | | | | ||| | | |||/   |\n*             |   |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/     |\n*             |                                                  |\n*             `----,----------------------------------------,----'\n*              (  ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) ( ) (,)\n*               `\\/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\_/^\\__)\n*                 | | | | | | | | | | | | | | | | ||| | | |||/\n*                 |_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|,/\\|_|_|/,/\n";
            /*         
            *                                                                       *
*/

