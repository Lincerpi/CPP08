#include "mutantstack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

    std::cout << "\nLIST" << std::endl;


    std::list<int>    list;

    list.push_back(15);
    list.push_back(100);

    std::cout << "TOP = " << list.back() << std::endl;

    list.pop_back();

    std::cout << "Size = " << list.size() << std::endl;

    list.push_back(8);
    list.push_back(16);
    list.push_back(258);

    //[...]
    list.push_back(1024);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

    ++itlist;
    --itlist;

    while(itlist != itliste){
        std::cout << *itlist << std::endl;
        ++itlist;
    }
    
       std::cout << "\nSTACK" << std::endl;


    MutantStack<int>    s3;

    s3.push(15);
    s3.push(100);

    std::cout << "TOP = " << s3.top() << std::endl;

    s3.pop();

    std::cout << "Size = " << s3.size() << std::endl;

    s3.push(8);
    s3.push(16);
    s3.push(258);

    //[...]
    s3.push(1024);

    MutantStack<int>::iterator itstack = s3.begin();
    MutantStack<int>::iterator itstacke = s3.end();

    while(itstack != itstacke){
        std::cout << *itstack << std::endl;
        ++itstack;
    }
    
	return 0;
}