#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
	this->payMethod = "-";
	shoppingCart = map<int,int>();
}

ShoppingCart::ShoppingCart(const string &payMethod)
{
	this->payMethod = payMethod;
	shoppingCart = map<int,int>();
}

string &ShoppingCart::getPayMethod()
{
	return payMethod;
}

void ShoppingCart::setPayMethod(const string &payMethod)
{
	this->payMethod = payMethod;
}

void ShoppingCart::addProduct(int id, int quantity)
{
	shoppingCart[id] = quantity;
}

void ShoppingCart::raiseQuantity(int id, int quantity)
{
	shoppingCart[id] += quantity;
}

void ShoppingCart::lowerQuantity(int id, int quantity)
{
	shoppingCart[id] -= quantity;
}

int ShoppingCart::getQuantity(int productID)
{	
	map <int, int>:: iterator it;
	it = shoppingCart.find(productID);
	if(it != shoppingCart.end()){
		return (*it).second;
	}	
	return -1;
}

void ShoppingCart::deleteProduct(int productID)
{
	shoppingCart.erase(productID);
}

map<int, int> &ShoppingCart::getShoppingCart()
{
	return shoppingCart;
}

void ShoppingCart::displayShoppingCart()
{
	throw("undefined");
}

json ShoppingCart::toJSON()
{
  return json(*this);
}
