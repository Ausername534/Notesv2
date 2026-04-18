#ifndef Movie_H
#define Movie_H

#include "information.h"


class Movie : public information {
private:
	string director;



public:
	Movie(int y, string t, string d);

	void display() override;
};


#endif
