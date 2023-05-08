
#include <stdio.h>

void printColoredAsciiArt(char* asciiArt) {
    // Text in rot formatieren
    printf("\033[31m%s\033[0m", asciiArt);
}

int main() {
    char* asciiArt =
    "  _   _      _ _         __        __         _     _ \n"
    " | | | | ___| | | ___    \\ \\      / /__  _ __| | __| |\n"
    " | |_| |/ _ \\ | |/ _ \\    \\ \\ /\\ / / _ \\| '__| |/ _` |\n"
    " |  _  |  __/ | | (_) |    \\ V  V / (_) | |  | | (_| |\n"
    " |_| |_|\\___|_|_|\\___/      \\_/\\_/ \\___/|_|  |_|\\__,_|\n"
    printColoredAsciiArt(asciiArt);
    return 0;
}


