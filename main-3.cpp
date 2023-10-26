#include <iostream>
#include <vector>
using namespace std;
#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"
#include "Game.h"
int main(){
    return 0;
}
































// #ifndef GAMESESSION_H
// #define GAMESESSION_H

// #include <iostream>
// #include <vector>

// // headers
// #include "Avatar.h"
// #include "GridUnit.h"
// #include "Helper.h"
// #include "Modifier.h"
// #include "Obstacle.h"

// using namespace std;

// class GameSession {
//  private:
//   vector<GridUnit*> grid;
//   int gridWidth;
//   int gridHeight;

//  public:
//   GameSession(){};
//   vector<GridUnit*>& getGrid() { return this->grid; };
//   void set_grid(GridUnit* new_entity) { grid.push_back(new_entity); };

//   std::vector<GridUnit*> initGameSession(int numAvatars, int numObstacles,
//                                          int gridWidth, int gridHeight) {
//     this->gridWidth = gridWidth;
//     this->gridHeight = gridHeight;
//     // Avatars
//     for (int i = 0; i < numAvatars; i++) {
//       GridUnit* avatars = new Avatar(
//           get<0>(Helper::generateRandomCoordinates(gridWidth, gridHeight)),
//           get<1>(Helper::generateRandomCoordinates(gridWidth, gridHeight)));
//       set_grid(avatars);
//       // cout << get<0>(avatars->getCoordinates()) << endl;
//       //  cout << "Avatar created" << endl;
//     };

//     // Obstacles
//     for (int i = 0; i < numObstacles; i++) {
//       GridUnit* obstacles = new Obstacle(
//           get<0>(Helper::generateRandomCoordinates(gridWidth, gridHeight)),
//           get<1>(Helper::generateRandomCoordinates(gridWidth, gridHeight)));
//       set_grid(obstacles);
//       // cout << "Obstacle created" << endl;
//       // cout << get<0>(Obstacles->getPos()) << get<1>(Obstacles->getPos());
//     };

//     return grid;
//   }

//   void gameCycle(int maxCycles, double ObstacleDistanceThreshold) {
//     int avatar_count = 0;
//     // Iteration loop

//     for (int i = 0; i < maxCycles; i++) {
//       // Check if its Avatar
//       for (int j = 0; j < static_cast<int>(this->getGrid().size()); j++) {
//         if (this->getGrid()[j]->getEntity() == 'A') {
//           if (get<0>(this->getGrid()[j]->getCoordinates()) > this->gridWidth) {
//             cout << "Avatar has won the game!" << endl;
//             return;
//           }
//           static_cast<Avatar*>(grid[j])->shift(1, 0);
//           // cout << "Avatar move" << get<0>(grid[j]->getCoordinates()) << endl;
//           avatar_count++;
//         }
//       }

//       if (avatar_count == 0) {
//         return;
//       }

//       for (int a = 0; a < static_cast<int>(this->getGrid().size()); a++) {
//         if (this->getGrid()[a]->getEntity() == 'A') {
//           // check if its Obstacle
//           for (int o = 0; o < static_cast<int>(this->getGrid().size()); o++) {
//             if (this->getGrid()[o]->getEntity() == 'O') {
//               // caculate distance
//               if ((Helper::calculateDistance(
//                       this->getGrid()[a]->getCoordinates(),
//                       this->getGrid()[o]->getCoordinates())) <=
//                   ObstacleDistanceThreshold) {
//                 static_cast<Obstacle*>(grid[o])->apply(*(this->getGrid()[a]));
//                 avatar_count--;
//               }
//             }
//           }
//         }
//       }
//     }
//     if (avatar_count > 0) {
//       cout << "Maximum number of cycles reached. Game over." << endl;
//       return;
//     }
//   }
// };

// #endif