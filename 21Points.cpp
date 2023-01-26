// 電腦的點數超過21點時會顯示0點
#include <bits/stdc++.h>
using namespace std;
int ask() {
  int a;
  do {
    cout << "A的點數要1或是11?(1/11) ";
    cin >> a;
  } while (a != 1 && a != 11);
  if (a == 11)
    return 0;
  else
    return 1;
}
int randCards() {
  int card = rand() % 13 + 1;
  return card;
}
void print(vector<int> v) {
  cout << "你的手牌: ";
  for (auto e : v) {
    switch (e) {
      case 11:
        cout << 'J';
        break;
      case 12:
        cout << 'Q';
        break;
      case 13:
        cout << 'K';
        break;
      case 1:
      case 0:
        cout << 'A';
        break;
      default:
        cout << e;
        break;
    }
    cout << " ";
  }
  cout << "\n";
}
int sum(vector<int> v) {
  int total = 0;
  for (auto e : v) {
    if (e > 10)
      total += 10;
    else if (e == 0)
      total += 11;
    else
      total += e;
  }
  return total;
}
int player() {
  char action;
  bool isExploded = false;
  srand(time(NULL));
  vector<int> cardsOnHand;
  cardsOnHand.push_back(randCards());
  cardsOnHand.push_back(randCards());
  while (!isExploded) {
    print(cardsOnHand);
    for (int i = 0; i < cardsOnHand.size(); i++)
      if (cardsOnHand[i] == 1 || cardsOnHand[i] == 0) cardsOnHand[i] = ask();
    if (sum(cardsOnHand) > 21) {
      isExploded = true;
      break;
    }
    do {
      cout << "要抽牌嗎?(Y/N)";
      cin >> action;
    } while (action != 'Y' && action != 'N');
    if (action == 'Y')
      cardsOnHand.push_back(randCards());
    else
      break;
  }
  if (isExploded) {
    cout << "Explode!\n";
    return 0;
  } else {
    int total = sum(cardsOnHand);
    cout << "您的點數: " << total << endl;
    return total;
  }
}
int bot() {
  bool isExploded = false;
  int curr = 0;
  srand(time(NULL));
  vector<int> cardsOnHand;
  cardsOnHand.push_back(randCards());
  cardsOnHand.push_back(randCards());
  curr = sum(cardsOnHand);
  while (!isExploded && curr <= 15) {
    cardsOnHand.push_back(randCards());
    curr = sum(cardsOnHand);
    for (int i = 0; i < cardsOnHand.size(); i++) {
      if (curr + 10 <= 21 && cardsOnHand[i] == 1) {
        cardsOnHand[i] = 0;
        curr += 10;
      } else if (curr >= 21 && cardsOnHand[i] == 0) {
        cardsOnHand[i] = 1;
        curr -= 10;
      }
    }
    if (curr >= 21) isExploded = true;
  }
  if (isExploded)
    return 0;
  else
    return curr;
}
int main() {
  int playerTotal = player();
  int botTotal = bot();
  cout << "電腦的點數為" << botTotal << "點\n";
  if (playerTotal == 0 || playerTotal <= botTotal)
    cout << "你輸了!" << endl;
  else
    cout << "你贏了!" << endl;
  return 0;
}