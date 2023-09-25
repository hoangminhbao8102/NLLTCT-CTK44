struct Player {
    int id;
    int money;
    std::vector<int> cards;
};

void Setup(int& c, int& m) {
    std::cout << "Nhap muc cuoc C: ";
    std::cin >> c;
    std::cout << "Nhap so tien ban dau M: ";
    std::cin >> m;
}

void ShuffleCards(std::vector<int>& cards) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

int CalculateScore(const std::vector<int>& cards) {
    int score = 0;
    for (int i = 0; i < 3; i++) {
        int card = cards[i] % 13 + 1;
        if (card >= 2 && card <= 10) {
            score += card;
        }
        else if (card >= 11 && card <= 13) {
            score += 10;
        }
        else if (card == 1) {
            score += 1;
        }
    }
    return score % 10;
}

void DealCards(std::vector<Player>& players, std::vector<int>& cards) {
    for (int i = 0; i < players.size(); i++) {
        std::vector<int> playerCards;
        for (int j = 0; j < 3; j++) {
            playerCards.push_back(cards.back());
            cards.pop_back();
        }
        players[i].cards = playerCards;
    }
}

void DisplayCards(const std::vector<Player>& players) {
    for (const Player& player : players) {
        std::cout << "Player " << player.id << " cards: ";
        for (int card : player.cards) {
            std::cout << card << " ";
        }
        std::cout << std::endl;
    }
}

void PlayGame() {
    int c, M;
    Setup(c, M);

    std::vector<int> cards;
    for (int i = 1; i <= 52; i++) {
        cards.push_back(i);
    }

    std::vector<Player> players;
    for (int i = 1; i <= 10; i++) {
        players.push_back({ i, M, {} });
    }

    while (players.size() > 1) {
        ShuffleCards(cards);
        DealCards(players, cards);
        DisplayCards(players);

        std::vector<int> scores;
        for (const Player& player : players) {
            int score = CalculateScore(player.cards);
            scores.push_back(score);
        }

        int maxScore = *std::max_element(scores.begin(), scores.end());
        std::vector<int> winners;
        for (int i = 0; i < players.size(); i++) {
            if (scores[i] == maxScore) {
                winners.push_back(i);
            }
        }

        if (winners.size() == 1) {
            int winnerIndex = winners[0];
            players[winnerIndex].money += c * (players.size() - 1);
            for (int i = 0; i < players.size(); i++) {
                if (i != winnerIndex) {
                    players[i].money -= c;
                }
            }
        }
        else {
            for (int i = 0; i < players.size(); i++) {
                if (std::find(winners.begin(), winners.end(), i) == winners.end()) {
                    players[i].money -= c;
                }
            }
        }

        players.erase(std::remove_if(players.begin(), players.end(), [](const Player& player) { return player.money; }), players.end());
    }

    std::cout << "Player " << players[0].id << " wins!" << std::endl;
}

void Exit() {
    std::cout << "Thoat chuong trinh" << std::endl;
    exit(0);
}