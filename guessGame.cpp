#include "guessGame.hpp"
#include <cstdio>
#include <cstdlib>
#include <ctime>

namespace guessGame {
  bool checkSolution(int number, int randomN){
    if (number < randomN) {
      std::printf("up \n");
      return false;
    } else if (number > randomN) {
      std::printf("down \n");
      return false;
    } else if (number == randomN) {
      std::printf("you got it \n");
      return true;
    }
    return false;

  }

  void continueGame(bool solution, int number, int randomN){
    while (!solution){
      std::scanf("%d", &number);
      solution = checkSolution(number, randomN);
    }
  }

  int createRandom(){
    std::srand(time(NULL));
    int randomN = std::rand() % 100;
    return randomN;
  }
}
