#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <string>

class Bureaucrat {

private:

	const std::string	_name;
	unsigned int		_grade;

public:

	class GradeTooHighException : public std::exception {

	public:
		GradeTooHighException( void );
		GradeTooHighException( const GradeTooHighException & rhs);
		GradeTooHighException & operator=( GradeTooHighException const & rhs );
		~GradeTooHighException();
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {

	public:
		GradeTooLowException( void );
		GradeTooLowException( const GradeTooLowException & rhs);
		GradeTooLowException & operator=( GradeTooLowException const & rhs);
		~GradeTooLowException();
		const char* what() const throw();

	};

	Bureaucrat( void );
	Bureaucrat( std::string name, unsigned int grade );
	Bureaucrat( const Bureaucrat & rhs );
	Bureaucrat &operator=( Bureaucrat const & rhs);
	~Bureaucrat();

	std::string					getName();
	int							getGrade();

};

#endif
