#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, m, tempN, tempN2, sortPos;
    cin >> n >> m;
    string dnaList[m], tempS, tempS2;
    int sortednessList[m], currentSortedness;
    //Obtain data
    for(int x = 0; x < m; x++){
        cin >> dnaList[x];
        currentSortedness = 0;
        for(int y = 0; y < n-2; y++){
            for(int z = y+1; z < n; z++){
                if(dnaList[x].at(y) > dnaList[x].at(z))
                    currentSortedness++;
            }
        }
        sortednessList[x] = currentSortedness;
    }
    cin >> tempN >> tempN2;
    //Sort
    for(int x = 1; x < m; x++){
        sortPos = -1;
        for(int y = 0; y < x && sortPos == -1; y++){
            if(sortednessList[x] < sortednessList[y])
                sortPos = y;
        }
        if(sortPos != -1){
            tempN = sortednessList[sortPos];
            tempS = dnaList[sortPos];
            sortednessList[sortPos] = sortednessList[x];
            dnaList[sortPos] = dnaList[x];
            for(int y = sortPos+1; y <= x; y+=2){
                tempN2 = sortednessList[y];
                tempS2 = dnaList[y];
                sortednessList[y] = tempN;
                dnaList[y] = tempS;
                tempN = sortednessList[y+1];
                tempS = dnaList[y+1];
                sortednessList[y+1] = tempN2;
                dnaList[y+1] = tempS2;
            }
        }
    }
    for(int x = 0; x < m-1; x++){
        if(sortednessList[x] == sortednessList[x+1]){
            if(dnaList[x] > dnaList[x+1]){
                tempS = dnaList[x];
                tempN = sortednessList[x];
                dnaList[x] = dnaList[x+1];
                sortednessList[x] = sortednessList[x+1];
                dnaList[x+1] = tempS;
                sortednessList[x+1] = tempN;
            }
        }
    }
    for(int x = 0; x < m; x++)
        cout << sortednessList[x] << " " << dnaList[x] << endl;
    return 0;
}
