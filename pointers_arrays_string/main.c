#include "main.h"

// Implementation of _strcat function
char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    
    // Move ptr to the end of dest
    while (*ptr != '\0') {
        ptr++;
    }
    
    // Append src to dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    
    // Add null terminator to the end of concatenated string
    *ptr = '\0';
    
    // Return a pointer to the concatenated string (dest)
    return dest;
}

// Example usage
int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";
    
    printf("Before concatenation:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);
    
    _strcat(dest, src);
    
    printf("\nAfter concatenation:\n");
    printf("dest: %s\n", dest);
    
    return 0;
}
