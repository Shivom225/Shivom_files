#include<bits/stdc++.h>
using namespace std;
string p1;
string p2;
int inp;
int counter=0;
char arr[3][3]={{'1','2','3'},
               {'4','5','6'},
               {'7','8','9'}};

void display()
{
    cout<<" ----------- "<<"\n";
    cout<<"| "<<arr[0][0]<<" | "<<arr[0][1]<<" | "<<arr[0][2]<<" |"<<"\n";
    cout<<" ----------- "<<"\n";
    cout<<"| "<<arr[1][0]<<" | "<<arr[1][1]<<" | "<<arr[1][2]<<" |"<<"\n";
    cout<<" -----------"<<"\n";
    cout<<"| "<<arr[2][0]<<" | "<<arr[2][1]<<" | "<<arr[2][2]<<" |"<<"\n";
    cout<<" -----------"<<"\n";
}

void generat(int inp)
{
    switch(inp)
    {
        case 1:
        if(counter%2==0)
        { 
            if(arr[0][0]=='1')
            {
                arr[0][0]='O';
            }
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
            
        
        }
        else{
             if(arr[0][0]=='1'){arr[0][0]='X';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        } break;
        case 2:
        if(counter%2==0)
        { 
            if(arr[0][1]=='2'){arr[0][1]='O';}
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        
        }
        else{
            if(arr[0][1]=='2'){arr[0][1]='X';}
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        }break;
        case 3:
        if(counter%2==0)
        { 
            if(arr[0][2]=='3'){arr[0][2]='O';}
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        
        }
        else{
             if(arr[0][2]=='3'){arr[0][2]='X';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        }break;
        case 4:
        if(counter%2==0)
        { 
             if(arr[1][0]=='4'){arr[1][0]='O';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        
        }
        else{
             if(arr[1][0]=='4'){arr[1][0]='X';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
            
        }break;
        case 5:
        if(counter%2==0)
        { 
             if(arr[1][1]=='5'){arr[1][1]='O';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        }
        else{
             if(arr[1][1]=='5'){arr[1][1]='X';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
            
        }break;
        case 6:
        if(counter%2==0)
        {
             if(arr[1][2]=='6') {arr[1][2]='O';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        
        }
        else{
             if(arr[1][2]=='6') {arr[1][2]='X';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
           
        }break;
        case 7:
        if(counter%2==0)
        {
             if(arr[2][0]=='7') {arr[2][0]='O';}
             else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        
        }
        else{
            if(arr[2][0]=='7'){arr[2][0]='X';}
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
            
        }break;
        case 8:
        if(counter%2==0)
        { 
            if(arr[2][1]=='8'){arr[2][1]='O';}
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
        
        }
        else{
            if(arr[2][1]=='8'){arr[2][1]='X';}
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
            
        }break;
        case 9:
        if(counter%2==0)
        { 
          if(arr[2][2]=='9'){arr[2][2]='O';}  
          else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }      
        }
        else{
            if(arr[2][2]=='9'){arr[2][2]='X';}
            else
            {
                cout<<"Choice Different No"<<"\n";
                counter--;
            }
            
        }break;
        
    }
    
}

void cheack()
{
    if(arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}//R
    if(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10; }

    if(arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}
    if(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10;}

    if(arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}
    if(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10;}

    if(arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}//C
    if(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10;}

    if(arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}
    if(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10;}

    if(arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}
    if(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10;}

    if(arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}//D
    if(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10;}
    
    if(arr[0][2]=='O'&&arr[1][1]=='O'&&arr[2][0]=='O'){cout<<"Player 1"<<" "<<p1<<" "<<"Wins"<<"\n";counter=10;}
    if(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X'){cout<<"Player 2"<<" "<<p2<<" "<<"Wins"<<"\n";counter=10;}
    
    
}

int main()
{
    
    cout<<"Enter The 1 Player Name"<<"\n";
    cin>>p1;
    cout<<"Enter The 2 Player Name"<<"\n";
    cin>>p2;
    cout<<"---TIK-TAK-TOE---";
    cout<<"\n";
    display();
    while(counter<9)
    {
    if(counter%2==0)
    {
        cout<<p1<<"'s Chance (O)"<<"\n";
        cin>>inp;
        generat(inp);
        cheack();
        display();

    }
    else{
        cout<<p2<<"'s Chance(X)"<<"\n";
        cin>>inp;
        generat(inp);
        cheack();
        display();
    }
    counter++;
    }
    if(counter==9)
    {
        cout<<"TIE";
    }

}