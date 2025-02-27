#include <stdio.h>

int main() {
    // variable means a reusable container
    // Behaves as if it were the value it contains.

    // You have to declare the type of a variable before using it.

    float rating = 4.9;  // float meaning floating point number
    float price = 99.99;
    float temperature = 28;

    printf("The rating of this movie is %.1f\n", rating); // "%" is a format specifier for display variables dynamic. note: f is only for when variable type is in float. and for interger variables we use d.   .1 for display a given amount of digits after.
    // "\n" is used for new line.
    printf("The price is $%.2f\n", price);
    printf("The temparature is %.1f\n", temperature);

    // ## Summary ##
    //  Those are floating points number they are numbers including a decimal portion. We only have the capability of storing six to seven digits after the decimal, if you need more more precision such as if you are working with pi you can use a diffrent data type known as a "double".

    // C has a default behavior of displaying six digits after the decimal when working with floating point numbers

    return 0;

}