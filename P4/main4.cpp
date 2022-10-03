
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

string Astrology(int monthNum, int day);
int MonthtoNum(string month);

int main() {
  string sign, month;
  int day, monthNum, numPeople;

  cin >> numPeople;

  for (int i; i < numPeople; i++) {
    cin >> day;
    cin >> month;

    monthNum = MonthtoNum(month);

    sign = Astrology(monthNum, day);

    cout << sign << endl;
  }

  return 0;
}

int MonthtoNum(string month) {
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
  else if (month == "Jun")
    monthNum = 6;
  else if (month == "Jul")
    monthNum = 7;
  else if (month == "Aug")
    monthNum = 8;
  else if (month == "Sep")
    monthNum = 9;
  else if (month == "Oct")
    monthNum = 10;
  else if (month == "Nov")
    monthNum = 11;
  else if (month == "Dec")
    monthNum = 12;
  else
    cout << "Error in MonthtoNum\n";

  return monthNum;
}

string Astrology(int monthNum, int day) {
  string sign;

  switch (monthNum) {
  case 1:
    if (day <= 20)
      sign = "Capricorn\n";
    else if (day > 20)
      sign = "Aquarius\n";
    break;
  case 2:
    if (day <= 19)
      sign = "Aquarius\n";
    else if (day > 19)
      sign = "Pisces\n";
    break;
  case 3:
    if (day <= 20)
      sign = "Pisces\n";
    else if (day > 20)
      sign = "Aries\n";
    break;
  case 4:
    if (day <= 20)
      sign = "Aries\n";
    else if (day > 20)
      sign = "Taurus\n";
    break;
  case 5:
    if (day <= 20)
      sign = "Taurus\n";
    else if (day > 20)
      sign = "Gemini\n";
    break;
  case 6:
    if (day <= 21)
      sign = "Gemini\n";
    else if (day > 21)
      sign = "Cancer\n";
    break;
  case 7:
    if (day <= 22)
      sign = "Cancer\n";
    else if (day > 22)
      sign = "Leo\n";
    break;
  case 8:
    if (day <= 22)
      sign = "Leo\n";
    else if (day > 22)
      sign = "Virgo\n";
    break;
  case 9:
    if (day <= 21)
      sign = "Virgo\n";
    else if (day > 21)
      sign = "Libra\n";
    break;
  case 10:
    if (day <= 22)
      sign = "Libra\n";
    else if (day > 22)
      sign = "Scorpio\n";
    break;
  case 11:
    if (day <= 22)
      sign = "Scorpio\n";
    else if (day > 22)
      sign = "Sagittarius\n";
    break;
  case 12:
    if (day <= 21)
      sign = "Sagittarius\n";
    else if (day > 21)
      sign = "Capricorn\n";
    break;
  default:
    cout << "Error in Astrology\n";
  }

  return sign;
}