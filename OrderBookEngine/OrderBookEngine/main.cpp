#include "Headers/Order.h"

int main()
{
	std::cout << "Order Book Engine\n";

	Order order{};
	std::cout << order;
	Order order2(1, "new order", OrderType::Buy, 100.0);
	std::cout << order2;

	return 0;
}