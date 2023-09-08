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
int currentBlock[4][4]; // ���� ����� ����
int currentX, currentY; // ���� ����� ��ġ
int score = 0;

// ��� ��� ����
int blocks[7][4][4] = {
    // I ���
    {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // J ���
    {
        {0, 0, 0, 0},
        {0, 1, 1, 1},
        {0, 1, 0, 0},
        {0, 0, 0, 0}
    },
    // L ���
    {
        {0, 0, 0, 0},
        {0, 1, 1, 1},
        {0, 0, 0, 1},
        {0, 0, 0, 0}
    },
    // O ���
    {
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    },
    // S ���
    {
        {0, 0, 0, 0},
        {0, 0, 1, 1},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    },
    // T ���
    {
        {0, 0, 0, 0},
        {0, 1, 1, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    },
    // Z ���
    {
        {0, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    }
};

int main() {
    
}


