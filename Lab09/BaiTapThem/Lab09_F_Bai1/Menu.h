void XuatMenu();
int ChonMenu(int SoMenu);
void XuLyMenu(int menu);

struct Card* deck;            // Giả sử bạn đã khai báo bộ bài ở nơi khác
struct Player* players;       // Giả sử bạn đã khai báo mảng người chơi ở nơi khác
int numPlayers;				  // Số lượng người chơi
int handSize;				  // Số bài trên tay mỗi người chơi
int currentBet;				  // Mức cược hiện tại


void XuatMenu()
{
	cout << "\n===========================HE THONG CHUC NANG===========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Thiet lap muc cuoc C";
	cout << "\n2. Khoi tao bo bai";
	cout << "\n3. Chia bai";
	cout << "\n4. Tinh diem";
	cout << "\n========================================================================";
}

int ChonMenu(int SoMenu)
{
	int STT;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0,...," << SoMenu << "] de chon chuc nang, stt = ";
		cin >> STT;
		if (0 <= STT && STT <= SoMenu)
			break;
	}
	return STT;
}

void XuLyMenu(int menu)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh";
		exit(0);  // Thoát khỏi chương trình
		break;
	case 1:
		system("CLS");
		cout << "\n1. Thiet lap muc cuoc C";
		cout << "Nhap muc cuoc moi: ";
		cin >> currentBet;
		// Bổ sung kiểm tra để đảm bảo currentBet không quá lớn so với số tiền của người chơi
		break;
	case 2:
		cout << "\n2. Khoi tao bo bai\n";
		initializeDeck(deck); // Khởi tạo lại bộ bài
		cout << "Bo bai da duoc khoi tao lai.\n";
		break;
	case 3:
		system("CLS");
		cout << "\n2. Chia bai";
		shuffleDeck(deck, 52);  // Giả sử có 52 lá bài
		dealCards(deck, players, numPlayers, handSize);  // Chia bài cho người chơi
		break;
	case 4:
		system("CLS");
		cout << "\n3. Tinh diem";
		for (int i = 0; i < numPlayers; ++i) {
			int score = calculateScore(players[i].hand, handSize);
			cout << "Nguoi choi " << i + 1 << " co diem la: " << score << endl;
		}
		break;
	default:
		cout << "Tuy chon khong hop le. Vui long thu lai.\n";
		break;
	}
}