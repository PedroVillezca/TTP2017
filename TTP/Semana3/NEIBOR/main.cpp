#include <cstring>
#include <sstream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    char num[7], newNum[7], initialNum[7], temp, minN = 'p';
    int pos = -1, minP = -1, result = 0, y;
    stringstream ss;
    scanf("%6s", num);
    for(int x = 0; x < strlen(num)-1; x++){
        if(num[x] < num[x+1])
            pos = x;
    }
    if(pos == -1)
        printf("%d\n", 0);
    else{
        for(y = 0; y < strlen(num); y++){
            if(num[y] < minN && num[y] > num[pos]){
                minP = y;
            }
        }
        temp = num[pos];
        num[pos] = num[minP];
        num[minP] = temp;
        for(y = 0; y < strlen(num)-pos-1; y++){
            newNum[y] = num[pos+1+y];
        }
        newNum[y] = '\0';
        sort(newNum, newNum+strlen(newNum));
        for(y = 0; y < pos+1; y++){
            initialNum[y] = num[y];
        }
        initialNum[y] = '\0';
        ss << initialNum << newNum;
        ss >> result;
        printf("%d\n", result);
    }
}
