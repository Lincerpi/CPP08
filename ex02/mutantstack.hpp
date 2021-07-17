#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		virtual ~MutantStack();
		MutantStack(const MutantStack& copy);
		MutantStack& operator=(const MutantStack& op);
		typedef T* iterator;
		MutantStack<T>::iterator begin();
		MutantStack<T>::iterator end();
};

#endif