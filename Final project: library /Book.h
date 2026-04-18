#pragma once
#ifndef Book_H
#define Book_H


#include "information.h"



class Book : public information {
private:
	string author;

public:
	Book(int y, string t, string a);

	void display() override;


};





#endif
