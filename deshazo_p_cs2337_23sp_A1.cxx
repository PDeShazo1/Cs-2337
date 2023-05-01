//Preston Dehsazo
//1122965

#include <iostream>
#include <iomanip>

using namespace std;


// currency rate per 1 single unit of money medium
double JPY_VAL = 130.43;
double MXN_VAL = 18.77;
double INR_VAL = 81.59;
double GBP_VAL = 0.81;

void converter(int medium)
{    

    float usd,amtDue,receivingAmt;

    fflush(stdin);

    cout<<endl<<"Enter USD amount: "; // INPUT USD AMOUNT
    cin>>usd;

    if(usd<=100) // calculate the trasactional amount to be charged
    {
        amtDue = 4.99;
    }
    else if(usd>=100&&usd<=1000)
    {
        amtDue = 8.99;
    }
    else 
    {    
        amtDue = 17.99;
    }
    
    cout<<endl<< fixed << setprecision(2) <<"Amount due: "<<(amtDue+usd)<<" USD"<<endl;  // print amount 

    if(medium==1) // set mode to convert for option 2
    {   
        receivingAmt = JPY_VAL * usd ; 
        cout<<endl<< fixed << setprecision(2) <<"Amount receiving: "<<receivingAmt<<" JPY"<<endl; 
    } 
    else if(medium==2) // set mode to convert for option 2
    {
        receivingAmt = MXN_VAL * usd ; 
        cout<<endl<< fixed << setprecision(2)<<"Amount receiving: "<<receivingAmt<<" MXN"<<endl; 
    }
    else if(medium==3) // set mode to convert for option 3
    {
        receivingAmt = INR_VAL * usd ; 
        cout<<endl<< fixed << setprecision(2)<<"Amount receiving: "<<receivingAmt<<" INR"<<endl; 
    }
    else if(medium==4) // set mode to convert for option 4
    {
        receivingAmt = GBP_VAL * usd ;  
        cout<<endl<< fixed << setprecision(2)<<"Amount receiving: "<<receivingAmt<<" GBP"<<endl; 
    }

}

void head_options()
{
    int option=5;

   while(option!=0){ 
    
    cout<<endl<<"Select a currency to convert from US Dollers (USD):\n";
    cout<<"[1] Japanese Yen (JPY)\n"; // menu driven entry
    cout<<"[2] Mexican Peso (MXN)\n";
    cout<<"[3] Indian Rupee (INR)\n";
    cout<<"[4] British Pound Sterling (GBP)\n";
    cout<<"[0] Quit\n";

    cout<<"Select an option (0 to 4):\n";
    cin>>option;

      if(option==1)
      {
            converter(1);
      }
      else if(option==2)
      {
            converter(2);
      }
      else if(option==3)
      {
            converter(3);
      }
      else if(option==4)
      {
            converter(4);
      }
       else if(option==0) // exit
      {
        cout << "\n Process Terminated" << endl;
      }
      else
      {
          cout<<endl<<"Invalid Menu option please try again"<<endl;
      }
   }
}

int main()
{
    head_options();

    return 0;
}