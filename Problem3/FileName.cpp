#include<iostream>

using namespace std;

int main()
{
	//Problem 3:In  a  laboratory,  the  time  of  an  experiment  is  measured  in  seconds.  
	//Write  an C++ Programto  enter  the  time  in  seconds,  convert  and  print  out  it  as  a  number  of  hours,  minutes  and seconds. Use appropriate format for the output.

	int time;

	cout << "Enter the time in seconds: ";
	cin >> time;

	int hours = time / 3600;
	int minutes = (time % 3600) / 60;
	int seconds = (time % 3600) % 60;

	cout << hours << " hours " << minutes << " minutes " << seconds << " seconds";

	return 0;
}