#pragma once

#include "deck.h"
#include <random>
#include <cstdlib>
#include "assert.h"
#include <iostream>

class TestUnit
{
public:
	TestUnit()
	{
		int random_number = rand() % 100;
		//m_deck = Deck<int>(random_number);
		//Deck<int> m_deck;
	}

	void run()
	{
		test_push_front();
	}

private:
	

	void test_push_front()
	{
		//m_deck.clear();
		//m_deck.push_front(1);
		//std::cout << m_deck;
	}
};