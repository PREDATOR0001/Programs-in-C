#include <stdio.h>

// Define a union to hold an unsigned int and its individual bytes
union ByteExtractor {
    unsigned int value;
    unsigned char bytes[4];
};

int main() {
    union ByteExtractor extractor;

    // Input the unsigned int value
    printf("Enter an unsigned int value (in hexadecimal): ");
    scanf("%x", &extractor.value);

    // Print the individual bytes
    printf("Individual bytes:\n");
    for (int i = 0; i < 4; i++) {
        printf("Byte %d: 0x%02x\n", i, extractor.bytes[i]);
    }

    return 0;
}
