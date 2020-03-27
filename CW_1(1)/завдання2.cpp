#include<iostream>
using namespace std;
int main(){
	cout<<"N month:"<<endl;

	int month;
	cin>>month;
	
	switch(month)
	{
		case 1:
		cout<<"1-january"<<endl;
		break;
		
		case 2:
		cout<<"2-February"<<endl;
		break;
		
		case 3:
		cout<<"3-March"<<endl;
		break;
		
		case 4:
		cout<<"4-April"<<endl;
		break;
		
		case 5:
		cout<<"5-May"<<endl;
		break;
		
		case 6:
		cout<<"6-June"<<endl;
		break;
		
		case 7:
		cout<<"7-July"<<endl;
		break;
		
		case 8:
		cout<<"8-August"<<endl;
		break;
		
		case 9:
		cout<<"9-September"<<endl;
		break;
		
		case 10:
		cout<<"10-October"<<endl;
		break;
		
		case 11:
		cout<<"11-November"<<endl;
		break;
		
		case 12:
		cout<<"12-December"<<endl;
		
		defaut:
		cout<<"error"<<endl;
	}

return 0;
}
