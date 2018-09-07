#ifndef STRUCTURES_STACK_H
#define STRUCTURES_STACK_H

#include "array_list.h"
#include <cstdint>

namespace structures {

template <typename T, typename Container>
class StackWrapper {
public:
	void push(const T& data) { return cont.push_back(data); }
	T pop() { return cont.pop_back(); }
	T& top() { return cont.back(); }
	const T& top() const { return cont.back(); }
	void clear() { return cont.clear(); }
	std::size_t size() const { return cont.size(); }

private:
	Container cont;
};

template <typename T>
class Stack : public StackWrapper<T, ArrayList<T>> {};

}  // namespace structures

#endif
