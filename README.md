//lapexer7offical
//Create a progtram to compile all laboratory activities.
//Written by Sambo Mom, Section 2
#include <iostream>
using namespace std;    //using standard namespace as our vocab
int  main ()


{
    string name; //declaring name as we cant use string inside case
    int  Menu,choice,B,X,again1,urchoice; // declare our variable 
       //Displaying our main Menu
do {
     again : cout<<"Main Menu"<<endl;
        cout <<"[1] Sum and Product and Average number"<<endl;
        cout <<"[2] On Arithmetic Operators "<<endl;
        cout <<"[3] Name and age"<<endl;
        cout <<"[4] Converting Celsuis to Kelvin and Fahrenheit"<<endl;
        cout <<"[5] On prime and composite numbers"<<endl;
        cout <<"[6] Exam Scores"<<endl;
        cout <<"[7] Switch"<<endl;
        cout <<"[8] Exit"<<endl;
        cout <<"Your choice "<<endl;
        cin>>choice; // user input for the menu
        cout<<endl;
       
        switch (toupper(choice)) //Using the switch statement when we need to compare the value of a variable against a set of other values.
        {
    case 1: // value 1 
                    int a,b,c, sum, product ,average ; // declaring our  variables 
                     //user input for the Numbers
                     cout<<"Enter the First Number";
                        cin>>a;
                    cout<<"Enter the Second Number";
                        cin>>b;
                    cout<<"Enter the Third Number";
                        cin>>c;
                        //the formula for sum average and product
                        sum = a+b+c;        
                        average = a+b+c/3;
                         product = a*b*c;
                    //displaying our output 
                    cout<<"The sum of number" <<a <<","<<b <<"and" <<c <<"is"<<sum <<endl;
                
                    cout<<"The average of number" <<a <<","<<b <<"and"  <<c <<"is"<<average <<endl;
                
                    cout<<"The product of number" <<a <<","<<b <<"and" <<c <<"is" <<product <<endl;
                    break;
            
    case 2:
    {
        do{
                again1:cout<<"Sub Menu"<<endl;
                cout<<"[1] Circumference and Area"<<endl;
                cout<< "[2] Temperature Conversion"<<endl;
                cout<< "[3] Go back to the main menu"<<endl;
                cout<<"Your Choice";
                cin>>urchoice;
                {
                switch(urchoice){
            case 1:
                {
                    int raduis,area,circumference; //decalring variable raduis,area, circumference
    cout<<"Enter raduis:"; //print Enter Raduis
    cin>>raduis; //user input for Raduis

    area = 3.14*raduis*raduis; //formula for area
    circumference = 2*3.14*raduis;  //formula for circumference

    cout<<"The area of the circle is: "<< area << endl; //print the value of area
    cout<<"The circumfernce of the circle is: "<< circumference << endl; //print the value of circumfernce
                break;
                }
                case 2:{
                     
                int temperature;                    //declare variable temperature
                    
                    cout<<"Enter Temperature"<<endl;        //Ask user to enter number of temperature
                    cin>>temperature;                       //Accept the number of temperature
                    if(temperature > 41 and temperature <=54)  
                    {
                        cout<<"Stay hydrated!" <<endl;  //display output if temperature >41 and <=54
                    }
                        else if (temperature > 32 and temperature <=40)
                        {
                            cout <<"Stay Cool and Safe!"; //display output if temperature >32 and <=40
                        }
                        else if (temperature > 26 and temperature <=31)
                        {
                            cout<<"Keep a sunblock handy!"<<endl;//display output if temperature >26 and <=31

                        }
                        else if (temperature >20 and temperature <=25)
                        {
                            cout<<"Always keep your cool!"<<endl;//display output if temperature >20 and <=25
                        }
                        else if (temperature <=20)
                        {
                            cout <<"Cool Breeze in the air!" <<endl;//display output if temperature <=20
                        }
                    else if (temperature >54)
                    {
                        cout<<"You out of range" <<endl;// display output
                    }
                break;}
       case 3:
       {
           goto again;
       break;
       }
        
          
                }

                }
                
    break;
                  }while(choice=1);
                goto again1;
    }
case 3:
                int age; //declaring our variable age
               // name already declared due to case not surpporting string
                                             
   

    cout<<"Enter age"<<endl;                                   //print Enter age
    cin>>age;                                        //user input for age  
    cout<<"Enter name"<<endl;                               //print Enter name     
    cin>>name;                                                //user input for name 
     if(age % 2==0)                                         //if age is even
     {                                             
     for (int counter=0; counter<=9;counter++)             
     cout<<name   << endl;                         //print name 10 times
     }                                
     else if (age %2!=0){                                        // if age is odd 
    for (int counter=0;counter<5;counter++)
    cout<<name << endl;                        //print name 5 times 
     
     }

            break;
case 4:
               { int celsius,kelvin,fahrenheit; //Deeclaring our avarible 
                    cout<<"Enter degrees in Celsius ";//Print enter the number of celsius

                    cin>>celsius; //user input for celsius
                    kelvin=celsius+273;//Formula for kelvin
                    fahrenheit = celsius*9/5+32;//Formula for fahrenheit 
                    cout<<"The value of "<<celsius << " degree of C in K is "<<kelvin <<endl;//display The value
                    cout<<"The value of "<<celsius << " degree of C in F is  "<<fahrenheit <<endl;//display the value
            break;
case 5:
                int  i,n;    // declaring our variable 
                    cout << "Enter a Number  ";  //print Enter a number 
                    cin >> n;                      // user input for  number 
                    cout<<"The Factor of "<< n <<" are : " <<endl;    //print our output 
                            // loop to check if n is prime or composite 
                        for (i = 1; i <= n; i++) {
                            if (n % i == 0) {
                                cout <<i<<" ";}
    
}
            break;
case 6:
              { int A = 0,B = 0,C = 0,D = 0,F = 0; //declaring our variables
                        
                        cout<<"Enter Exam Scores"; //print Enter exam score
                        int score=0,total_score=0;//user input for exam score
                        cin>>score;

                            
                            while (score > 0)//while loop to check if its a ppositive interger
                            {
                        total_score++;
                        {
                            //specifying that the score is at a specific value 
                            if(score>=90 && score<=100)
                                A++;
                            else if(score>=80 && score<=89)
                                B++;
                            else if(score>=70 && score<=79)
                                C++;
                            else if(score>=60 && score<=69)
                                D++;
                            else if(score>=0 && score<=59)
                                F++;
                            cin>>score;}
                        }
                                //printing our output
                                cout<<"Number of A: "<<A<<endl;
                                cout<<"Number of B: "<<B<<endl;
                                cout<<"Number of C: "<<C<<endl;
                                cout<<"Number of D: "<<D<<endl;
                                cout<<"Number of F: "<<F<<endl;
                                cout<<"Total number of scores:"<<total_score++<<endl;
                    break;}
case 7:
           
             
                 break;}
case 8:
            
           
            return 0;
    }
}while (choice<=7);
goto again;

 return 0;
}
