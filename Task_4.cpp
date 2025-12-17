#include <iostream>
using namespace std;

void fillArr(char crossWord[6][6]){
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            crossWord[i][j] = '0';
        }
    }
}

void showGrid(char crossWord[6][6]){
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            cout << crossWord[i][j] << ", ";
        }
        cout << "\n";
    }
}

void inputWords(char crossWord[6][6]){
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            showGrid(crossWord);
            cout << "Enter a character and blocker: ";
            cin >> crossWord[i][j];
        }
    }
}

int horizontalWords(char crossWord[6][6]){
    int count = 0;

    for (int i = 0; i < 6; i++){
        int lengthOfWord = 0;

        for (int j = 0; j < 6; j++){
            if (crossWord[i][j] != '#'){
                lengthOfWord++;
            } else {
                if (lengthOfWord >= 3){
                    count++;
                    lengthOfWord = 0;
                }
            }
        }

        if (lengthOfWord >= 3){
             count++;
        }
    }

    return count;
}

int VerticalWords(char crossWord[6][6]){
    int count = 0;

    for (int j = 0; j < 6; j++){
        int length = 0;

        for (int i = 0; i < 6; i++){
            if (crossWord[i][j] != '#'){
                length++;
            } else {
                if (length >= 3)
                    count++;
                length = 0;
            }
        }
        if (length >= 3){
            count++;
        }
    }
    return count;
}

void showLongestWord(char crossWord[6][6])
{
    string longestWord = "";

    // Check horizontal words
    for (int i = 0; i < 6; i++)
    {
        string current = "";

        for (int j = 0; j < 6; j++)
        {
            if (crossWord[i][j] != '#')
            {
                current += crossWord[i][j];
            }
            else
            {
                if (current.length() >= 3 && current.length() > longestWord.length())
                {
                    longestWord = current;
                }
                current = "";
            }
        }

        if (current.length() >= 3 && current.length() > longestWord.length())
        {
            longestWord = current;
        }
    }

    // Check vertical words
    for (int j = 0; j < 6; j++)
    {
        string current = "";

        for (int i = 0; i < 6; i++)
        {
            if (crossWord[i][j] != '#')
            {
                current += crossWord[i][j];
            }
            else
            {
                if (current.length() >= 3 && current.length() > longestWord.length())
                {
                    longestWord = current;
                }
                current = "";
            }
        }

        if (current.length() >= 3 && current.length() > longestWord.length())
        {
            longestWord = current;
        }
    }

    cout << "Longest Word: " << longestWord << endl;
    cout << "Length: " << longestWord.length() << endl;
}


int main() {
    char crossWord[6][6];
    fillArr(crossWord);
    inputWords(crossWord);
    cout << "Total Horizental Words= " << horizontalWords(crossWord)<< endl;
    cout << "Toral Vertical Words= " << VerticalWords(crossWord) << endl;
    showLongestWord(crossWord);
    
    return 0;
}