struct Card 
{
    char rank[3];  // "A", "2", ..., "10", "J", "Q", "K"
    char suit[10];  // "Hearts", "Diamonds", "Clubs", "Spades"
};

struct Player 
{
    Card* hand;  // Pointer to an array of cards
    int money;
};

void initializeDeck(Card* deck);
void shuffleDeck(Card* deck, int deckSize);
int calculateScore(Card* hand, int handSize);
void dealCards(Card* deck, Player* players, int numPlayers, int handSize);

void initializeDeck(Card* deck)
{
    const char* ranks[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    const char* suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    int index = 0;
    for (int s = 0; s < 4; ++s)
    {
        for (int r = 0; r < 13; ++r)
        {
            strcpy_s(deck[index].rank, sizeof(deck[index].rank), ranks[r]);
            strcpy_s(deck[index].suit, sizeof(deck[index].suit), suits[s]);
            ++index;
        }
    }
}

void shuffleDeck(Card* deck, int deckSize)
{
    srand(static_cast<unsigned int>(time(nullptr)));  // Seed for random number generation with explicit type casting
    for (int i = 0; i < deckSize; ++i)
    {
        int j = rand() % deckSize;
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}


// Tính điểm cho mỗi người chơi
int calculateScore(Card* hand, int handSize) 
{
    int score = 0;
    for (int i = 0; i < handSize; ++i) 
    {
        if (hand[i].rank[0] == 'A') score += 1;
        else if (hand[i].rank[0] == '1' || hand[i].rank[0] == 'J' || hand[i].rank[0] == 'Q' || hand[i].rank[0] == 'K') score += 10;
        else score += hand[i].rank[0] - '0';
    }
    return score % 10;
}

void dealCards(Card* deck, Player* players, int numPlayers, int handSize) 
{
    for (int i = 0; i < numPlayers; ++i) 
    {
        players[i].hand = new Card[handSize];
        for (int j = 0; j < handSize; ++j) {
            players[i].hand[j] = deck[i * handSize + j];
        }
    }
}