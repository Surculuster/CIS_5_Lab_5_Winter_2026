#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;

struct BusinessCard {
	string name; //Company name
	string address; //Company address
	string phone; //Company phone number
	string hours; //Company hours of operation
	string poc; //Point of contact
	int price; //Company price

	BusinessCard(const string &n, const string &a, const string &p, const string &h, const string &c, int pr)
		: name(n), address(a), phone(p), hours(h), poc(c), price(pr) {}
};

int main() {
	srand(time(nullptr)); // Seed the random number generator

	int rt1 = rand() % 501 + 100; 
	int rt2 = rand() % 501 + 100; 
	int rt3 = rand() % 501 + 100;
	int	rt4 = rand() % 501 + 100;
	int rt5 = rand() % 501 + 100;

	BusinessCard c1("NERV", "B-20, Tokyo-3", "555-1234", "9am-5pm", " gendo.ikari@nerv.go.jp", rt1);
	BusinessCard c2("The Benerit Group", "Lagrange 4", "555-5678", "10am-6pm", "delling.rembram@benerit.com", rt2);
	BusinessCard c3("Team Rocket", "1510 Polk St, Houston, TX 77002", "555-9012", "8am-4pm", "preparefortrouble@teammrocket.com", rt3);
	BusinessCard c4("Buy N Large", "321 Pine St", "555-3456", "11am-7pm", "corp@buynlarge.com", rt4);
	BusinessCard c5("The Scout Regiment", "Shiganshina, Wall Maria", "555-7890", "8am-10pm", "Armin Arlert", rt5);

	BusinessCard cards[5] = { c1, c2, c3, c4, c5 };

	BusinessCard bestPriced = c1;
	for (int i = 0; i < 5; ++i) {
		cout << "The price for " << cards[i].name << " is $" << cards[i].price << endl;
		if (cards[i].price < bestPriced.price) {
			bestPriced = cards[i];
		}
	}
	cout << endl << "The best priced company is " << bestPriced.name << " with a price of $" << bestPriced.price << endl;
	cout << "Located at " << bestPriced.address << " and open from " << bestPriced.hours << endl;
	cout << "POC: " << bestPriced.poc << endl << "Phone: " << bestPriced.phone << endl;
	return 0;
}