//asfa T
#include <iostream>
using namespace std;

int addition ( int num_one, int num_two);

int subtraction ( int num_one, int num_two);

int division ( int num_one, int num_two);

int multiplication ( int num_one, int num_two);


int main(){
	
	
int menu=0;
int num_one;
int num_two;

char input;


{cout << "Please Enter the first number  :" << endl;


cin >> num_one;}


{cout <<"Please Enter a second number  :";

cin>>num_two;}



{cout<<" Please rewiew the  menu options below ,then enter the corressponding number of your choice"<<endl;
}
  
  {cout <<"______________________________________________________________"<<endl;
}

{	cout<<"Enter 1: to perform 'Addition' " << endl;

	cout<<"Enter 2 : to perform 'Subtraction' "<<endl;
	
	cout<<"Enter 3: to perform 'Division' "<<endl;
	
	cout<<"Enter 4: to perform 'Multiplication' "<<endl;



cin >> menu;






  
  switch (menu){


      case 1: cout << "The addition of the two numbers results to  : "  << addition( num_one, num_two ) << endl ; break;

      case 2: cout << "subtraction of the two numbers results to  : "  << subtraction( num_one, num_two ) << endl ; break;

      case 3: cout << "The quotient is             : " << division( num_one, num_two ) << endl ; break;

      case 4: cout <<"The product of the numbers,is                : " << multiplication ( num_one, num_two ) << endl ; break;

      default: cout << "no entry,please enter a selection between 1 to 4" << endl;

    }

    cout << "Enter 'y' to continue, 'n' to exit" << endl;

    cin >> input;

  } while( input == 'y');

  return 0;

}


//addition or sum of two numbers
int addition ( int num_one, int num_two){

  return num_one + num_two;
}

//Subtraction

int subtraction ( int num_one, int num_two){

  if( num_one > num_two ) return num_two - num_one;

  else{

    return num_two - num_one;}
 }
  
  
  int division ( int num_one, int num_two){

    return num_one / num_two;  
}



int multiplication ( int num_one, int num_two){

    return num_one * num_two;
}

  











