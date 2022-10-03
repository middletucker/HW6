
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string Astrology(int monthNum, int day);

int main()
{
  string sign, month;
  int day, numPeople;

  cin >> numPeople;

  for (int i; i < numPeople; i++)
    {
      cin >> day >> month;

      

      cout << sign << endl;
    }

  return 0;
}

int MonthtoNum (string month)
{
  int monthNum;

  if (month == "Jan")
    monthNum = 1;
  else if (month == "Feb")
    monthNum = 2;
  else if (month == "Mar")
    monthNum = 3;
  else if (month == "Apr")
    monthNum = 4;
  else if (month == "May")
    monthNum = 5;


  return monthNum;
}

string Astrology(int monthNum, int day)
{
  string sign;

  switch(monthNum)
    {
      case 1:
      if (day <= 20)
        sign = "Capricorn\n";
      else if (day > 20)
        sign = "Aquarius\n";
      case 2:
      if (day <= 19)
        sign = "Aquarius\n";
      else if (day > 19)
        sign = "Pisces\n";
      case 3:
      if (day <= 20)
        sign = "Pisces\n";
      else if (day > 20)
        sign = "Aries\n";
      case 4:
      if (day <= 20)
        sign = "Aries\n";
      else if (day > 20)
        sign = "Taurus\n";
      case 5:
      if (day <= 20)
        sign = "Taurus\n";
      else if (day > 20)
        sign = "Gemini\n";
      case 6:
      if (day <= 21)
        sign = "Gemini\n";
      else if (day > 21)
        sign = "Cancer\n";
      case 7:
      if (day <= 22)
        sign = "Cancer\n";
      else if (day > 22)
        sign = "Leo\n";
      case 8:
      if (day <= 22)
        sign = "Leo\n";
      else if (day > 22)
        sign = "Virgo\n";
      case 9:
      if (day <= 21)
        sign = "Virgo\n";
      else if (day > 21)
        sign = "Libra\n";
      case 10:
      if (day <= 22)
        sign = "Libra\n";
      else if (day > 22)
        sign = "Scorpio\n";
      case 11:
      if (day <= 22)
        sign = "Scorpio\n";
      else if (day > 22)
        sign = "Sagittarius\n";
      case 12:
      if (day <= 21)
        sign = "Sagittarius\n";
      else if (day > 21)
        sign = "Capricorn\n";
    }
    
  return sign;
}