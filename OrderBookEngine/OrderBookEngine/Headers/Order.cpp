#include "Order.h"

Order::Order() : id(0), name(""), type(OrderType::Buy), price(0.0)
{
	std::cout << "Order created with default values.\n";
}

Order::Order(int id, std::string name, OrderType type, double price) : id(id), name(name), type(type), price(price)
{
	std::cout << "Order created with constructor values.\n";
}

Order::~Order()
{
	std::cout << "Order destroyed.\n";
}

std::ostream& operator<<(std::ostream& out, const Order& order)
{
	out << "Order {\nId: " << order.id << "\nName: " << order.name << "\nType: " << toString(order.type) << "\nPrice: " << order.price << "\n}\n";
	return out;
}