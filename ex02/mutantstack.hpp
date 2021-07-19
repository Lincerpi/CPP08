#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <algorithm>
#include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{

	public:
		MutantStack() {};
		virtual ~MutantStack() {};
		MutantStack(const MutantStack& copy) : std::stack<T>(copy){};
		MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        };
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return (std::stack<T>::c.begin()); }
		iterator end() { return (std::stack<T>::c.end()); }
};

#include "mutantstack.cpp"

#endif