// Borrow class declaration

#include "transaction.h"

class Borrow : public Transaction
{
public:
	// Default constructor
	Borrow();
	// Member functions
	bool process();	// borrow transaction method
		// check if item is in inventory
		// decrement item stock
		// log transaction

private:
	Item product;
};