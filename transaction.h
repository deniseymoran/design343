// Transaction class declaration

#include "item.h"
#include "movie.h"
#include "comedy.h"
#include "drama.h"
#include "classic.h"
#include <iostream>

class Transaction
{
public:
	// Default constructor
	Transaction();
	// Member functions
	bool validID() const;	// returns true if ID exists on account list
	virtual bool process();

private:
	int accountID;
};