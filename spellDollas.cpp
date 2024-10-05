#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string twoDigits(long long test)  {
    map<int, string> teens;  // i was not getting any better names okay!
    map<int, string> matures;

    teens[0] = "";
    teens[1] = "one ";
    teens[2] = "two ";
    teens[3] = "three ";
    teens[4] = "four ";
    teens[5] = "five ";
    teens[6] = "six ";
    teens[7] = "seven ";
    teens[8] = "eight ";
    teens[9] = "nine ";
    teens[10] = "ten ";
    teens[11] = "eleven ";
    teens[12] = "twelve ";
    teens[13] = "thirteen ";
    teens[14] = "fourteen ";
    teens[15] = "fifteen ";
    teens[16] = "sixteen ";
    teens[17] = "seventeen ";
    teens[18] = "eighteen ";
    teens[19] = "nineteen ";

    matures[0] = "";
    matures[1] = "";
    matures[2] = "twenty ";
    matures[3] = "thirty ";
    matures[4] = "fourty ";
    matures[5] = "fifty ";
    matures[6] = "sixty ";
    matures[7] = "seventy ";
    matures[8] = "eighty ";
    matures[9] = "ninety ";

    string str;
    if(test>19)  {
        str+=matures[test/10] + teens[test%10]; 
    }else{
        str+=teens[test];
    }
    return str;
}


void spell_it()  {
    
    long long n;
    cin>>n;
    long long num=n;
    stack<string> words;
    words.push("$");
    words.push(twoDigits(num%100));
    num/=100;
    words.push(twoDigits(num%10) + "hundred and ");
    num/=10;
    words.push(twoDigits(num%100) + "thousand ");
    num/=100;
    words.push(twoDigits(num%10) + "hundred ");
    num/=10;
    words.push(twoDigits(num%100) + "million ");
    num/=100;
    words.push(twoDigits(num%10) + "hundred ");
    num/=10;

    words.push(twoDigits(num%100) + "billion ");
    num/=100;
    words.push(twoDigits(num%10) + "hundred ");
    num/=10;
    words.push(twoDigits(num%100) + "trillion ");
    num/=100;
    words.push(twoDigits(num%10) + "hundred ");
    num/=10;

    string result;
    while(!words.empty())  {
        string popnigga = words.top();
        if(popnigga=="hundred and " || popnigga=="thousand " || popnigga=="million " || popnigga=="billion " || popnigga=="trillion " || popnigga=="hundred ")  {
            words.pop();
        }else{
            result+=words.top();
            words.pop();
        }
        
    }

    cout<<result<<endl;


}

void playWithMaps()  {
    spell_it();
}


int main()  {
    playWithMaps();
    return 0;
}