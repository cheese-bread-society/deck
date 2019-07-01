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
		test_push_front_count();
		test_push_back();
		test_push_back_count();
		test_pop_front_empty_deck();
		test_pop_back_empty_deck();
		test_pop_back();
		test_pop_front();
		test_front();
		test_back();
	}

private:
	Deck<int> m_deck;

	void Setup()
	{
		m_deck = Deck<int>();
	}

	void test_push_front() 
	{
		std::cout << "Running Push Front ";
		
		// Arrange
		Setup();
		int value_1 = 1;
		int value_2 = 2;
		int value_3 = 3;

		// Act
		m_deck.push_front(value_1);
		m_deck.push_front(value_2);
		m_deck.push_front(value_3);

		assert (m_deck.front() == value_3);
		assert (m_deck.back() == value_1);

		std::cout << "OK" << std::endl;
	}

	void test_push_front_count()
	{
		std::cout << "Running Push Front Count ";
		// Arrange
		Setup();

		int value = 1;

		// Act
		m_deck.push_front(value);
		m_deck.push_front(value);
		m_deck.push_front(value);

		// Assert
		assert(m_deck.count() == 3);

		std::cout << "OK" << std::endl;
	}

	void test_push_back()
	{
		std::cout << "Running Push Back ";
		
		// Arrange
		Setup();
		int value_1 = 1;
		int value_2 = 2;
		int value_3 = 3;

		// Act
		m_deck.push_back(value_1);
		m_deck.push_back(value_2);
		m_deck.push_back(value_3);

		assert (m_deck.front() == value_1);
		assert (m_deck.back() == value_3);

		std::cout << "OK" << std::endl;
	}

	void test_push_back_count()
	{
		std::cout << "Running Push Back Count ";
		// Arrange
		Setup();

		int value = 1;

		// Act
		m_deck.push_back(value);
		m_deck.push_back(value);
		m_deck.push_back(value);

		// Assert
		assert(m_deck.count() == 3);

		std::cout << "OK" << std::endl;
	}

	void test_pop_front_empty_deck()
	{
		std::cout << "Running Pop Front ";
		// Arrange
		Setup();

		try
		{
			m_deck.pop_front();
			assert(false);
		}
		catch(const std::exception& e)
		{
			// std::cerr << e.what() << '\n';
			assert(true);
		}

		std::cout << "OK" << std::endl;
	}

	void test_pop_back_empty_deck()
	{
		std::cout << "Running Pop Back Empty ";
		// Arrange
		Setup();

		try
		{
			m_deck.pop_back();
			assert(false);
		}
		catch(const std::exception& e)
		{
			// std::cerr << e.what() << '\n';
			assert(true);
		}

		std::cout << "OK" << std::endl;
	}

	void test_pop_back()
	{
		std::cout << "Running Pop Back ";
		// Arrange
		Setup();

		m_deck.push_front(1);
		m_deck.push_front(2);
		m_deck.push_front(3);

		assert(m_deck.count() == 3);

		int v = m_deck.pop_back();
		
		assert(v == 1);
		assert(m_deck.count() == 2);

		std::cout << "OK" << std::endl;
	}

	void test_pop_front()
	{
		std::cout << "Running Pop Front ";
		// Arrange
		Setup();

		m_deck.push_front(1);
		m_deck.push_front(2);
		m_deck.push_front(3);

		assert(m_deck.count() == 3);

		int v = m_deck.pop_front();

		assert(v == 3);
		assert(m_deck.count() == 2);

		std::cout << "OK" << std::endl;
	}

	void test_front()
	{
		std::cout << "Running Front ";
		// Arrange
		Setup();

		m_deck.push_front(1);
		m_deck.push_front(2);
		m_deck.push_front(3);

		assert(m_deck.count() == 3);

		int v = m_deck.front();

		assert(m_deck.count() == 3);
		assert(v == 3);

		std::cout << "OK" << std::endl;
	}

	void test_back()
	{
		std::cout << "Running Back ";
		// Arrange
		Setup();

		m_deck.push_front(1);
		m_deck.push_front(2);
		m_deck.push_front(3);

		assert(m_deck.count() == 3);

		int v = m_deck.back();

		assert(m_deck.count() == 3);
		assert(v == 1);

		std::cout << "OK" << std::endl;
	}
};