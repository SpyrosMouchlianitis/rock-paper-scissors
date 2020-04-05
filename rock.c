#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define rock 1
#define paper 2
#define scissors 3
#define userWin 1
#define botWin 0
#define tie -1


int result(int choise, int enemy){

  switch (choise) {

    case rock:
      if (enemy == rock) {
        return tie;
      }
      if (enemy == paper) {
        return botWin;
      }
      if (enemy == scissors) {
        return userWin;
      }

    case paper:
      if (enemy == rock) {
        return userWin;
      }
      if (enemy == paper) {
        return tie;
      }
      if (enemy == scissors) {
        return botWin;
      }

    case scissors:
      if (enemy == rock) {
        return botWin;
      }
      if (enemy == paper) {
        return userWin;
      }
      if (enemy == scissors) {
        return tie;
      }
  }

}



int main(){

  srand( time(NULL) );

  int run = 1;
  while(run){
    printf("Choose your weapon\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("4. Quit\n");

    int choise;
    scanf("%d", &choise);
    if (choise == 4) {
      printf("Thanks for playing\n");
      exit(1);
    }

    int enemy = rand()%3;
    int tresult = result(choise, enemy);

    switch (tresult) {
      case userWin:
        printf("User won\n");
        break;
      case botWin:
        printf("Bot won\n");
        break;
      case tie:
        printf("It's a tie\n");
        break;
    }
  }

  return 0;
}
