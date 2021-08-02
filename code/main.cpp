#include <iostream>
#include <ctime>
#include <math.h>
#include <windows.h>
using namespace std;

bool exitGame = false;

void render() {

}

void input() {
    char symbol;
    cin >> symbol;
    switch (symbol)
    {
    case 27:
        exitGame = true;
        break;
    
    default:
        break;
    } 


}

int main() {

    // Main game cycle
    while (!exitGame)
    {
        input();
        render();
    }
    
    return 0;
}