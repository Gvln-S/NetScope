#ifndef GUESS_GAME_HPP
#define GUESS_GAME_HPP 
/* #pragma once */

namespace guessGame {
  bool checkSolution(int number, int randomN); 
  void continueGame(bool solution, int number, int randomN); 
  int createRandom(); 
}


#endif

