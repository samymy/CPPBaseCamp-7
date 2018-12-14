#include "employee.h"

Fink::Fink(): AbstractEmployee(), reports_to_("nope") {}

Fink::Fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo):
		AbstractEmployee(fn, ln, j),
		reports_to_(rpo)
{}

Fink::Fink(const AbstractEmployee& e, const std::string& rpo):
		AbstractEmployee(e),
		reports_to_(rpo)
{}

void Fink::showAll() const {

	AbstractEmployee::showAll();
	std::cout << "Reports to: " << reports_to_ << std::endl;
}

void Fink::setAll() {

	AbstractEmployee::setAll();
	std::cout << "Enter person, who the fink reports to: ";
	std::cin >> reports_to_;
}
