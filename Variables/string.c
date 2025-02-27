#include <stdio.h>

int main () {

    // in C we don't have string. String is a series of characters like "Hello, World!", So in C we use an array of characters(char) to represent a string so store store more than one characters. We can use char again cuz we are working with charactres.
    
    char name[] = "Bro Code"; // we use set of sqaure bracket for represting this like string. Now you can store more than a character and we need to  use double quotes("").
    char food[] = "Pizza";
    char email[] = "new123@gmail.com";


    printf("Your name is %s\n", name); // s meaning is string
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    return 0;
}