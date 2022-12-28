# Snake Game

A CLI based implementation of the famous Nokia Snake game written entirely in C++.

## Description

It is a console based game with upto four players allowed. <br>

## Structs

For the project, I used the following structs:

### Pos
    struct Pos {
      int x;
      int y;
    };
    
### Food
    struct Food {
      Pos pos;
      int color;
      char sym;
      int size;
      bool eaten;
    };
    
### Snake
    struct Snake {

      Pos p[MAXLENGTH], tail;
      int size, color, speed, score, dir, UP, DOWN, LEFT, RIGHT;
      bool alive;
      string name;
    };
    
> ***NOTE:*** Each snake is simply an array of positions. On every frame, we remove the last index of that array and add a new one on the head.
    
### Obstacle
    struct Obstacle {

      Pos** cord;
      int xsize, ysize, color;
      char sym;
    };

## Rules

The following rules apply to each player:
  
  1. Each player can move in any of the four directions (up, left , down, right).
  2. Each player must avoid hitting obstacles or else they are eliminated.
  3. Each player must avoid hitting other players or else they are eliminated.
  4. Each player must avoid hitting themselves or else they are eliminated.
  5. Each player grows 1 bit by eating the yellow food.
  6. Each player grows 5 bits by eating the green food.
  7. Each player grows 10 bits by eating the red food.
  8. The game progressively gets faster.
  9. There are three levels, each with higher difficulty than the previous one.
  10. Player with the highest score at the end score wins the game.

### Control Keys 

> **Player 1** I, J, K, L <br>
> **Player 2** W, A, S, D <br>
> **Player 3** G, V, B, N <br>
> **Player 4** ARROW UP, ARROW LEFT, ARROW DOWN, ARROW RIGHT
