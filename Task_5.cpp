#include <iostream>
#include <random>
using namespace std;

void inputValue(int imgArray[8][6]){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 6; j++){
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> dist(0, 9);
            imgArray[i][j] = dist(gen);
        }
    }
}

void printRealImg(int imgArray[8][6]){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 6; j++){
            cout << imgArray[i][j] << "  ";
        }
        cout << "\n";
    }
}

void printRotateImg(int imgArray[8][6]){
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 8; j++){
            cout << imgArray[j][i] << "  ";
        }
        cout << "\n";
    }
}


int main() {
    int imgArray[8][6];
    inputValue(imgArray);
    cout << "Real Image\n";
    printRealImg(imgArray);
    cout << "Rotate Image\n";
    printRotateImg(imgArray);
    
    return 0;
}