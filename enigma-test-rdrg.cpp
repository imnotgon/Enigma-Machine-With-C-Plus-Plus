#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#define maxlen 80

//ENIGMA MACHINE
//Made by Adrian Widmer

//The code will be divided into 4 parts, and they are based on the 4 essencial parts of ENIGMA MACHINE:

//1 - KEYBOARD/THE MESSAGE INPUT (It's responsable to let the user inset the message)
//2 - THE ROTORS (Are reponsable to change the letters 7 times in a random way. There are 3 of the with 26 possibilities)
//3 - THE LAMPBOARD (I will make some changes, so instead of showing letter by letter that has been changed, it will show the whole encrypted message)
//4 - THE PLUGBOARD ( I don't know if I'm gonna do this part, but it's another tool that helps the encryption process, making the systen even more complex)


//1 - THE MESSAGE INPUT (It's responsable to let the user inset the message)

char* keyboard(){

    int Firstquestion;

    char message[80]; //The max number of letters = 80.

    printf(" - - - THE ENIGMA MACHINE - - -");
    printf("Insert the message you want to encrypt: \n");
    printf(" (Max size of the message = 80)\n");

    scanf("%[^\n]*c",message);

    printf("Is the message you want to encrpyt:\n%s ?",message);
    printf("If it is indeed, press 1, or if not press 2");

    switch (Firstquestion)
    {

    case 1:
        printf ("\n Ok. The Enigma Machine will proceed. \n");
        break;

    case 2:
        printf ("\n Restart the Enigma Machine and re-do the first procedure \n");
        return 0;
        break;

    default:
        printf ("\n This is not a valid command, the Enigma Machine will stop. Try again. \n");
        return 0;
        break;

    }




//Ver como liberar a memoria depois.
}

void rotors(){

    /*rotor1[26]={""};
    rotor2[26]={};
    rotor3[26]={};*/

}
void lampboard(){}


int main(){


return 0;
}
