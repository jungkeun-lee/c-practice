#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int hand[NUM_RANKS][NUM_SUITS];
bool straight, flush, four, three, fullhouse, royal;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void) {
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

void read_cards(void) {
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  while (cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
    case '0':
      exit(EXIT_SUCCESS);
    case '2':
      rank = 0;
      break;
    case '3':
      rank = 1;
      break;
    case '4':
      rank = 2;
      break;
    case '5':
      rank = 3;
      break;
    case '6':
      rank = 4;
      break;
    case '7':
      rank = 5;
      break;
    case '8':
      rank = 6;
      break;
    case '9':
      rank = 7;
      break;
    case 't':
    case 'T':
      rank = 8;
      break;
    case 'j':
    case 'J':
      rank = 9;
      break;
    case 'q':
    case 'Q':
      rank = 10;
      break;
    case 'k':
    case 'K':
      rank = 11;
      break;
    case 'a':
    case 'A':
      rank = 12;
      break;
    default:
      bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
    case 'c':
    case 'C':
      suit = 0;
      break;
    case 'd':
    case 'D':
      suit = 1;
      break;
    case 'h':
    case 'H':
      suit = 2;
      break;
    case 's':
    case 'S':
      suit = 3;
      break;
    default:
      bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ')
        bad_card = true;

    bool duple = false;
    if (bad_card) {
      printf("Bad card; ignored. \n");
      duple = true;
    } else if (cards_read != 0) {
      for (int i = 0; i < cards_read; i++)
        if (hand[i][0] == rank && hand[i][1] == suit) {
          printf("Duplicate card; ignored.\n");
          duple = true;
          break;
        }
    }
    if (duple == false) {
      hand[cards_read][0] = rank;
      hand[cards_read][1] = suit;
      cards_read++;
    }
  }

  for (int i = 3; i >= 0; i--)
    for (int j = 0; j <= i; j++)
      if (hand[j][0] > hand[j + 1][0]) {
        int temp = hand[j][0];
        hand[j][0] = hand[j + 1][0];
        hand[j + 1][0] = temp;
      }
}

void analyze_hand(void) {

  straight = false;
  flush = false;
  four = false;
  three = false;
  fullhouse = false;
  pairs = 0;

  int sum = 0;
  for (int i = 0; i < NUM_CARDS; i++)
    sum += hand[i][1] * hand[i][1] * hand[i][1];
  if (sum == 0 || sum == 5 || sum == 40 || sum == 135)
    flush = true;

  sum = 0;
  for (int i = 1; i < NUM_CARDS; i++)
    sum += hand[i][0] - hand[0][0];
  if (sum == 10)
    straight = true;
  if (sum == 10 || hand[0][0] == 8)
    royal = true;

  int index = 0;
  int result = 0;

  while (index < 4) {
    sum = 0;
    while (hand[index][0] == hand[index + 1][0]) {
      sum++;
      if (index == 3)
        break;
      else
        index++;
    }
    index++;
    result += sum * sum;
  }
  switch (result) {
  case 9:
    four = true;
    break;
  case 4:
    three = true;
    break;
  case 1:
    pairs = 1;
    break;
  case 2:
    pairs = 2;
    break;
  case 5:
    fullhouse = true;
    break;
  }
}

void print_result(void) {
  if (straight && flush) {
    if (royal == true)
      printf("Royal flush");
    else
      printf("Straight flush");
  } else if (four)
    printf("Four of a kind");
  else if (fullhouse)
    printf("Full house");
  else if (flush)
    printf("Flush");
  else if (straight)
    printf("Straight");
  else if (three)
    printf("Three of a kind");
  else if (pairs == 2)
    printf("Two pairs");
  else if (pairs == 1)
    printf("Pair");
  else
    printf("High card");

  printf("\n\n");
}
