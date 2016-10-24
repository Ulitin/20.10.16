#include"polinbrom.h"

nambers* copy (nambers* first){
	nambers* copir, *box;
	copir = new nambers;
	copir -> date = first -> date; 
	while (true)
	{
		box = new nambers;
		box -> date = first -> date;
		box -> next = copir;
		if ( first -> next != 0){
			copir = box;
			first = first -> next;
		}
		else{
			copir = box;
			return copir;
		}
	}
}


int polindrom_or_not(nambers* first){
	if(first==0)
		return true;
	nambers* end;
	end=copy(first);
	while (first!=0)
	{
		if(first->date==end->date)
		{
			first=first->next;
			end=end->next;
		}
		else
		{
			return false;
		}
	}
	return true;
}


