#include "deck.h"

template <typename T>
Deck<T>::Deck()
{
}

template <typename T>
Deck<T>::Deck(int length)
{
}

template <typename T>
void Deck<T>::push_back(T value)
{
}

template <typename T>
void Deck<T>::push_front(T value)
{
}

template <typename T>
void Deck<T>::pop_back(T value)
{
}

template <typename T>
void Deck<T>::pop_front(T value)
{
}

template <typename T>
T Deck<T>::back()
{
}

template <typename T>
T Deck<T>::front()
{
}

template <typename T>
void Deck<T>::clear()
{
}

template <typename T>
std::ostream& operator << (std::ostream &out, const Deck<T> &d) {
	out << "Deck" << std::endl;
	return out;
}

template class Deck<int>;