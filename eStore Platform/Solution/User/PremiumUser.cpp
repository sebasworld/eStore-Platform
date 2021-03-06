#include "PremiumUser.h"

using namespace std;

PremiumUser::PremiumUser()
{	
	discounts = map<int,int>();
	premiumSubscriptionCost = 0;
}

PremiumUser::PremiumUser(const string &judetf, const string &localitatef, const string &stradaf, int nr_stradaf,
const string &blocf, int apartamentf,  const string &judetl, const string &localitatel, const string &stradal,
int nr_stradal, const string &blocl, int apartamentl,int id, const string &nume, const string &prenume,
const string &email, int premiumSubscriptionCost, const map<int, int> &discounts):User(judetf, localitatef, stradaf,
nr_stradaf, blocf, apartamentf, judetl, localitatel, stradal, nr_stradal, blocl, apartamentl, id,nume,prenume,email)
{
	this->discounts = discounts;
	this->premiumSubscriptionCost = premiumSubscriptionCost;
}

PremiumUser::PremiumUser(const PremiumUser &up) : User(up)
{
	discounts = up.discounts;
	premiumSubscriptionCost = up.premiumSubscriptionCost;
}

const PremiumUser &PremiumUser::operator=(const PremiumUser &up)
{
	(User&)(*this) = up;
	discounts = up.discounts;
	premiumSubscriptionCost = up.premiumSubscriptionCost;	
	return *this;
}

void PremiumUser::displayUser()
{
	cout << "User Premium" << endl;
	cout << "Nume User: " << this->lastName << endl;
	cout << "Prenume User: " << this->firstName << endl;
	cout << "ID User: " << this->UserID << endl;
	cout << "Email: " << this->email << endl;
	cout << "Adresa Plata: " << this->billingData << endl;
	cout << "Adresa Livrare: " << this->deliveryData << endl;
	cout << "Subscription Cost: " << this->premiumSubscriptionCost << endl;
	//cout << "Discounts: " << this->discounts << endl;
}

string PremiumUser::getUserType()
{
	string s1 = "User premium";
	return s1;
}

float PremiumUser::getTransportCost()
{
	return 0.0;
}

map<int, int> &PremiumUser::getDiscounts()
{
	return discounts;
}

void PremiumUser::setDiscounts(map<int, int> red)
{
	discounts = red;
}

void PremiumUser::setPremiumSubscriptionCost(int cap)
{
	premiumSubscriptionCost = cap;
}

int PremiumUser::getPremiumSubscriptionCost()
{
	return premiumSubscriptionCost;
}

json PremiumUser::toJSON()
{
	return json(*this);
}
