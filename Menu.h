#pragma once
#include <conio.h>
#include <iostream>
#include <string>

class Menu {
public:
    void startInvestigation() {
        const int align{ 50 };
        std::cout << std::setw(align) << "VIRTUAL FISHING GAME" << "\n\n";
    }
    void setGameType() {
        std::cout << "Please select type of game:" << "\n\n";
        std::cout << "1. Sport fishing (fishing for time)" << "\n";
        std::cout << "2. Amateur fishing (fishing a certain amount of fish)" << "\n";
        int done = 1;

        do {
            int c = _getch();
            switch (c) {
            case key_1:
                gameType = 0; //sport fishing
                done = 1;
                break;
            case key_2:
                gameType = 1; //amateur fishing
                done = 1;
                break;
            default:
                done = 0;
                break;
            }
        } while (done == 0);
    }

    int getGameType() {
        return gameType;
    }

    std::string selectWaterBody() {
        std::cout << "Please select type of water body:" << "\n\n";
        std::cout << "1. Lake  " << "2. River  " << "3. Sea" << "\n";

        int done = 1;
        std::string water;
        do {
            int c = _getch();
            switch (c) {
            case key_1:
                water = "lake";//water body Lake
                done = 1;
                break;
            case key_2:
                water = "river"; //water body River
                done = 1;
                break;
            case key_3:
                water = "sea"; //water body Sea
                done = 1;
                break;
            default:
                done = 0;
                break;
            }
        } while (done == 0);
        return water;
    }

    int gameControl() {
        std::cout << "\n\n";
        std::cout << "Change fish gear (10 coins)   - g  " << "Change water body (20 coins) - c" << "\n\n";
        std::cout << "Fishing (3 coins) - space  " << "Change bait (5 coins) - b" << "\n\n";

        int done = 1;
        do {
            int c = _getch();
            switch (c) {
            case key_c:
                return 1;
                done = 1;
                break;
            case key_g:
                return 2;
                done = 1;
                break;
            case key_space:
                return 3;
                done = 1;
                break;
            case key_b:
                return 4;
                done = 1;
                break;
            default:
                done = 0;
                break;
            }
        } while (done == 0);
    }
    int gamePlay() {
        std::cout << "\n\n";
        std::cout << "Do you want to play again? y/n" << "\n\n";

        int done = 1;
        do {
            int c = _getch();
            switch (c) {
            case key_y: // pushed key y
                return 1;
                done = 1;
                break;
            case key_n: // pushed key n
                return 0;
                done = 1;
                break;
            default:
                done = 0;
                break;
            }
        } while (done == 0);
    }


    std::string selectFishGear() {
        std::cout << "Please select fishing gear:" << "\n";
        std::cout << "1. Fishing rod  " << "2. Spinning";
        int done = 1;
        do {
            int c = _getch();
            switch (c) {
            case key_1:
                return "fishing rod"; //fishing gear - fishing rod
                done = 1;
                break;
            case key_2:
                return "spinning"; //fishing gear - spining
                done = 1;
                break;
            default:
                done = 0;
                break;
            }
        } while (done == 0);
    }

    std::string setBait() {
        std::cout << "Please select fishing bait:" << "\n";
        std::cout << "1. Worm  " << "2. Bread  ";
        int done = 1;
        do {
            int c = _getch();
            switch (c) {
            case key_1:
                return "worm"; //bait - worm
                done = 1;
                break;
            case key_2:
                return "bread"; //bait - bread
                done = 1;
                break;
            default:
                done = 0;
                break;
            }
        } while (done == 0);
    }


private:
    int gameType;
    enum key {
        key_space = 32,
        key_1 = 49,
        key_2 = 50,
        key_3 = 51,
        key_b = 98,
        key_c = 99,
        key_g = 103,
        key_n = 110,
        key_y = 121
    };
};
