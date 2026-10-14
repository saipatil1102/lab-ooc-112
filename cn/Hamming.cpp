#include <stdio.h>
#include <math.h>

int main() {
    int data[7], received[7], errorPos = 0;
    int p1, p2, p4;

    // Sender Side - Input Data Bits
    printf("Enter 4 data bits (D1 D2 D3 D4): ");
    scanf("%d %d %d %d", &data[2], &data[4], &data[5], &data[6]);

    // Calculate Parity Bits
    data[0] = data[2] ^ data[4] ^ data[6]; // P1
    data[1] = data[2] ^ data[5] ^ data[6]; // P2
    data[3] = data[4] ^ data[5] ^ data[6]; // P4

    // Display the Hamming Code
    printf("Transmitted Hamming Code: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // Receiver Side - Input Received Data
    printf("Enter received 7 bits: ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &received[i]);
    }

    // Error Detection
    p1 = received[0] ^ received[2] ^ received[4] ^ received[6];
    p2 = received[1] ^ received[2] ^ received[5] ^ received[6];
    p4 = received[3] ^ received[4] ^ received[5] ^ received[6];

    errorPos = p4 * 4 + p2 * 2 + p1 * 1;

    if (errorPos == 0) {
        printf("No error detected in received data.\n");
    } else {
        printf("Error detected at position: %d\n", errorPos);

        // Correct the Error
        received[errorPos - 1] = (received[errorPos - 1] == 0) ? 1 : 0;
        printf("Corrected Hamming Code: ");
        for (int i = 0; i < 7; i++) {
            printf("%d ", received[i]);
        }
        printf("\n");
    }

    return 0;
}