#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    // the X position of the light of power
    int light_x;
    // the Y position of the light of power
    int light_y;
    // Thor's starting X position
    int initial_tx;
    // Thor's starting Y position
    int initial_ty;
    scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);

    // init var
    int X = initial_tx;
    int Y = initial_ty;

    // game loop
    while (1) {
        // The remaining amount of turns Thor can move. Do not remove this line.
        int remaining_turns;
        scanf("%d", &remaining_turns);

        //lignes
        if (X==light_x && Y>light_y){
            printf("N\n");
            Y--;     
        }
        if (X<light_x && Y==light_y){
            printf("E\n");
            X++;     
        }
        if (X==light_x && Y<light_y){
            printf("S\n");
            Y++;     
        }
        if (X>light_x && Y==light_y){
            printf("W\n");
            X--;     
        }
        
        
        //diagonales
        if(X<light_x && Y>light_y){
            printf("NE\n");
            X++;
            Y--;
        }
        if(X<light_x && Y<light_y){
            printf("SE\n");
            X++;
            Y++;
        }
        if(X>light_x && Y<light_y){
            printf("SW\n");
            X--;
            Y++;
        }
        if(X>light_x && Y>light_y){
            printf("NW\n");
            X--;
            Y--;
        }

    }

    return 0;
}
