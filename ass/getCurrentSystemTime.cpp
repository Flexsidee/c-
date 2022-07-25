//program to get current date and time on the current system
#include <ctime>
#include <iostream>
using namespace std;

int main() {
/*
	//This method also works but its  longer
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    cout << "Date: " << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' <<  (now->tm_mday) << "\n";
    cout << "Time: " << (now->tm_hour)<< ":" << (now->tm_min );
*/
   time_t now = time(0);
   char* date_time = ctime(&now); // convert now to string form
   cout << "The current date and time is: " << date_time << endl;
   
   return 0;
}
