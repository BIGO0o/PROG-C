//geen eigen code, CHATGPT heeft deze geschreven
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE 10

bool can_move(int x, int y, char array[SIZE][SIZE]) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE && array[x][y] == '.';
}

void print_array(char array[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    char array[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = '.';
        }
    }

    int x = 0, y = 0;
    char letter = 'A';
    array[x][y] = letter;

    while (letter < 'Z') {
        int direction = rand() % 4;
        int new_x = x, new_y = y;

        switch (direction) {
            case 0: new_x--; break; // Omhoog
            case 1: new_x++; break; // Omlaag
            case 2: new_y--; break; // Links
            case 3: new_y++; break; // Rechts
        }

        if (can_move(new_x, new_y, array)) {
            x = new_x;
            y = new_y;
            letter++;
            array[x][y] = letter;
        } else {
            bool is_blocked = true;
            for (int i = 0; i < 4; i++) {
                new_x = x;
                new_y = y;

                switch (i) {
                    case 0: new_x--; break;
                    case 1: new_x++; break;
                    case 2: new_y--; break;
                    case 3: new_y++; break;
                }

                if (can_move(new_x, new_y, array)) {
                    is_blocked = false;
                    break;
                }
            }

            if (is_blocked) {
                break;
            }
        }
    }

    print_array(array);
    return 0;
}
