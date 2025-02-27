#include <stdio.h>
#include <stdbool.h> // C does not have a built-in bool type like in Python or JavaScript.
// But we can use #include <stdbool.h> to get bool, true, and false.

int main() {

    bool isOnline = true; // bool(boolean) are binary they either true or false. 0 means false and 1 means true
    bool isStudent = true;
    bool forSale = false;

    if (forSale) {
        printf("This item is for sale");
    } else {
        printf("This item is not for sale");
    }

    // if (isStudent) {
    //     printf("You are Student");
    // }
    // else {
    //     printf("You aren't Student");
    // }

    return 0;
}