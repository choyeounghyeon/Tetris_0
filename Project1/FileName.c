#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>

#define G_W 10
#define G_H 20

void drawBoard();
void drawBlock(int block[4][4], int x, int y, int value);
bool isCollision(int block[4][4], int x, int y);
void rotateBlock(int block[4][4]);
void clearLines();
void gameOver();
void gotoxy(int x, int y);

int guard[G_H][G_W] = { 0 };
int currentBlock[4][4]; // 현재 블록의 상태
int currentX, currentY; // 현재 블록의 위치
int score = 0;

// 블록 모양 정의
int blocks[7][4][4] = {
    // I 블록
    {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // J 블록
    {
        {0, 0, 0, 0},
        {0, 1, 1, 1},
        {0, 1, 0, 0},
        {0, 0, 0, 0}
    },
    // L 블록
    {
        {0, 0, 0, 0},
        {0, 1, 1, 1},
        {0, 0, 0, 1},
        {0, 0, 0, 0}
    },
    // O 블록
    {
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    },
    // S 블록
    {
        {0, 0, 0, 0},
        {0, 0, 1, 1},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    },
    // T 블록
    {
        {0, 0, 0, 0},
        {0, 1, 1, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    },
    // Z 블록
    {
        {0, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    }
};

int main() {
    
}


