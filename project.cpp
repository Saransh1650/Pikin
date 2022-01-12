
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class covid	{ 
    public:
	string name, gender, address, fever, cough, tiredness, taste, breathing, pain, visit, contact, travel;
	int age;
	
	void feeddata();
    void feedsym();
	
};

void covid::feeddata()	{
	cout<<"\nEnter Your Name: ";      cin>>name;
	cout<<"Enter Your Gender: ";       cin>>gender;
	cout<<"Enter Your Address: ";   cin>>address;
	cout<<"Enter Your Age: ";            cin>>age;
	
}
void covid::feedsym()	{
	cout<<"\nHave you experienced Fever in the last 14 days ? ";      cin>>fever;
	cout<<"\nHave you experienced Cold and Cough in the last 14 days ? ";      cin>>cough;
	cout<<"\nHave you experienced Tiredness in the last 14 days ? ";      cin>>tiredness;
	cout<<"\nDo you feel loss of taste and smell ? ";      cin>>taste;
	cout<<"\nDo you feel difficulty in breathing  ? ";      cin>>breathing;
	cout<<"\nHave you experienced Chest pain in last 14 days ? ";      cin>>pain;
	cout<<"\nHave you visited any majorly covid infected place in last 14 days  ? ";      cin>>visit;
	cout<<"\nHave you been in contact with any covid possitive patient ? ";      cin>>contact;
    cout<<"\nHave you travelled out of station in last 14 days ?";      cin>>travel;
}


int main()	{

    covid c1;

	int count=0;
	cout<<"Enter the details of the person:";
    c1.feeddata();
    cout<<"Answer the following questions in either yes or no";
    c1.feedsym();
	
    if (c1.fever=="yes") count++;
    if (c1.cough=="yes") count++;
    if (c1.tiredness=="yes") count++;
    if (c1.taste=="yes") count++;
    if (c1.breathing=="yes") count++;
    if (c1.pain=="yes") count++;
    if (c1.visit=="yes") count++;
    if (c1.contact=="yes") count++;
    if (c1.travel=="yes") count++;
    
    if (count>=5)
        {cout<<"You should go for covid test!";}
    else
        {cout<<"You don't need to go for a covid test";}
}
