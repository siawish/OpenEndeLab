#include <iostream>
using namespace std;

int main() {
    int num, choice, starting_range, ending_range, check;
    string conti;
    
    do
	{
        cout<<"Do you want to find the prime numbers in a given range or check if a specific number is prime or composite."<<endl;
        cout<<"1. Range of numbers\n2. Specific number"<<endl;
        cin>>choice;

        if(choice==1)
		{
            cout<<"Enter the starting of range: ";
            cin>>starting_range;

            cout<<"Enter the ending of range: ";
            cin>>ending_range;

            for(starting_range; starting_range<=ending_range; starting_range) {
                check=0;

                for (int j=1; j<=starting_range; j++) {
                    if(starting_range%j==0) 
					{
                        check++;
                    }
                }
                if(check==2)
				{
                    cout<<starting_range<<" ";
                }
            }
        } else if(choice == 2)
		{
            cout<<"Enter a number to check if it's prime: ";
            cin>>num;
            check=0;

            for(int j = 1; j<=num; j++)
			{
                if(num%j==0) 
				{
                  check++;
                }
            }

            if(check==2)
			{
                cout<<num<<" is a prime number."<<endl;
            } 
			else
			{
                cout <<num<<" is a composite number."<<endl;
            }
        } 
		else
		{
            cout<<"Invalid choice. Please choose 1 or 2."<<endl;
        }

        cout<<"\nDo you want to continue (y/n)? ";
        cin>>conti;
    } while(conti=="y" || conti=="Y");

    return 0;
}

