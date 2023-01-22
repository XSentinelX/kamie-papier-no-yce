#include <iostream>
#include <ctime>
#include <map>

using namespace std;

int main() {srand(time(0));
  srand (time(0));
  map<int, string> moves;
  moves.emplace(0, "papier");
  moves.emplace(1, "nożyce");
  moves.emplace(2, "kamień");
  
  int userPoints = 0;
  int cpuPoints = 0;

  while ( userPoints <3 && cpuPoints <3){
    int cpuMove = rand() % 3;
    string userMove;

    cout << "Wybierz papier kamień lub nożyce:";
    cin >> userMove;

    cout << "Komputer wybrał: " << moves.at(cpuMove) <<" Twój ruch to: " << userMove << "." << endl;
    if (moves.at(cpuMove) == "papier" && userMove == "kamień "){
      cpuPoints++;
    } else if (moves.at(cpuMove) == "papier" && userMove == "nożyce"){
      userPoints++;
    } else if (moves.at(cpuMove) == "nożyce" && userMove == "papier"){
      cpuPoints++;
    } else if (moves.at(cpuMove) == "nożyce" && userMove == "kamień"){
      userPoints++;
    } else if (moves.at(cpuMove) == "kamień" && userMove == "papier"){
      userPoints++;
    } else if (moves.at(cpuMove) == "kamień" && userMove == "nożyce"){
      cpuPoints++;
    } 
    cout << "Komputer ma " << cpuPoints << "PKT, Ty zdobyłes" << userPoints << " PKT" << endl;
    
  }

  if (userPoints > cpuPoints) {
    cout << "Wygrałes";
  } else {
    cout << "Przegrałes"; 
  }
}