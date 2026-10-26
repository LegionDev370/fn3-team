#include <stdio.h>
#include <unistd.h>

void legend_typewriter(const char *text) {
    while (*text) {
        putchar(*text++);
        fflush(stdout);
        usleep(40000);
    }
    printf("\n");
}

int main() {
    legend_typewriter(">>> ISMOILJON'S LEGENDARY SYSTEM INITIALIZED...");
    return 0;
}