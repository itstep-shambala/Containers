#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <vector>
#include "Container.h"
#include "IContainer.h"
#include "IEnumerable.h"

using namespace std;

template<class T>
class Queue : public Container<T>, public IContainer<T>, public IEnumerable<T> {
public:
	void Push(T value) override {
		container.push_back(value);
	}
	T Pop() override {
		auto element = container.begin();
		auto temp = *(element);
		container.erase(element);
		return temp;
	}
	T Fetch() {
		auto element = container.begin();
		auto temp = *(element);
		return temp;
	}

	void ForEach(void(*Func)(T)) override
	{
		for (auto element : container) {
			Func(element);
		}
	}
	void ForEach(T(*Func)(T)) override
	{
		for (auto i = container.begin(); i != container.end(); ++i) {
			*i = Func(*i);
		}
	}
};


#endif //STACK_QUEUE_H
