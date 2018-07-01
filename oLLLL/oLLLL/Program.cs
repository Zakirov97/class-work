using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace OlimpGame
{
    class Program
    {
        public struct Card
        {

            public string value;
            public char nameSuit;

        }//Karta
        class Deck
        {

            public List<Card> cards = new List<Card>();

            public List<Card> getCards() { return this.cards; }
            public void setCards()
            {
                int mark = 2;
                for (int i = 0; i < 52; i += 4)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        Card cd;
                        cd.value = "";
                        if (mark > 10)
                        {
                            if (mark == 11)
                            {
                                cd.value = "J";
                            }
                            else if (mark == 12)
                            {
                                cd.value = "Q";
                            }
                            else if (mark == 13)
                            {
                                cd.value = "K";
                            }
                            else if (mark == 14)
                            {
                                cd.value = "A";
                            }
                        }
                        else
                        {
                            cd.value = Convert.ToString(mark);
                        }
                        cd.nameSuit = ' ';
                        if (j == 0)
                            cd.nameSuit = '\u2663';
                        else if (j == 1)
                            cd.nameSuit = '\u2660';
                        else if (j == 2)
                            cd.nameSuit = '\u2666';
                        else if (j == 3)
                            cd.nameSuit = '\u2665';
                        cards.Add(cd);
                    }
                    mark++;
                }
            }
            public void deleteCard(int index)
            {
                cards.RemoveAt(index);
            }
            public void outCards()
            {
                foreach (var item in cards)
                    Console.WriteLine("Number {0}, Suit  {1}", item.value, item.nameSuit);
            }
            public Deck()
            {
                setCards();
            }


        }//Koloda

        static void Main(string[] args)
        {
            Console.OutputEncoding = System.Text.Encoding.UTF8;
            Deck d = new Deck();

            List<string> players = new List<string>();

            Console.WriteLine("Enter the number of players. Minimum players 3. Maximum 6");
            int NumbOfPlayers = 0;
            while (true)
            {
                try
                {
                    NumbOfPlayers = int.Parse(Console.ReadLine());
                }
                catch (Exception)
                {
                    Console.WriteLine("It is not number");
                    continue;
                }
                if (NumbOfPlayers < 3 || NumbOfPlayers > 6)
                    Console.WriteLine("Number of players wrong, try again");
                else
                    break;
            }

            for (int i = 1; i <= NumbOfPlayers; i++)
            {
                Console.WriteLine("Enter name the {0} player", i);
                players.Add(Console.ReadLine());
            }

            Console.WriteLine("Game is started!");
            Thread.Sleep(2000);
            Console.Clear();
            List<string> saveValue = new List<string> { "", "", "", "", "", "" };
            List<int> Score = new List<int> { 0, 0, 0, 0, 0, 0 };
            List<int> secondChoose = new List<int>();
            bool markWhile = false;
            List<string> losers = new List<string>();
            List<string> losersValue = new List<string>();
            ////////////////////////////////////////////////////////////////////////
            while (true)
            {
                if (markWhile)
                {
                    break;
                }
                for (int i = 0; i < players.Count; i++)
                {
                    if (secondChoose.Count == players.Count)
                    {
                        markWhile = true;
                        break;
                    }
                    bool mark = false;
                    for (int l = 0; l < secondChoose.Count; l++)
                    {
                        if (secondChoose[l] == i)
                        {
                            mark = true;
                            break;
                        }
                    }
                    if (mark)
                    {
                        continue;
                    }
                    Console.WriteLine("Choose number {0}", players[i]);
                    Console.WriteLine("1. Take card");
                    Console.WriteLine("2. End game");
                    int choose = 0;
                    while (true)
                    {
                        if (choose <= 0 || choose > 2)
                        {
                            try
                            {
                                choose = int.Parse(Console.ReadLine());
                            }
                            catch (Exception)
                            {
                                Console.WriteLine("Wrong number! Try again.");
                            }
                        }
                        else
                            break;
                    }

                    int score = 0;
                    if (choose == 1)
                    {
                        //random card
                        Random random = new Random();
                        int randomCard = random.Next(0, d.getCards().Count);
                        //delete card from deck
                        Card cd = new Card();
                        cd.value = d.getCards()[randomCard].value;
                        cd.nameSuit = d.getCards()[randomCard].nameSuit;
                        d.getCards().Remove(cd);
                        saveValue[i] += cd.value.ToString();
                        saveValue[i] += "¹";
                        saveValue[i] += cd.nameSuit.ToString();
                        saveValue[i] += "/";


                        Console.WriteLine("Your card is {0} {1}", cd.value, cd.nameSuit);//izmenit cvet
                        string str = saveValue[i];

                        for (int j = 0; j < str.Length; j++)
                        {
                            if (str[j] == '¹')
                            {
                                string str2 = str.Substring(0, j);
                                if (str2 == "J")
                                    score += 2;
                                else if (str2 == "Q")
                                    score += 3;
                                else if (str2 == "K")
                                    score += 4;
                                else if (str2 == "A")
                                    score += 1;
                                else
                                    score += Int32.Parse(str2);
                                str = str.Remove(0, j);
                                j = 0;
                            }
                            else if (str[j] == '/')
                            {
                                str = str.Remove(0, j + 1);
                                j = 0;
                            }
                        }
                        if (score > 21)
                        {
                            Console.WriteLine("You lose!");
                            players.RemoveAt(i);
                            saveValue.RemoveAt(i);
                            Score.RemoveAt(i);
                        }
                        else
                        {
                            Console.WriteLine("Your score is {0}", score);
                            Score[i] = score;
                        }
                    }
                    else if (choose == 2)
                    {
                        secondChoose.Add(i);
                        continue;
                    }
                }
            }

            for (int i = 0; i < players.Count; i++)
            {
                saveValue[i] = saveValue[i].Replace('¹', ' ');
                saveValue[i] = saveValue[i].Replace('/', ' ');
            }
            if (players.Count > 0)
            {
                for (int i = 0; i < players.Count; i++)
                {
                    int x = 0;
                    Score.Max();
                    for (int j = 0; j < Score.Count; j++)
                    {
                        if (Score.Max() == Score[j])
                        {
                            x = j;
                        }
                    }
                    Console.WriteLine("{0} your card is {1}, all score is {2}", players[x], saveValue[x], Score[x]);
                    Score.RemoveAt(x);
                    players.RemoveAt(x);
                    saveValue.RemoveAt(x);
                    i--;
                }
            }
            else
            {
                Console.WriteLine("Game over! All you gays losers");
            }
            Console.ReadLine();
        }

    }
}
//char club = '\u2663';//tref
//char spade = '\u2660';//Piki
//char diamond = '\u2666';//bubi
//char heart = '\u2665';//Chervi
