#include <iostream>
#include <conio.h>

using namespace std;

void playGameAB();
void playGameBA();

int main() 
{
    int choice;
    cout << "Chọn chế độ chơi:" << endl;
    cout << "1. Máy tính (A) bốc trước" << endl;
    cout << "2. Bạn (B) bốc trước" << endl;
    cout << "Lựa chọn của bạn: ";
    cin >> choice;

    switch (choice) 
    {
    case 1:
        playGameAB();
        break;
    case 2:
        playGameBA();
        break;
    default:
        cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << endl;
        break;
    }

    _getch();

    return 0;
}

void playGameAB()
{
    int candies = 100;
    int numCandies;

    while (candies > 0)
    {
        // Máy tính (người chơi A) bốc kẹo
        numCandies = rand() % 4 + 1;
        candies -= numCandies;
        cout << "A bốc " << numCandies << " viên kẹo." << endl;
        cout << "Số kẹo còn lại trong hộp: " << candies << endl;

        if (candies <= 0)
        {
            cout << "A thắng cuộc!" << endl;
            break;
        }

        // Bạn (người chơi B) bốc kẹo
        cout << "Nhập số kẹo bạn muốn bốc (1-4): ";
        cin >> numCandies;

        while (numCandies < 1 || numCandies > 4)
        {
            cout << "Số kẹo không hợp lệ. Vui lòng nhập lại (1-4): ";
            cin >> numCandies;
        }

        candies -= numCandies;
        cout << "Bạn bốc " << numCandies << " viên kẹo." << endl;
        cout << "Số kẹo còn lại trong hộp: " << candies << endl;

        if (candies <= 0)
        {
            cout << "Bạn thắng cuộc!" << endl;
            break;
        }
    }
}

void playGameBA()
{
    int candies = 100;
    int numCandies;

    while (candies > 0)
    {
        // Bạn (người chơi B) bốc kẹo
        cout << "Nhập số kẹo bạn muốn bốc (1-4): ";
        cin >> numCandies;

        while (numCandies < 1 || numCandies > 4)
        {
            cout << "Số kẹo không hợp lệ. Vui lòng nhập lại (1-4): ";
            cin >> numCandies;
        }

        candies -= numCandies;
        cout << "Bạn bốc " << numCandies << " viên kẹo." << endl;
        cout << "Số kẹo còn lại trong hộp: " << candies << endl;

        if (candies <= 0)
        {
            cout << "Bạn thắng cuộc!" << endl;
            break;
        }

        // Máy tính (người chơi A) bốc kẹo
        numCandies = rand() % 4 + 1;
        candies -= numCandies;
        cout << "A bốc " << numCandies << " viên kẹo." << endl;
        cout << "Số kẹo còn lại trong hộp: " << candies << endl;

        if (candies <= 0)
        {
            cout << "A thắng cuộc!" << endl;
            break;
        }
    }
}