#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int number, goals, scoreHome, scoreAway, counter = 0, counter2= 0, difference, t = 0;
    scanf("%d", &number);
    scanf("%d", &goals);
    int dif[number];
    for(int x = 0; x < number; x++){
        scanf("%d", &scoreHome);
        scanf("%d", &scoreAway);
        difference = scoreHome-scoreAway;
        if(difference <= 0){
            dif[counter] = difference;
            counter++;
        }
        else
            t += 3;
    }
    counter++;
    sort(dif, dif+counter);
    reverse(dif, dif+counter);
    while(goals > 0 && counter2 < counter){
        dif[counter2]++;
        goals--;
        if(dif[counter2] > 0){
            t += 3;
            counter2++;
        }
    }
    if(counter2 < counter){
        while(dif[counter2] == 0){
            t += 1;
            counter2++;
        }
    }
    printf("%d", t);
    return 0;
}
