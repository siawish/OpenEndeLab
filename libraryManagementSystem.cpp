#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int availableBooks=10;
	string choice;
    int borrowedBooks=0,daysLate=0;
    float finePerDay=1.0,totalFine=0.0,fine;
    
    while(true)
	{
    	
        cout<<"Library System Menu:"<<endl;
        cout<<"1. Borrow a book"<<endl;
        cout<<"2. Return a book"<<endl;
        cout<<"3. Quit"<<endl;
        
        cout<<"Enter your choice: ";
        cin >> choice;

        if(choice=="1")
		{ 
            if(availableBooks>0)
			{
            	
                availableBooks--;
                borrowedBooks++;
                
                cout<<"Book borrowed successfully."<<endl;
            } 
			else 
			{
                cout<<"No books available for borrowing."<<endl;
            }
        } 
		else if(choice=="2")
		{ 
            if (borrowedBooks>0)
			{
                borrowedBooks--;
                cout<<"Book returned successfully."<<endl;

                cout<<"Enter the number of days late: ";
                cin>>daysLate;

                if(daysLate>0)
				{
                    fine=finePerDay * daysLate;
                    totalFine+=fine;
                    cout<<fixed<<setprecision(2);
                    cout<<"Fine for late return: $"<<fine<<endl;
                }
            } 
			else
			 {
                cout<<"No books to return."<<endl;
            }
        } 
		else if(choice=="3")
		{ 
            cout<<"Thank you for using the library system."<<endl;
            break;
        } 
		else
		{
            cout<<"Invalid choice. Please enter a valid option (1-3)."<<endl;
        }
    }

   
    cout<<"Total fine collected: $"<<totalFine<<endl;

    return 0;
}
