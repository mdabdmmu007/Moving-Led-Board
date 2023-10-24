#include <iostream>      //
#include <cstdlib>      // for the function system()


using namespace std;

// Characters A-Z & 0-9
char one[7][5] =  {{' ',' ','#',' ',' '},
            {' ','#','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ','#','#','#',' '}
},
two[7][5] =  {{' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ',' ',' ','#',' '},
            {' ',' ','#',' ',' '},
            {' ','#',' ',' ',' '},
            {'#','#','#','#','#'}
},
three[7][5] =  {{' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {' ',' ',' ',' ','#'},
            {' ','#','#','#',' '},
            {' ',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
four[7][5] =  {{' ',' ',' ','#',' '},
            {' ',' ','#','#',' '},
            {' ','#',' ','#',' '},
            {'#','#','#','#',' '},
            {' ',' ',' ','#',' '},
            {' ',' ',' ','#',' '},
            {' ',' ',' ','#',' '}
},
five[7][5] =  {{'#','#','#','#','#'},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#','#','#','#',' '},
            {' ',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
six[7][5] =  {{' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ',' '},
            {'#','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
seven[7][5] =  {{'#','#','#','#','#'},
            {'#',' ',' ',' ','#'},
            {' ',' ',' ','#',' '},
            {' ',' ','#',' ',' '},
            {' ','#',' ',' ',' '},
            {' ','#',' ',' ',' '},
            {' ','#',' ',' ',' '}
},
eight[7][5] =  {{' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
nine[7][5] =  {{' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#','#'},
            {' ',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
zero[7][5] =  {{' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
A[7][5] = {{' ',' ','#',' ',' '},
    {' ','#',' ','#',' '},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'},
    {'#','#','#','#','#'},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'}
},
B[7][5] = {{'#','#','#','#',' '},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'},
    {'#','#','#','#',' '},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'},
    {'#','#','#','#',' '}
},
C[7][5] = {{' ','#','#','#',' '},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ','#'},
    {' ','#','#','#',' '}
},
D[7][5] = {{'#','#','#','#',' '},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'},
    {'#',' ',' ',' ','#'},
    {'#','#','#','#',' '}
},
E[7][5] = {{'#','#','#','#','#'},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' '},
    {'#','#','#','#',' '},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' '},
    {'#','#','#','#','#'}
},
F[7][5] =  {{'#','#','#','#','#'},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' '},
    {'#','#','#','#',' '},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' '},
    {'#',' ',' ',' ',' '}
},
G[7][5] =  {{' ','#','#','#',' '},
        {'#',' ',' ',' ','#'},
        {'#',' ',' ',' ',' '},
        {'#',' ',' ',' ',' '},
        {'#',' ',' ','#','#'},
        {'#',' ',' ',' ','#'},
        {' ','#','#','#',' '}
},
H[7][5] =  {{'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#','#','#','#','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'}
},
I[7][5] =  {{' ','#','#','#',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ','#','#','#',' '}
},
J[7][5] =  {{'#','#','#','#',' '},
            {' ',' ',' ',' ','#'},
            {' ',' ',' ',' ','#'},
            {' ',' ',' ',' ','#'},
            {'#','#',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#','#','#','#',' '}
},
K[7][5] =  {{'#',' ',' ',' ','#'},
            {'#',' ',' ','#',' '},
            {'#',' ','#',' ',' '},
            {'#','#',' ',' ',' '},
            {'#',' ','#',' ',' '},
            {'#',' ',' ','#',' '},
            {'#',' ',' ',' ','#'}
},
L[7][5] =  {{'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#','#','#','#','#'}
},
M[7][5] =  {{'#',' ',' ',' ','#'},
            {'#','#',' ','#','#'},
            {'#','#',' ','#','#'},
            {'#',' ','#',' ','#'},
            {'#',' ','#',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'}
},
N[7][5] =  {{'#',' ',' ',' ','#'},
            {'#','#',' ',' ','#'},
            {'#','#',' ',' ','#'},
            {'#',' ','#',' ','#'},
            {'#',' ','#','#','#'},
            {'#',' ',' ','#','#'},
            {'#',' ',' ',' ','#'}
},
O[7][5] =  {{' ','#','#','#','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
P[7][5] =  {{'#','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#','#','#','#',' '},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '}
},
Q[7][5] =  {{' ','#','#','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ','#',' ','#'},
            {'#',' ',' ','#','#'},
            {' ','#','#','#',' '}
},
R[7][5] =  {{'#','#','#','#','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#','#','#','#',' '},
            {'#',' ',' ','#',' '},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'}
},
S[7][5] =  {{'#','#','#','#','#'},
            {'#',' ',' ',' ',' '},
            {'#',' ',' ',' ',' '},
            {'#','#','#','#','#'},
            {' ',' ',' ',' ','#'},
            {' ',' ',' ',' ','#'},
            {'#','#','#','#','#'}
},
T[7][5] =  {{'#','#','#','#','#'},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '}
},
U[7][5] =  {{'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '}
},
V[7][5] =  {{'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#',' ','#',' '},
            {' ','#','#','#',' '},
            {' ',' ','#',' ',' '}
},
W[7][5] =  {{'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ','#',' ','#'},
            {'#',' ','#',' ','#'},
            {'#','#',' ','#','#'},
            {'#',' ',' ',' ','#'}
},
X[7][5] =  {{'#',' ',' ',' ','#'},
            {'#','#',' ','#','#'},
            {' ','#',' ','#',' '},
            {' ',' ','#',' ',' '},
            {' ','#','#','#',' '},
            {'#','#',' ','#','#'},
            {'#',' ',' ',' ','#'}
},
Y[7][5] =  {{'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {'#',' ',' ',' ','#'},
            {' ','#','#','#',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '},
            {' ',' ','#',' ',' '}
},
Z[7][5] =  {{'#','#','#','#','#'},
            {' ',' ',' ','#','#'},
            {' ',' ','#','#',' '},
            {' ',' ','#',' ',' '},
            {' ','#','#',' ',' '},
            {'#','#',' ',' ',' '},
            {'#','#','#','#','#'}
},
SP[7][5] =  {{' ',' ',' ',' ',' '},
            {' ',' ',' ',' ',' '},
            {' ',' ',' ',' ',' '},
            {' ',' ',' ',' ',' '},
            {' ',' ',' ',' ',' '},
            {' ',' ',' ',' ',' '},
            {' ',' ',' ',' ',' '}
}
;
// Declared functions
void clearScreen();                                 //For clearing the screen after putting input
void reset();                                       //
void userInput();
void createDisplayString(char ch[7][5], int y);
void display(int scroll, int steps, int speed);
void rightToLeft(int step);
void leftToRight(int step);
void upwords(int step);
void downwords(int step);
void delay(int speed);

int ancX = 0, ancY = 0;
int oriX = 0, oriY = 0;
int stepTime, scroll, speed;

string str;
char  displayArray[25][201], tempBox[20][201]; //char arrays of display


int main()
{
    // creating blank string
    for(int i=0; i<25; i++)
    {
        for(int j=0; j<200; j++)
        {
            tempBox[i][j] = ' ';
        }
        tempBox[i][200]='\0';
    }
    clearScreen();
    userInput();

    int tmp = oriY;
    oriY = oriX;
    oriX = 19-tmp;

    ancX = oriX;
    ancY = oriY;

    // read the string char one by one and instering to tmpBox
    for(int i=0; i<str.length(); i++)
    {
        // converting uppper to lower case
        int c = (int)str[i];
        if(c<97 && c>60)
            c = (int)(str[i]+32)%128;

        if( c == 'a'){
            createDisplayString(A, ancY);
            ancY+=6;
        }else if(c == 'b'){

            createDisplayString(B, ancY);
            ancY+=6;
        }else if(c == 'c'){
            createDisplayString(C, ancY);
            ancY+=6;
        }else if(c == 'd'){

            createDisplayString(D, ancY);
            ancY+=6;
        }else if(c == 'e'){
            createDisplayString(E, ancY);
            ancY+=6;
        }else if(c == 'f'){
            createDisplayString(F, ancY);
            ancY+=6;
        }else if(c == 'g'){
            createDisplayString(G, ancY);
            ancY+=6;
        }else if(c == 'h'){
            createDisplayString(H, ancY);
            ancY+=6;
        }else if(c == 'i'){
            createDisplayString(I, ancY);
            ancY+=6;
        }else if(c == 'j'){
            createDisplayString(J, ancY);
            ancY+=6;
        }else if(c == 'k'){
            createDisplayString(K, ancY);
            ancY+=6;
        }else if(c == 'l'){
            createDisplayString(L, ancY);
            ancY+=6;
        }else if(c == 'm'){
            createDisplayString(M, ancY);
            ancY+=6;
        }else if(c == 'n'){
            createDisplayString(N, ancY);
            ancY+=6;
        }else if(c == 'o'){
            createDisplayString(O, ancY);
            ancY+=6;
        }else if(c == 'p'){
            createDisplayString(P, ancY);
            ancY+=6;
        }else if(c == 'q'){
            createDisplayString(Q, ancY);
            ancY+=6;
        }else if(c == 'r'){
            createDisplayString(R, ancY);
            ancY+=6;
        }else if(c == 's'){
            createDisplayString(S, ancY);
            ancY+=6;
        }else if(c == 't'){
            createDisplayString(T, ancY);
            ancY+=6;
        }else if(c == 'u'){
            createDisplayString(U, ancY);
            ancY+=6;
        }else if(c == 'v'){
            createDisplayString(V, ancY);
            ancY+=6;
        }else if(c == 'w'){
            createDisplayString(W, ancY);
            ancY+=6;
        }else if(c == 'x'){
            createDisplayString(X, ancY);
            ancY+=6;
        }else if(c == 'y'){
            createDisplayString(Y, ancY);
            ancY+=6;
        }else if(c == 'z'){
            createDisplayString(Z, ancY);
            ancY+=6;
        }else if(c == ' '){
            createDisplayString(SP, ancY);
            ancY+=6;
        }else if(c == '1'){
            createDisplayString(one, ancY);
            ancY+=6;
        }else if(c == '2'){
            createDisplayString(two, ancY);
            ancY+=6;
        }else if(c == '3'){
            createDisplayString(three, ancY);
            ancY+=6;
        }else if(c == '4'){
            createDisplayString(four, ancY);
            ancY+=6;
        }else if(c == '5'){
            createDisplayString(five, ancY);
            ancY+=6;
        }else if(c == '6'){
            createDisplayString(six, ancY);
            ancY+=6;
        }else if(c == '7'){
            createDisplayString(seven, ancY);
            ancY+=6;
        }else if(c == '8'){
            createDisplayString(eight, ancY);
            ancY+=6;
        }else if(c == '9'){
            createDisplayString(nine, ancY);
            ancY+=6;
        }else if(c == '0'){
            createDisplayString(zero, ancY);
            ancY+=6;
        }

    }
    // creating blank space at end of the string in tempBox
    for(int i=0; i<20; i++){
        for(int j=ancY;j<ancY+20;j++){
            tempBox[i][j] = ' ';
        }
    }
    ancY+=19;
    if(ancY <40)
        ancY = 40;

    // after creating the temp string of display box calling display function to start moving
    display(scroll, stepTime, speed);

    return 0;
}

// user's input function with validation
void userInput()
{
    cout << "_______________________________________________________________________________________________________________________" << endl;
    cout << "                                         WELCOME TO THE DISPLAY BOARD                                                 "  << endl;
    cout << "_______________________________________________________________________________________________________________________" << endl << endl << endl;
    cout<<" Please Enter the text upto 25 characters(A-Z & 0-9) to display : " << endl; //// string to display
    while(getline(cin, str)){
        if(str.length()<=25)
            break;
        else
            cout<<"Text length should not be more than 25."<<endl<< "Enter:\t\t";
    }


    cout<<"\nAnchor coordinate"<<endl;  //anchor coordinates
    cout<<"\t\t\tX : \t";
    while(1){                          // validation loop of X
        cin>>oriX;
        if(oriX>=0 && oriX<40)
            break;
        else
            cout<<"\t\t\tX should be between 0-39"<<endl;
            cout<<"\t\t\tX : \t";
    }
    cout<<"\t\t\tY : \t";
    while(1){                         // validation loop of Y
        cin>>oriY;
        if(oriY>=0 && oriY<20)
            break;
        else
            cout<<"\t\t\tY should be between 0-19"<<endl;
            cout<<"\t\t\tY : \t";
    }

//display scroll option box to choose
for(int i=0;i<26;i++)
       cout<<"_";
        // scroll option
    cout<<"\n| Scroll:\t\t  |\n|\t1. Left to Right  |\n|\t2. Right to Left  |\n|\t3. Upwards  \t  |\n|\t4. Downwards  \t  |\n|\t5. No scroll \t  |"<<endl;

for(int i=0;i<26;i++)
       cout<<"_";
       //end of display scroll option box to choose

    cout<<endl<<"\t\t   Option : \t";

    while(1){                    // option validation loop
        cin>>scroll;
        if(scroll >= 1 && scroll <= 5)
            break;
        else{
            cout<<"\t\t\tInvalid user Input!! Please try again"<<endl<<endl<<"\t\t   Option : \t";
        }
    }

// step time to scroll string
    cout<<"\n\t\tStep Time : \t";


    if(scroll == 5){
        cout<< 0<< endl;
        stepTime = 1;
    }else
        cin>>stepTime;


// speed userInput
    cout<<"\n\t   Speed (1 - 10): \t";
    if(scroll == 5){
        cout<<0<<endl;
        speed = 300000000;
    }
    else{
    while(1){            // speed validation loop
        cin>>speed;

        if(speed>0 && speed<11){
            break;
        }else{
        cout<<"\t\t\tSpeed should between 1 and 10"<<endl<<"\t\t";

    cout<<"\n\t   Speed [1 - 10]: \t";
        }
    }
    }
}

// function to create temp string box of the text
void createDisplayString(char ch[7][5], int y)
{

    for(int i=0, a=0; i<7; i++,a++)
    {
        for(int j=0,b=y; j<5; j++,b++)
        {
            tempBox[a][b] = ch[i][j];
        }
    }
    for(int i=0; i<7 ; i++)
    {
        tempBox[i][y+5] = ' ';
    }
}

// display the box
void display(int scroll, int steps, int speed)
{
// loop to generate and clean screen (number of step times)
    for(int step =0 ; step<steps; step++)
    {

        clearScreen();
        reset();
        if(scroll == 1 || scroll == 5)
            leftToRight(step);
        else if(scroll == 2)
            rightToLeft(step);
        else if(scroll == 3)
            upwords(step);
        else if(scroll == 4)
            downwords(step);

        cout<<"\t\t";
        for(int i=0; i<=40; i++)
            cout<<"=";
        cout<<endl;
        for(int i=0; i<20; i++)
        {
            cout<<"\t\t|";
            for(int j=0; j<40; j++)
            {
                cout<<displayArray[i][j];
            }
            cout<<"|"<<endl;
        }
        cout<<"\t\t";
        for(int i=0; i<=40; i++)
            cout<<"=";
        cout<<endl;

        delay(speed);

    }
}
// reset the display array with blank string
void reset()
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<ancY-1; j++)
        {
            displayArray[i][j] = ' ';
        }
        displayArray[i][ancY-1]='\0';
    }
}
// function to move from right to left
void rightToLeft(int step)
{
    int pos;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<ancY; j++)
        {
                pos =  ancY-abs(j-ancY-step%ancY)%ancY ;
                if(pos == ancY)
                    pos = 0;
                displayArray[(oriX+i)%20][pos] = tempBox[i][j];
        }
    }
}
// function to move from left to right
void leftToRight(int step)
{
    int pos ;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<ancY; j++)
        {
            pos = (j+step)%ancY;
            displayArray[(oriX+i)%20][pos] = tempBox[i][j];
        }
    }
}
// function to move the text to upwards
void upwords(int step)
{
    int pos;
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<40; j++)
        {
                pos = 20 - (-1)*(i-step);
                displayArray[(pos+oriX)%20][j] = tempBox[i][j];
        }
    }
}
// function to move the text to downwards
void downwords(int step)
{

    for(int i=0; i<20; i++)
    {
        for(int j=0; j<40; j++)
        {
            displayArray[(int)(i+oriX+step)%20][j] = tempBox[i][j];
        }
    }
}
// to clear the screen
void clearScreen()
{
    system("cls");
}
// delay function
void delay(int speed){
    for(int i=0;i<300000000/speed; i++){

    }
}




