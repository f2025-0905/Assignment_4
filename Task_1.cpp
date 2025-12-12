#include <iostream>
#include <iomanip>
using namespace std;

void input (float temp[7][4]){
    for (int i = 0; i < 7; i++){
        
            switch (i){
                case 0: cout << "Enter temprature for monday: ";
                cin >> temp[i][0] >> temp[i][1] >> temp[i][2] >> temp[i][3] ;
                break;
                case 1: cout << "Enter temprature for tuesday: ";
                cin >> temp[i][0] >> temp[i][1] >> temp[i][2] >> temp[i][3] ;
                break;
                case 2: cout << "Enter temprature for wednesday: ";
                cin >> temp[i][0] >> temp[i][1] >> temp[i][2] >> temp[i][3] ;
                break;
                case 3: cout << "Enter temprature for thursday: ";
                cin >> temp[i][0] >> temp[i][1] >> temp[i][2] >> temp[i][3] ;
                break;
                case 4: cout << "Enter temprature for friday: ";
                cin >> temp[i][0] >> temp[i][1] >> temp[i][2] >> temp[i][3] ;
                break;
                case 5: cout << "Enter temprature for saturday: ";
                cin >> temp[i][0] >> temp[i][1] >> temp[i][2] >> temp[i][3] ;
                break;
                case 6: cout << "Enter temprature for sunday: ";
                cin >> temp[i][0] >> temp[i][1] >> temp[i][2] >> temp[i][3] ;
                break;
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
    cout << setw(15) << left << setw(15) << left << "Day" << setw(10) << "Avg. Temp" << endl;
    for(int i = 0; i < 7; i++){
        float sum = 0;
        for (int j = 0; j < 4; j++){
            sum += temp[i][j];
        }
        
        switch (i){
                case 0: cout << setw(15) << left << "Monday" << sum/4 << endl;
                break;
                case 1: cout << setw(15) << left << "Tuesday" << sum/4 << endl;
                break;
                case 2: cout << setw(15) << left << "Wednesday" << sum/4 << endl;
                break;
                case 3: cout << setw(15) << left << "Thursday" << sum/4 << endl;
                break;
                case 4: cout << setw(15) << left << "Friday" << sum/4 << endl;
                break;
                case 5: cout << setw(15) << left << "Saturday" << sum/4 << endl;
                break;
                case 6: cout << setw(15) << left << "Sunday" << sum/4 << endl;
                break;
            }
    }
}

int main() {
    
    float temp [7][4];
    
    input (temp);
    cout << endl;
    
    cout << "highest temprature of the week= " << highestTemp(temp) << endl;
    cout << endl;
    
    cout << "lowest temprature of the week= " << lowestTemp(temp) << endl;
    cout << endl;
    
    averageTemp(temp);
    cout << endl;
    
    
    
    
    return 0;
}