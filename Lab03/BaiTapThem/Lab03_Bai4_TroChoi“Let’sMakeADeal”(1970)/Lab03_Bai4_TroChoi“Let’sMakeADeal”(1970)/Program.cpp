#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void playGame(int N);

int main() 
{
    int N;
    cout << "Nhập số lần chơi (N): ";
    cin >> N;

    playGame(N);

    _getch();

    return 0;
}

void playGame(int N) 
{
    int stayWins = 0; // Số lần thắng khi không thay đổi quyết định
    int switchWins = 0; // Số lần thắng khi thay đổi quyết định

    srand(time(0)); // Khởi tạo seed cho hàm rand()

    for (int i = 0; i < N; i++) 
    {
        int prizeDoor = rand() % 3; // Ô cửa chứa giải thưởng
        int chosenDoor = rand() % 3; // Ô cửa người chơi chọn ban đầu

        // Mở một ô cửa không chứa giải thưởng
        int openDoor;
        do 
        {
            openDoor = rand() % 3;
        } while (openDoor == prizeDoor || openDoor == chosenDoor);

        // Kiểm tra trường hợp không thay đổi quyết định
        if (chosenDoor == prizeDoor) 
        {
            stayWins++;
        }

        // Kiểm tra trường hợp thay đổi quyết định
        int newChosenDoor;
        do 
        {
            newChosenDoor = rand() % 3;
        } while (newChosenDoor == chosenDoor || newChosenDoor == openDoor);

        if (newChosenDoor == prizeDoor) {
            switchWins++;
        }
    }

    // In ra kết quả
    cout << "Khả năng thắng khi không thay đổi quyết định: " << (float)stayWins / N << endl;
    cout << "Khả năng thắng khi thay đổi quyết định: " << (float)switchWins / N << endl;
}