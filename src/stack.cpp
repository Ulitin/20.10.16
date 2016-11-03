# include "stack.h"

int stack :: min() {
    if (element != 0) {
        int min = element->data;
        element = element->next;
        while (element != 0) {
            if (min > element->data) {
                min = element -> data;
            }
            element = element->next;
        }
        return min;
    } else if (element == 0) {
        throw 1;
    }
}



