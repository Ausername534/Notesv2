#ifndef information_H
#define information_H

#include <string>
using namespace std;



class information {
protected:
	int year;
	string title;


public:

	information(int y, string t);



	virtual void display();

	virtual ~information();



};








#endif
