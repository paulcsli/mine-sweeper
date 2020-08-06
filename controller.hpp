#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <string>
#include <sstream>

#include "board.hpp"
#include "board_view.hpp"

using namespace std;

class Controller {
  bool has_game_started_;
  Board* board_;
  BoardView* board_view_;

  static const string kWelcomeMessage;
  static const string kGameSizePrompt;
  static const string kGameSizeConfirmation;

public:
  Controller();
  ~Controller();

  void DispatchCommand(string command);
  void WelcomePrompt();
  void LoadGame();
  void StartGame(int game_size);
  void PrintWelcomeMessage();

  bool has_game_started() const;
  void set_has_game_started(bool new_val);
};

#endif