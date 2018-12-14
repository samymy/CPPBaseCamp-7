#include "employee.h"

AbstractEmployee::AbstractEmployee():
		first_name_("nope"),
		last_name_("nope"),
		job_("nope")
{}

AbstractEmployee::AbstractEmployee(const std::string& fn, const std::string& ln, const std::string& j):
		first_name_(fn),
		last_name_(ln),
		job_(j)
{}

void AbstractEmployee::showAll() const {

	std::cout << "First name: " << first_name_ << std::endl;
	std::cout << "Last name: " << last_name_ << std::endl;
	std::cout << "Job: " << job_ << std::endl;
}

void AbstractEmployee::setAll() {

	std::cout << "Enter first name: ";
	std::cin >> first_name_;
	std::cout << "Enter last name: ";
	std::cin >> last_name_;
	std::cout << "Enter job: ";
	std::cin >> job_;
}

AbstractEmployee::~AbstractEmployee() {}

std::ostream& operator<<(std::ostream& os, const AbstractEmployee& e) {

	os << e.first_name_ << " " << e.last_name_;

	return os;
}
