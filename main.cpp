#include <iostream>
#include "deck.h"
#include "deck.cpp"
#include "item.h"
#include "test.cpp"

int main(int argc, char const *argv[])
{
	TestUnit tests;
	tests.run();

	return 0;
}