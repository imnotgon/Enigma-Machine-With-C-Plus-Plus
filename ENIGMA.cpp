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

void keyboard(){

    printf("Insert the message you want to encrypt: \n");
    printf(" Max size of the message = 80\n");

    char message[maxlen];
    scanf("%s", message);

}

void rotors(){}
void lampboard(){}


int main(){


return 0;
}