#include <iostream>
#include <iomanip>
using namespace std;

void seatsIntializaion (bool seats[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            seats[i][j] = 0;
        }
    }
}

void displaySeats (bool seats[10][10]){
    for (int i = 0; i < 10; i++){
        if (i == 0){
            cout << setw(10) << left << "column =";
            for (int k =1; k <= 10; k++){
                if (k == 5){
                    cout << k << "    ";
                }else{
                    cout << k << " ";
                }
            }
            cout <<"\n";
        }
        cout << "Row " << setw(2) << left << i+1 << " =  ";
        for (int j = 0; j < 10; j++){
            if (j == 4){
                cout << seats[i][j] << "    ";
            }else {
                cout << seats[i][j] << " ";
            }
        }
        cout << "\n";
    }
}

void reserveSeat(bool seats[10][10]){
    cout << "\n";
    int row, column;
    cout << "Enter row and column number for seat reservation: ";
    cin >> row >> column;
    while (seats[row-1][column-1] == 1 || column > 10 || row > 10){
        if (seats[row-1][column-1] == 1){
            cout << "Seat Already Reserved!\n";
            cout << "Enter row and column number for seat reservation: ";
            cin >> row >> column;
        }else {
            cout << "Invalid Seat Number!\n";
            cout << "Enter row and column number for seat reservation: ";
            cin >> row >> column;
        }
    }
    seats[row-1][column-1] = 1;
}

void cancelSeat(bool seats[10][10]){
    cout << "\n";
    int row, column;
    cout << "Enter row and column number for seat cancelation: ";
    cin >> row >> column;
    while (seats[row-1][column-1] == 0 || column > 10 || row > 10){
        if (seats[row-1][column-1] == 0){
            cout << "Seat is already free!\n";
            cout << "Enter row and column number for seat cancelation: ";
            cin >> row >> column;
        }else {
            cout << "Invalid Seat Number!\n";
            cout << "Enter row and column number for seat cancelation: ";
            cin >> row >> column;
        }
    }
    seats[row-1][column-1] = 0;
    cout << "\n";
}

void rowsInfo(bool seats[10][10]){
    int emptySeats = 0;
    cout << "\n";
    cout << setw(7) << left << "Row" << setw(15) << left << "Empty" << setw(15) << left << "Reserved" << "Remarks\n";
    for (int i = 0; i < 10; i++){
        int count = 0;
        for (int j = 0; j < 10; j++){
            if (seats[i][j] == 0){
                count++;
                emptySeats++;
            }
        }
        if (count == 10){
            cout << setw(7) << left << i+1 << setw(15) << left << count << setw(15) << left << 10-count << "full empty\n";
        } else if (count == 0){
           cout << setw(7) << left << i+1 << setw(15) << left << count << setw(15) << left << 10-count << "fully occupied\n";
        } else {
            cout << setw(7) << left << i+1 << setw(15) << left << count << setw(15) << left << 10-count << "partially  occupied\n";
        }
    }
    cout << "\n";
    cout << "Total Empty Seats = " << emptySeats << endl;
    cout << "Total Reserved Seats= " << 100-emptySeats << endl;
}

void mainMenu(bool seats[10][10]){
    int opt;
    cout << "Select an option\n";
    cout << "1.Display Seats\n";
    cout << "2.Reserve a seat\n";
    cout << "3.Cancel a seat\n";
    cout << "4.Show Rows Detail\n";
    cout << "0.Close program\n";
    cout << "Option: ";
    cin >> opt;
    
    switch(opt){
        case 1: displaySeats(seats);
                cout << "\n";
                mainMenu(seats);
        break;
        case 2:reserveSeat(seats);
               cout << "\n";
               mainMenu(seats);
        break;
        case 3:cancelSeat(seats);
               cout << "\n";
               mainMenu(seats);
        break;
        case 4:rowsInfo(seats);
               cout << "\n";
               mainMenu(seats);
        break;
        case 0: break;
        default: cout << "Invalid Option!\n";
                 cout << "\n";
                 mainMenu(seats);
        break;
    }
}


int main() {
    bool seats [10][10];
    seatsIntializaion(seats);
    mainMenu(seats);
    return 0;
}