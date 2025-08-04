#pragma once

#include <iostream>
#include <string>

class Order
{
private:
	int id;
	std::string name;
	double price;

public:
	Order();
	Order(int orderId, std::string orderName, double price);
	~Order();

	friend std::ostream& operator<<(std::ostream& out, const Order& order);
};