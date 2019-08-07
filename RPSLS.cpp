#include <iostream>
#include <cstdlib>
int main() {
  srand(time(NULL));
  int input = 0, comp = (std::rand() % 5);
  std::cout << "0 - rock\n";
  std::cout << "1 - paper\n";
  std::cout << "2 - scissors\n";
  std::cout << "3 - lizard\n";
  std::cout << "4 - spock\n";
  std::cin >> input;
 
 if (input == 0){
    switch (comp){
      case 0:
        std::cout << "Tie: rock vs rock\n";
        break;
      case 1:
        std::cout << "You lose: Paper beats rock\n";
        break;
      case 2:
        std::cout << "You win: Rock crushes scissors\n";
        break;
      case 3:
        std::cout << "You win: Rock crushes lizard\n";
        break;
      case 4:
        std::cout << "You lose: Spock vaporizes rock\n";
        break;
      default: 
        break;
    }
  }
  
  else if (input == 1){
        switch (comp){
      case 0:
        std::cout << "You win: Paper covers rock\n";
        break;
      case 1:
        std::cout << "Tie: paper vs paper\n"; 
        break;
      case 2:
        std::cout << "You lose: scissors cut paper\n";
        break;
      case 3:
        std::cout << "you lose: lizard eats paper\n";
        break;
      case 4:
        std::cout << "you win: paper disproves spock\n";
        break;
      default: 
        break;
    }
  }
  else if (input == 2){
        switch (comp){
      case 0:
       std::cout << "You lose: rock crushes scissors\n";
        break;
      case 1:
       std::cout << "You win: scissors cuts paper\n";
        break;
      case 2:
        std::cout << "Tie: scissors vs scissors\n";
        break;
      case 3:
        std::cout << "You win: scissors decapitates lizard\n";
        break;
      case 4:
        std::cout << "You lose: Spock smashes scissors\n";
        break;
      default:
        break;
    }
  }
 
  else if (input == 3){
        switch (comp){
      case 0:
      std::cout << "You lose: Rock crushes Lizard\n";
        break;
      case 1:
        std::cout << "You win: Lizard eats paper\n";
        break;
      case 2:
        std::cout << "You lose: scissors decapitates lizard\n";
        break;
      case 3:
        std::cout << "Tie: lizard vs lizard\n";
        break;
      case 4:
        std::cout << "You win: Lizard poisons Spock\n";
        break;
      default:
        break;
    }
  }
  else if (input == 4){
        switch (comp){
      case 0:
      std::cout << "You win: Spock Vaporizes rock\n";
        break;
      case 1:
        std::cout << "You lose: Paper disproves Spock\n";
        break;
      case 2:
        std::cout << "You win: Spock smashes scissors\n";
        break;
      case 3:
        std::cout << "You lose: Lizard poisons Spock\n";
        break;
      case 4:
        std::cout << "Tie: spock vs spock\n";
        break;
      default:
        break;
    }
  }
  else {
    std::cout << "Invalid answer\n";
    return 0;
  }
}
