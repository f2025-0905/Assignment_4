#include <iostream>
using namespace std;

void input (float temp[7][4]){
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 4; j++){
            switch (i){
                case 0: cout << "Enter temprature " << j+1 << " for monday: ";
                cin >> temp[i][j];
                break;
                case 1: cout << "Enter temprature " << j+1 << " for tuesday: ";
                cin >> temp[i][j];
                break;
                case 2: cout << "Enter temprature " << j+1 << " for wednesday: ";
                cin >> temp[i][j];
                break;
                case 3: cout << "Enter temprature " << j+1 << " for thursday: ";
                cin >> temp[i][j];
                break;
                case 4: cout << "Enter temprature " << j+1 << " for friday: ";
                cin >> temp[i][j];
                break;
                case 5: cout << "Enter temprature " << j+1 << " for saturday: ";
                cin >> temp[i][j];
                break;
                case 6: cout << "Enter temprature " << j+1 << " for sunday: ";
                cin >> temp[i][j];
                break;
            }
        }
    }
}

float highestTemp(float temp[7][4]){
    float highest = temp[0][0];
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 4; j++){
            if (temp[i][j] > highest){
                highest = temp[i][j];
            }
        }
    }
    return highest;
} 

float lowestTemp(float temp[7][4]){
    float lowest = temp[0][0];
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 4; j++){
            if (temp[i][j] < lowest){
                lowest = temp[i][j];
            }
        }
    }
    return lowest;
} 

void averageTemp(float temp[7][4]){
    for(int i = 0; i < 7; i++){
        float sum = 0;
        for (int j = 0; j < 4; j++){
            sum += temp[i][j];
        }
        switch (i){
                case 0: cout << "Average temprature of Monday= " << sum/4;
                break;
                case 1: cout << "Average temprature of Tuesday= " << sum/4;
                break;
                case 2: cout << "Average temprature of Wednesday= " << sum/4;
                break;
                case 3: cout << "Average temprature of Thursday= " << sum/4;
                break;
                case 4: cout << "Average temprature of Friday= " << sum/4;
                break;
                case 5: cout << "Average temprature of Saturday= " << sum/4;
                break;
                case 6: cout << "Average temprature of Sunday= " << sum/4;
                break;
            }
    }
}

int main() {
    
    float temp [7][4];
    
    input (temp);
    highestTemp(temp);
    lowestTemp(temp);
    averageTemp(temp);
    
    
    
    return 0;
}