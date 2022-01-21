#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    cout<<" ********THE NUMBER GAME ********"<<endl;
int player;
int numg[4], arrb;
int num[4];
//int arrb1 = rand()%10 +7;
//arrb = rand()%10+arrb1;
 srand(time(0));
 arrb = rand()%10;
for( int i = 0; i<= arrb; i++){

    a:num[0]= rand()%10;
    b:num[1]= rand()%10;
    if( num[1]== num[0])
        goto b;
    c:num[2]= rand()%10;
    if(num[2]== num[0] || num[2]==num[1] )
        goto c;
    d:num[3]= rand()%10;
    if( num[3]== num[0] || num[3]==num[1] || num[3]==num[2])
        goto d;
}

int digit, pcount = 0, ncount = 0;
int G = 1;
while(G){
pcount = 0;
ncount = 0;
    cout<< "\n input non repeating numbers:";
    cin>>player;
for( int i = 3; i>=0; i-- ){
    digit = player%10;
    numg[i] = digit;
    player = player/10;

for( int j = 0; j<4; j++){
        if( numg[i]==num[j]){
            ncount++;
            if( i == j){
                pcount++;}
        }
       }
}
cout<< " numbers : "<<ncount<<"     positions : "<<pcount<<endl;
 if(pcount == 4){
    G = 0;}
}
cout<<" ******You won, slayyyy****** "<<endl;
cout<<"Changes"<<endl;
system("pause");
return main();
}
