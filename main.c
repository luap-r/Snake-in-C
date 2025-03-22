#include <stdio.h>
#include <stdlib.h>

typedef struct SNAKE {

  int x;
  int y;
  char c;
  struct SNAKE *positions; 

} SNAKE;

typedef struct CANVAS {

  int width;
  int height;

} CANVAS;

int main(){

  CANVAS canvas;
  canvas.width = 20;
  canvas.height = 20;


  SNAKE *snake = malloc(sizeof(SNAKE));
  snake->c = 'x';
  snake->x = canvas.width/2;
  snake->y = canvas.height/2;

  

  char dir = 'L';

  int alive = 1;
  int itteration = 0;

  while (alive) {

    if(dir == 'U'){
      
    }
    else if(dir == 'D'){

    }
    else if(dir == 'R'){

    }
    else if(dir == 'L'){

    }
    else {
      printf("Error\n");
    }

    itteration++;
    
    // Just for now 
    if(itteration > 10){
      alive = 0;
    }
  }


}
