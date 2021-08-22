#include <stdio.h>

// enums can also be declared in global scope

enum RGB {
    Red = 5,
    Green,
    Blue
};

void main(void) {

    enum myEnum
    {
        First = 2,
        Second,
        Third
    };

    enum myEnum myEnumVar = Third;
    printf("%d\n", myEnumVar);

    enum DaysOfTheWeek
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    } dow, mon;

    dow = Sunday;
    mon = Monday;

    printf("%d\n", dow);
    printf("%d\n", mon);

    enum RGB color1 = Red;
    printf("%d\n", color1);
    printf("%d\n", Green); // enum values can directly be printed
}