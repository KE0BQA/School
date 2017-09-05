#include<iostream>
#include<cmath>
  
using namespace std;
   
int main()
    
{
	int i=0, j=0, NUM=3;

	for(i = -NUM; i <= NUM; i++){
		for(j = -NUM; j <= NUM; j++){
			if( (abs(i) + abs(j)) <= NUM) // Change this condition
				{cout<<"#";}
			else { cout<<" ";}
		}	
	cout<<endl;
	}
	return 0;
}
