#include "employee.h"

HighFink::HighFink(): AbstractEmployee() {

	setReportsTo("nope");
	setInChargeOf(0);
}

HighFink::HighFink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo,
                   int ico): AbstractEmployee(fn, ln, j) {

	setReportsTo(rpo);
	setInChargeOf(ico);
}

HighFink::HighFink(const AbstractEmployee &e, const std::string& rpo, int ico): AbstractEmployee(e) {

	setReportsTo(rpo);
	setInChargeOf(ico);
}

HighFink::HighFink(const Fink& f, int ico): Fink(f) {

	setInChargeOf(ico);
}

HighFink::HighFink(const Manager& m, const std::string& rpo) {

	static_cast<Manager&>(*this) = m;
	setReportsTo(rpo);
}

void HighFink::showAll() const {

	Fink::showAll();
	std::cout << "in charge of: " << inChargeOf() << std::endl;
}

void HighFink::setAll() {

	Fink::setAll();
	std::cout << "Enter number of employees: ";

	int employees;
	std::cin >> employees;
	setInChargeOf(employees);
}
