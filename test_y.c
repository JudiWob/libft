#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, world!";
    char *strchr_result = strchr(str, 'o');
    void *memchr_result = memchr(str, 'o', 13);  // Search the first 13 bytes

    if (strchr_result) {
        printf("strchr found 'o' at position: %ld\n", strchr_result - str);  // Output: Found 'o' at position: 4
    } else {
        printf("strchr didn't find 'o'\n");
    }

    if (memchr_result) {
        printf("memchr found 'o' at position: %ld\n", (char *)memchr_result - str);  // Output: Found 'o' at position: 4
    } else {
        printf("memchr didn't find 'o'\n");
    }

    return 0;
}
