#include <stdio.h>

int main() {
    setuid(0);
    system("bin/sh");

    return 0;
}