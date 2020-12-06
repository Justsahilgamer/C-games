/* Welcome,this is my first game on C++.The aim to make this is nothing,its just a project that i can show 
in future 
Feel free to give ideas and if you want any changes you can contact me- Instagram username :- Justsahilgamer 
made and coded by Sahil*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char x,y,i,j,k;
    int a,b,c,d,e,f,g,h,z;
    
    
    void mainmenu();
    
        cout<<"\n Welcome \n";
        cout<<"\n Main menu \n";
        cout<<"\n1.The number magic";
        cout<<"\n2.Challenge your brain";
        cout<<"\n3.Exit";
        cout<<"\n\n~Coded by Sahil~";
        cout<<"\n~Ideas by Sahil and Sunny~";
        cout<<"\n~Tester - Sunny and Aditya";
        cout<<"\n#more games will come in future#";
        cout<<"\nChoose option = ";
        cin>>g;
        if(g==1)
    {
    
    
    cout<<"\nWelcome to the magic number game \n(This is not any magic,just a simple maths trick)\n";
    cout<<"pick any number between 1-10 = ";
    cin>>a;
    cout<<"press 'Y' if you did = ";
    cin>>x;
    if(x=='Y'||x=='y')
    
    {
    
    void game();
    {
        if(a<10&&a>0)
    {
       cout<<"\nMultiply that number by 2 ";
       c=a*2;
       cout<<"\nPress 'Y' if you did it = ";
       cin>>x;
       if(x=='Y'||x=='y')
    {
       cout<<"\nNow add 10 to that number";
       d=c+10;
       cout<<"\nPress 'Y' if you did it = ";
       cin>>x;
       if(x=='Y'||x=='y')
    {  cout<<"\nNow divide the number by 2";
       e=d/2;
       cout<<"\nPress 'Y' if you did it = ";
       cin>>x;
       if(x=='Y'||x=='y')
    {   cout<<"\nNow subtract the number with the orignal number (the number you took at beginning)";
       f=e-a;
       cout<<"\nPress 'Y' if you did it = ";
       cin>>x;
       if(x=='Y'||x=='y')
    {   cout<<"\nYour number should be = "<<f<<"\n";
        cout<<"\nType 'p' to get a ProTip !!! \ntype 'e' to exit";
        cout<<"\n";
        cin>>y;
        if(y=='p'||y=='P')
        {
            cout<<"ProTip - Never give up !"<<"\t";
        }
        else
        {
            if(y=='e'||y=='e')
            {
                cout<<"BYE";
                return 0;
            }        
        }
        
    }
    }
    }
    }
    }
    }
    }
     else
     {
         cout<<"Please do the instruction";
         return 0;
     }
    }
    else
    {
        if(g==2)
        {
           void game2();
           cout<<"\nSo you choosen torture for your brain";
           cout<<"\nOk....";
           cout<<"\nHeres the question";
           cout<<"\nIF 4+1=5 \n6+3=21 \nthen what is 13+4 =  ? \n(press h for hint)";
           cout<<"\nAnswer here = ";
           cin>>i;
           if(i==56)
           {
               cout<<"Correct \nYou are genius !!!";
           }
           else
           {
               
               if(i=='h')
               {
                   cout<<"  Hint - AxB+B =  "<<"\n";
                   cout<<" Answer - ";
                   cin>>z;

                   if(z==56)
                   {
                       cout<<"\nWell done,But you solved it by hint ";
                   }
                   else
                   {
                       cout<<"\n Still wrong answer";
                       cout<<"\n The answer is 56";
                       cout<<"\nyou want to know how??"<<"\n";
                       cin>>j;
                       if(j=='y'||j=='Y')
                       {
                           cout<<"SOLUTION -"<<"\n";
                           cout<<" 4x1+1=5 "<<"\n";
                           cout<<" 6x3+3=21"<<"\n";
                           cout<<" So 13x4+4=56";
                           return 0;
                       }

                   }
                    
               }    
               else
               {
                   if(i!=56)
                   {
                       cout<<"Wrong ans";
                       cout<<"You want to know solution ??? (press 'y' if you want to)"<<"\n";
                       cin>>k;
                       if(k=='y'||k=='Y')
                       {
                           cout<<"SOLUTION -"<<"\n";
                           cout<<" 4x1+1=5 "<<"\n";
                           cout<<" 6x3+3=21"<<"\n";
                           cout<<" So 13x4+4=56";
                           return 0;
                       }


                   }
               }
               
           }
           
           
        }
    }
    
    
        
}     