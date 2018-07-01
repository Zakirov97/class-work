using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace CSharpTest
{
    class Program
    {
        static int AllUpperChars(string input)
        {
            int cnt = 0;
            foreach (char item in input)
                if (char.IsUpper(item))
                    cnt++;

            return cnt;
        }
        static int IsDigit(string s)
        {
            int cnt = 0;
            foreach (char item in s)
                if (char.IsDigit(item))
                    cnt++;

            return cnt;
        }
        static string ConvertToSixteen(int conv, int CC)
        {
            char x = ' ';
            string tmp = "";
            while (conv >= CC)
            {

                if (CC > 10)
                {
                    switch (conv % CC)
                    {
                        case 10:
                            x = 'A';
                            break;
                        case 11:
                            x = 'B';
                            break;
                        case 12:
                            x = 'C';
                            break;
                        case 13:
                            x = 'D';
                            break;
                        case 14:
                            x = 'E';
                            break;
                        case 15:
                            x = 'F';
                            break;
                    }
                }

                if (x != ' ')
                    tmp += x;
                else
                    tmp += Convert.ToString(conv % CC);
                conv /= CC;
                x = ' ';
            }
            if (CC > 10)
            {
                switch (conv % CC)
                {
                    case 10:
                        x = 'A';
                        break;
                    case 11:
                        x = 'B';
                        break;
                    case 12:
                        x = 'C';
                        break;
                    case 13:
                        x = 'D';
                        break;
                    case 14:
                        x = 'E';
                        break;
                    case 15:
                        x = 'F';
                        break;
                }
                if (x != ' ')
                    tmp += x;
                else
                    tmp += Convert.ToString(conv % CC);
                conv /= CC;
                x = ' ';
            }
            else
            {
                if (conv > 10)//if(CC>10)//
                {
                    switch (conv)
                    {
                        case 10:
                            tmp += 'A';
                            break;
                        case 11:
                            tmp += 'B';
                            break;
                        case 12:
                            tmp += 'C';
                            break;
                        case 13:
                            tmp += 'D';
                            break;
                        case 14:
                            tmp += 'E';
                            break;
                        case 15:
                            tmp += 'F';
                            break;
                    }
                    tmp += x;
                    tmp = new string(tmp.Reverse().ToArray());
                    return tmp;
                }
                else if (conv < 10 && conv > 0)
                {
                    tmp += Convert.ToString(conv);
                }
            }
            tmp = new string(tmp.Reverse().ToArray());
            return tmp;
        }
        static void threeAndFourExercise(int a, int b)
        {
            for (int i = 2; i < 16; i++)
            {
                ////String format with replace
                //string s = String.Format("qwe + rty = uio");
                //s = s.Replace("qwe", ConvertToSixteen(a, i));
                //s = s.Replace("rty", ConvertToSixteen(b, i));
                //s = s.Replace("uio", ConvertToSixteen(a + b, i));
                //Console.WriteLine(s);
                //s = String.Format("qwe - rty = uio");
                //s = s.Replace("qwe", ConvertToSixteen(a, i));
                //s = s.Replace("rty", ConvertToSixteen(b, i));
                //s = s.Replace("uio", ConvertToSixteen(a - b, i));
                //Console.WriteLine(s);
                //s = String.Format("qwe * rty = uio");
                //s = s.Replace("qwe", ConvertToSixteen(a, i));
                //s = s.Replace("rty", ConvertToSixteen(b, i));
                //s = s.Replace("uio", ConvertToSixteen(a * b, i));
                //Console.WriteLine(s);
                //s = String.Format("qwe % rty = uio");
                //s = s.Replace("qwe", ConvertToSixteen(a, i));
                //s = s.Replace("rty", ConvertToSixteen(b, i));
                //s = s.Replace("uio", ConvertToSixteen(a % b, i));
                //Console.WriteLine(s);
                //s = String.Format("qwe^rty = uio\n\n");
                //s = s.Replace("qwe", ConvertToSixteen(a, i));
                //s = s.Replace("rty", ConvertToSixteen(b, i));
                //s = s.Replace("uio", ConvertToSixteen((int)Math.Pow(a, b), i));
                //Console.WriteLine(s);

                ////String format with pattern {n}
                //Console.WriteLine("CC ¹{0}", i);
                //string s = String.Format("{0} + {1} = {2}", ConvertToSixteen(a, i), ConvertToSixteen(b, i), ConvertToSixteen(a + b, i));
                //Console.WriteLine(s);
                //s = String.Format("{0} - {1} = {2}", ConvertToSixteen(a, i), ConvertToSixteen(b, i), ConvertToSixteen(a - b, i));
                //Console.WriteLine(s);
                //s = String.Format("{0} * {1} = {2}", ConvertToSixteen(a, i), ConvertToSixteen(b, i), ConvertToSixteen(a * b, i));
                //Console.WriteLine(s);
                //s = String.Format("{0} % {1} = {2}", ConvertToSixteen(a, i), ConvertToSixteen(b, i), ConvertToSixteen(a % b, i));
                //Console.WriteLine(s);
                //s = String.Format("{0}^{1} = {2}\n\n", ConvertToSixteen(a, i), ConvertToSixteen(b, i), ConvertToSixteen((int)Math.Pow(a, b), i));
                //Console.WriteLine(s);
                //Console.WriteLine("--------------------");

                ////String interpolation
                //Console.WriteLine("CC ¹{0}", i);
                //Console.WriteLine($"{ConvertToSixteen(a, i)} + {ConvertToSixteen(b, i)} = {ConvertToSixteen(a + b, i)}");
                //Console.WriteLine($"{ConvertToSixteen(a, i)} - {ConvertToSixteen(b, i)} = {ConvertToSixteen(a - b, i)}");
                //Console.WriteLine($"{ConvertToSixteen(a, i)} * {ConvertToSixteen(b, i)} = {ConvertToSixteen(a * b, i)}");
                //Console.WriteLine($"{ConvertToSixteen(a, i)} % {ConvertToSixteen(b, i)} = {ConvertToSixteen(a % b, i)}");
                //Console.WriteLine($"{ConvertToSixteen(a, i)}^{ConvertToSixteen(b, i)} = {ConvertToSixteen((int)Math.Pow(a, b), i)}\n");
                //Console.WriteLine("--------------------");
            }
        }
        static void creditInBank(int amountOfCredit, int monthlySalary, int PercOfSalaryForLoan)
        {
            double salaryForLoan;
            salaryForLoan = (monthlySalary / 100) * 40;
            double dSalaryForLoan = salaryForLoan / 341;
            double rSalaryForLoan = salaryForLoan / 5;
            double monthOfPay = amountOfCredit / salaryForLoan;
            Console.OutputEncoding = System.Text.Encoding.UTF8;
            DateTime dt = DateTime.Now;
            string s1 = String.Format(salaryForLoan.ToString("C3", CultureInfo.CreateSpecificCulture("kz-KZ")));
            string s2 = String.Format(rSalaryForLoan.ToString("C3", CultureInfo.CreateSpecificCulture("ru-RU")));
            string s3 = String.Format(dSalaryForLoan.ToString("C3", CultureInfo.CreateSpecificCulture("en-US")));
            Thread.CurrentThread.CurrentCulture = new CultureInfo("en-US");
            for (int i = 0; i < 8; i++)
            {
                Console.WriteLine("\t{0:d}", dt);
                Console.WriteLine("Money to pay for {0:MMMM}", dt);
                Console.WriteLine("In tenge: {0}", s1);
                Console.WriteLine("In ruble: {0}", s2);
                Console.WriteLine("In dollar: {0}\n", s3);
                dt = dt.AddMonths(1);
            }


            //Console.WriteLine("{D}")
        }
        static void guessTheNumber()
        {
            Console.WriteLine("Guess the number from 1 to 30");
            Random rand = new Random();
            int random = rand.Next(1, 30);
            int guessNumb = 0;
            while (random != guessNumb)
            {
                guessNumb = int.Parse(Console.ReadLine());
                if (guessNumb == random)
                    Console.WriteLine("You guess right! Congratulations");
                else if (guessNumb > random)
                    Console.WriteLine("Your number is more, try again");
                else
                    Console.WriteLine("Your number is less, try again");
            }
        }
        static void guessTheNumber2(int maxTry)
        {
            Console.WriteLine("Guess the number from 1 to 30");
            Random rand = new Random();
            int random = rand.Next(1, 30);
            int guessNumb = 0;
            int bet;
            int cnt = 0;
            Console.WriteLine("Enter your bet");

            bet = int.Parse(Console.ReadLine());
            while (bet < 100 || bet > 1000)
            {
                Console.Clear();
                Console.WriteLine("Your bet is wrong, try again!");
                Console.WriteLine("Enter your bet");
                try
                {
                    bet = int.Parse(Console.ReadLine());
                }
                catch (Exception)
                {
                    Console.WriteLine("It is not number!");
                }
            }
            int firstBet = bet;
            double perBet = (bet / 100) * 2;
            while (random != guessNumb)
            {
                cnt++;
                bet /= 2;
                Console.Clear();
                if (maxTry == cnt)
                {
                    Console.WriteLine("You lose! The number of attemps existed maximum, better luck next time");
                    return;
                }
                if (bet < perBet)
                {
                    Console.WriteLine("You lose!");
                    return;
                }
                Console.WriteLine("Enter your number from 1 to 30");
                guessNumb = int.Parse(Console.ReadLine());
                if (guessNumb == random)
                {
                    Console.WriteLine("You guess right! Congratulations");
                    if (cnt == 1)
                    {
                        Console.WriteLine("Your win bet is {0}", firstBet * 2);
                    }
                    else if (cnt == 2)
                    {
                        Console.WriteLine("Your win bet is {0}", firstBet * (firstBet / 100) * 75);
                    }
                    else if (cnt == 3)
                    {
                        Console.WriteLine("Your win bet is {0}", firstBet * (firstBet / 100) * 50);
                    }
                    return;
                }
                else if (guessNumb > random)
                    Console.WriteLine("Your number is more, try again");
                else
                    Console.WriteLine("Your number is less, try again");
                Thread.Sleep(2000);
            }
        }
        static void Birthday()
        {
            Tuple<string, DateTime>[] turple =
          { new Tuple<string,  DateTime>("dima", new DateTime(1997, 1, 1)),
            new Tuple<string, DateTime>("kolya", new DateTime(1997, 2, 1)),
            new Tuple<string, DateTime>("vasya", new DateTime(1997, 3, 1)),
            new Tuple<string, DateTime>("petrov", new DateTime(1997, 4, 1)),
            new Tuple<string, DateTime>("mihalich", new DateTime(1997, 5, 1)),
            new Tuple<string, DateTime>("marinova", new DateTime(1997, 6, 1)),
            new Tuple<string, DateTime>("gagarina", new DateTime(1997, 7, 29)),
            new Tuple<string, DateTime>("olya", new DateTime(1997, 8, 1))
          };
            for (int i = 0; i < turple.Length; i++)
            {
                if (turple[i].Item2.Month == DateTime.Now.Month)
                {
                    Console.WriteLine("Birthday {0}.", turple[i].Item1);
                }
            }
        }
        static void Main(string[] args)
        {
            //string s = Console.ReadLine();                1
            //string isDigit = Console.Readline();          2
            //threeAndFourExercise(6, 4);                   3/4
            //creditInBank(12000000, 800000, 40);           5
            //guessTheNumber();                             6
            //guessTheNumber2(10);                          7
            //Birthday();                                   10
            Console.ReadLine();
        }
    }
}