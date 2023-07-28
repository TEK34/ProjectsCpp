#include <iostream>
using namespace std;

                   //Tic Tac Toe console game

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
//Game Status Function
int CheckStatus(){
//Horizontal Win
     if(square[1]==square[2] && square[2]==square[3] ||
        square[4]==square[5] && square[5]==square[6] ||
        square[7]==square[8] && square[8]==square[9] ){
        return 1;}
//Vertical Win
else if(square[1]==square[4] && square[4]==square[7] ||
        square[2]==square[5] && square[5]==square[8] ||
        square[3]==square[6] && square[6]==square[9] ){
        return 1;}
//Diagonal Win
else if(square[1]==square[5] && square[5]==square[9] ||
        square[3]==square[5] && square[5]==square[7] ){
        return 1;}
//Draw
else if(square[1]!= '1' && square[2]!= '2' && square[3]!= '3' &&
        square[4]!= '4' && square[5]!= '5' && square[6]!= '6' &&
        square[7]!= '7' && square[8]!= '8' && square[9]!= '9' ){
        return 0;}
else{
    return -1;}}
//Board Generation Function
void board(){
    system("cls");
    cout <<"\n\n\n  ____________________\n"
         <<"  |                  |\n"
         <<"  | Tic Tac Toe game |\n"
         <<"  |__________________|\n\n\n\n"
         <<"  Player1(x) - Player2(0)\n"
         <<"           |     |   "                                              <<endl
         <<"         "<<square[1]<<" | "<<" "<<square[2]<<"  | "<<" "<<square[3]<<endl
         <<"       ____|_____|____"                                             <<endl
         <<"           |     |   "                                              <<endl
         <<"         "<<square[4]<<" | "<<" "<<square[5]<<"  | "<<" "<<square[6]<<endl
         <<"       ____|_____|____"                                             <<endl
         <<"           |     |   "                                              <<endl
         <<"         "<<square[7]<<" | "<<" "<<square[8]<<"  | "<<" "<<square[9]<<endl
         <<"           |     |   \n"                                            <<endl;
}
int main()
{
    short player=1,i,choice;
    char mark;
// Making the game continue until a player wins or it s a draw
    do{
        board();
        player=(player%2)?1:2;
        cout<<"  Player "<< player << ", enter the number:";
        cin >>choice;
        mark=(player==1) ? 'X' : '0';
// Checking if the selected space has been  used by you or the other player.
        if(choice==1 && square[1]=='1'){
            square[1]=mark;}

   else if(choice==1 && square[1]=='1'){
            square[1]=mark;}

   else if(choice==2 && square[2]=='2'){
            square[2]=mark;}

   else if(choice==3 && square[3]=='3'){
            square[3]=mark;}

   else if(choice==4 && square[4]=='4'){
            square[4]=mark;}

   else if(choice==5 && square[5]=='5'){
            square[5]=mark;}

   else if(choice==6 && square[6]=='6'){
            square[6]=mark;}

   else if(choice==7 && square[7]=='7'){
            square[7]=mark;}

   else if(choice==8 && square[8]=='8'){
            square[8]=mark;}

   else if(choice==9 && square[9]=='9'){
            square[9]=mark;}
   else{cout<<"  Invalid Move! Please write a number that is not "<<choice<<":";
//   In this case decrementing the player will make sure that
// the player who made a mistake does not lose his turn.
    player--;
    cin.ignore();
    cin.get();}
    i=CheckStatus();
    player++;}
    while(i==-1);
    board();
    if(i==1){cout<<"\n Congratulations! Player "<< --player << " won!";}
    else{ cout<<"\n DRAW! ";}
}
