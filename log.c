#include<stdio.h>
#define rep(a,b,c) for(int a = b; a < c ; a++)

int main(void){
    int h;
    cin>>h;
    int puzzle[h][5];
    int sum = 0;
    rep(i,0,h)
       rep(j,0,5)cin>>puzzle[i][j];
    rep(i,0,h){
        int count = 1;
        int placex;
        rep(j,0,4){
            if(puzzle[i][j] != puzzle[i][j + 1]){
                count= 1;
                continue;
            }
            placex = j;
            count++;
        }
        if(count >= 3){
            sum += count * puzzle[i][placex];
            rep(j,0,3){
                puzzle[i][placex + j] = puzzle[i - 1][placex + j];
            }
        }
    }
    cout<<sum<<endl;
   

   
}