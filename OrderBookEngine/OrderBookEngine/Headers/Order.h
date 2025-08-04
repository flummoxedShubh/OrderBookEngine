#pragma once

#include <iostream>
#include <string>

enum class OrderType
{
	Buy,
	Sell
};

class Order
{
private:
	int id;
	std::string name;
	OrderType type;
	double price;

public:
	Order();
	Order(int orderId, std::string orderName, OrderType type, double price);
	~Order();

	friend std::ostream& operator<<(std::ostream& out, const Order& order);
};

inline std::string toString(OrderType type) {
	switch (type) 
	{
	case OrderType::Buy:  
		return "Buy";
	case OrderType::Sell: 
		return "Sell";
	default:              
		return "N/A";
	}
}