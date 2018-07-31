#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <list>

using namespace std;

int main(){
    int n, m, currentSortedness, insertPos;
    while(scanf("%d %d", &n, &m)){
    scanf("%d %d", &n, &m);
    vector<string> dnaList;
    vector<int> sortList;
    char dna[m+1];
    string actual = "";
    for(int x = 0; x < m; x++){
        scanf("%s", dna);
        actual = dna;
        //Calculate sortedness
        currentSortedness = 0;
        for(int y = 0; y < n-2; y++){
            for(int z = y+1; z < n; z++){
                if(actual.at(y) > actual.at(z))
                    currentSortedness++;
            }
        }
        //Insert in vector
        insertPos = -1;
        for(int y = 0; y < sortList.size() && insertPos == -1; y++){
            if(currentSortedness < sortList.at(y))
                insertPos = y;
        }
        if(insertPos == -1){
            dnaList.push_back(actual);
            sortList.push_back(currentSortedness);
        }
        else{
            dnaList.insert(dnaList.begin()+insertPos, actual);
            sortList.insert(sortList.begin()+insertPos, currentSortedness);
        }
    }
    scanf("%d %d", &insertPos, &n);
    for(int x = 0; x < m; x++){
        actual = dnaList.at(x);
        char* dna2 = &actual[0u];
        insertPos = sortList.at(x);
        printf("\n%s %d\n", dna2, insertPos);
    }
    }
    return 0;
}
