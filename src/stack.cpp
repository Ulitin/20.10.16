# include "stack.h"
#include <stdexcept>

int stack :: min() {
    if (element != 0) {
		return min_elem->data;
    } else if (element == 0) {
		throw std::logic_error("stack is empty");
    }
}



