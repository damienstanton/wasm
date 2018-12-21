#include <stdio.h>

char* hello() {
    return "OK\n";
}

int main(int argc, char **argv) {
    printf("%s", hello());
}
