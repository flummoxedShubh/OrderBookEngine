#include "Headers/Order.h"

int main()
{
	std::cout << "Order Book Engine" << std::endl;

	Order order{};
	std::cout << order;
	Order order2(1, "new order", 100.0);
	std::cout << order2;

	return 0;
}