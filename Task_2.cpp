#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

void inputSales(int sales [7][5]){
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 5; j++){
            // to check direct output without wasting time in input use random numbers genrator to input random numbers
            
            
            // random_device rd;
            // mt19937 gen(rd());  
            // uniform_int_distribution<> dist(1000, 9999);

            // sales[i][j] = dist(gen);
            cout << "Input product " << j+1 << " Sales for day " << i+1 << "= ";
            cin >> sales[i][j];
        }
    }
}

void calculateRevenue(int sales [7][5]){
    cout <<"\n";
    cout << setw(20) << left << "Products" << "Revenue\n";
    cout << "----------------------------\n";
    for (int i = 0; i < 5; i++){
        int sum = 0;
        for (int j = 0; j <7; j++){
            sum += sales[j][i];
        }
        cout << "Product " << setw(12) << left << i+1 << sum << endl;
    }
}

void findMaxProduct(int sales[7][5]){
    cout << "\n";
    int highest = 0, maxProduct = 0;
    for (int i = 0; i < 5; i++){
        int sum = 0;
        for (int j = 0; j <7; j++){
            sum += sales[j][i];
        }
        if (sum > highest){
            highest = sum;
            maxProduct = i+1;
        }
    }
    cout << "Product " << maxProduct << " generated the maximum weekly revenue.\n";
}

void findBestDay (int sales[7][5]){
    cout << "\n";
    int highest = 0, bestDay = 0;
    for (int i = 0; i < 7; i++){
        int sum = 0;
        for (int j = 0; j <5; j++){
            sum += sales[i][j];
        }
        if (sum > highest){
            highest = sum;
            bestDay = i+1;
        }
    }
    cout << "Day " << bestDay << " is a best sell day.\n";
}

int main() {
    int sales [7][5];
    
    inputSales(sales);
    calculateRevenue(sales);
    findMaxProduct(sales);
    findBestDay(sales);

    return 0;
}