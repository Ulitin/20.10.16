# include "stack.h"

int stack :: min() {
    if (element != 0) {
        CNode* min;
		min = element;
        element = element->next;
        while (element != 0) {
            if (min->data > element->data) {
                min = element;
            }
            element = element->next;
        }
        return min->data;
    } else if (element == 0) {
		throw 1;
    }
}



