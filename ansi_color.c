
#include <stdio.h>

void printColoredAsciiArt(char* asciiArt) {
    // Text in rot formatieren
    printf("\033[31m%s\033[0m", asciiArt);
}

int main() {
    char* asciiArt = "    /\\_/\\ \n"
                     "   ( o.o )\n"
                     "    > ^ < ";
    printColoredAsciiArt(asciiArt);
    return 0;
}#include <stdio.h>

void printColoredAsciiArt(char* asciiArt) {
	    // Text in rot formatieren
	    //     printf("\033[31m%s\033[0m", asciiArt);
	    //     }
	    //
	    //     int main() {
	    //         char* asciiArt = "    /\\_/\\ \n"
	    //                              "   ( o.o )\n"
	    //                                                   "    > ^ < ";
	    //                                                       printColoredAsciiArt(asciiArt);
	    //                                                           return 0;
	    //                                                           }
	    //

