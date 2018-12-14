#include "employee.h"

Manager::Manager(): AbstractEmployee(), in_charge_of_(0) {}

Manager::Manager(const std::string& fn, const std::string& ln, const std::string& j, int ico):
		AbstractEmployee(fn, ln, j),
		in_charge_of_(ico)
{}

Manager::Manager(const AbstractEmployee& e, int ico):
		AbstractEmployee(e),
		in_charge_of_(ico)
{}

void Manager::showAll() const {

	AbstractEmployee::showAll();
	std::cout << "in charge of: " << in_charge_of_ << std::endl;
}

void Manager::setAll() {

	AbstractEmployee::setAll();
	std::cout << "Enter number of employees: ";
	std::cin >> in_charge_of_;
}
