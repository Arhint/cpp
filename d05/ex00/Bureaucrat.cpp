#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) :

_name(name),
_grade(grade)

{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) {

	*this = rhs;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {

	getName() = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}


int Bureaucrat::getGrade() {

	return _grade;
}

std::string Bureaucrat::getName() {

	return _name;
}


Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &rhs) {

	*this = rhs;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & rhs) {

	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade is to high!");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &rhs) {

	*this = rhs;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & rhs) {

	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() {}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade is to low!");
}