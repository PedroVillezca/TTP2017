#include <cstdio>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

class DNA{
  public:
      string strand;
      int sortedness;
      int getSortedness();
      string getStrand();
      DNA();
      DNA(string s, int so);
      void output();
};

DNA :: DNA(string s, int so){
    strand = s;
    sortedness = so;
}
void DNA :: output(){
    char* dna;
    dna = &strand[0u];
    printf("%s\n", dna, sortedness);
}
int DNA :: getSortedness(){
    return sortedness;
}
string DNA :: getStrand(){
    return strand;
}

int main(){
    int n, m, sortedness, insertPos;
    bool first = true;
    vector<DNA> dnaList;
    scanf("%i %i", &n, &m);
    while(m != 0){
        if(!first)
            printf("\n");
        else
            first = false;
        char dna[n+1];
        string strand = "";
        for(int x = 0; x < m; x++){
            scanf("%s", dna);
            strand = dna;
            sortedness = 0;
            for(int y = 0; y < n-1; y++){
                for(int z = y+1; z < n; z++){
                    if(strand[y] > strand[z])
                        sortedness++;
                }
            }
            DNA actual(strand, sortedness);
            insertPos = -1;
            for(int y = 0; y < dnaList.size() && insertPos == -1; y++){
                if(dnaList.at(y).getSortedness() > actual.getSortedness())
                    insertPos = y;
                else if(dnaList.at(y).getSortedness() == actual.getSortedness()){
                    if(dnaList.at(y).getStrand() > actual.getStrand())
                        insertPos = y;
                }
            }
            if(insertPos == -1)
                dnaList.push_back(actual);
            else
                dnaList.insert(dnaList.begin()+insertPos, actual);

        }
        for(int x = 0; x < m; x++){
            dnaList.at(x).output();
        }
        scanf("%i %i", &n, &m);
        dnaList.clear();
    }
}
