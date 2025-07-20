#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

bool isJulianLeapYear(int year) {
    return year % 4 == 0;
}

bool isGregorianLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

string dayOfProgrammer(int year) {
    int day = 13; // Default day for 256th day
    int month = 9; // September

    if (year < 1918) { // Julian calendar
        if (isJulianLeapYear(year)) {
            day = 12;
        }
    } else if (year > 1918) { // Gregorian calendar
        if (isGregorianLeapYear(year)) {
            day = 12;
        }
    } else { // Year 1918
        day = 26;
    }

    // Format the day and month into two digits
    string dayStr = (day < 10) ? "0" + to_string(day) : to_string(day);
    string monthStr = (month < 10) ? "0" + to_string(month) : to_string(month);

    return dayStr + "." + monthStr + "." + to_string(year);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
