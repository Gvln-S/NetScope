#include <cstdio>
#include "guessGame.cpp"

int main() {
  std::printf("Im thinking on... \n");
  int number;
  bool solution = false;
  int randomN = guessGame::createRandom();
  guessGame::continueGame(solution, number, randomN);

  return 0;
}


