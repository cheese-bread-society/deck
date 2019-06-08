#pragma once

#include "deck.h"
#include "deck.cpp"
#include <random>
#include <cstdlib>
#include "assert.h"
#include <iostream>

class TestUnit
{
public:
	void run()
	{
		test_push_front();
	}

private:
	Deck<int> m_deck;

	void test_push_front()
	{
		std::cout << "Running Push Front" << std::endl;

		m_deck.clear();
		m_deck.push_front(1);
		// std::cout << m_deck;
	}
};