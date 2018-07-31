#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, l1, l2, c1 = 0, c2 = 0, r1 = 0, r2 = 0, zeroes = 0, counter = 0;
    stringstream number1, number2;
    cin >> n;
    while(n != 0){
    vector<int> numeral;
    for(int x = 0; x < n; x++){
        cin >> l1;
        numeral.push_back(l1);
    }
    sort(numeral.begin(), numeral.end());
    if(n%2 == 0)
        l1 = l2 = (n/2);
    else{
        l2 = n/2;
        l1 = l2 + 1;
    }

    while(numeral.at(counter) == 0){
        counter++;
        zeroes++;
    }

    number1 << numeral.at(counter);
    c1++;
    counter++;
    number2 << numeral.at(counter);
    c2++;
    counter++;

    while(zeroes != 0){
        if(c1 == c2){
            number1 << 0;
            c1++;
        }
        else{
            number2 << 0;
            c2++;
        }
        zeroes--;
    }

    while(counter < n){
        if(c1 == c2 && c1 < l1){
            number1 << numeral.at(counter);
            c1++;
        }
        else{
            number2 << numeral.at(counter);
            c2++;
        }
        counter++;
    }

    number1 >> r1;
    number2 >> r2;
    cout << r1+r2 << endl;
    number1.str("");
    number1.clear();
    number2.str("");
    number2.clear();
    c1 = c2 = r1 = r2 = zeroes = counter = 0;
    numeral.clear();
    cin >> n;
    }
    return 0;
}

/*
int main(){
    int n, l1, l2, c1 = 0, c2 = 0, r1 = 0, r2 = 0, zeroes = 0;
    stringstream number1, number2;
    cin >> n;
    while(n != 0){
    vector<int> numeral;
    for(int x = 0; x < n; x++){
        cin >> l1;
        numeral.push_back(l1);
    }
    sort(numeral.begin(), numeral.end());
    if(n%2 == 0)
        l1 = l2 = (n/2);
    else{
        l2 = n/2;
        l1 = l2 + 1;
    }
    for(int x = 0; x < n; x++){
        if(numeral.at(x) == 0)
            zeroes++;
        else{
            if(c2 == 1 && zeroes != 0){
                for(int y = 0; y < zeroes; y++){
                    if(c1 == c2){
                        number1 << 0;
                        c1++;
                    }
                    else{
                        number2 << 0;
                        c2++;
                    }
                }
                x--;
            }
            else{
                if(c1 == c2 && c1 < l1){
                    number1 << numeral.at(x);
                    c1++;
                }
                else{
                    number2 << numeral.at(x);
                    c2++;
                }
            }
        }
    }
    number1 >> r1;
    number2 >> r2;
    cout << r1+r2 << endl;
    number1.str("");
    number1.clear();
    number2.str("");
    number2.clear();
    c1 = c2 = r1 = r2 = zeroes = 0;
    numeral.clear();
    cin >> n;
    }
    return 0;
}
*/
