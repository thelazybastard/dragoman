#include "lib/raylib.h"
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    const int screenWidth = 1280;
    const int screenHeight = 720;

    const int SPEED = 5.0;

    InitWindow(screenWidth, screenHeight, "Geometry Maze Game");

    Vector2 ballPosition = {
        (float) screenWidth / 2,
        (float) screenHeight / 2,
    };

    
    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += SPEED;
        if (IsKeyDown(KEY_LEFT)) ballPosition.x -= SPEED;
        if (IsKeyDown(KEY_UP)) ballPosition.y -= SPEED;
        if (IsKeyDown(KEY_DOWN)) ballPosition.y += SPEED;

        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawCircleV(ballPosition, 50, BLUE);
            

        EndDrawing();
    }

    CloseWindow();
    
    return EXIT_SUCCESS;
}
