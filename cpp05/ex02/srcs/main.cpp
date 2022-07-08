#include "../incs/Bureaucrat.hpp"
// #include "Bureaucrat.hpp"
// #include "../incs/Form.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/Color.hpp"

// void shrubbery_test_1(void) {
// 	Form *form;
// 	Bureaucrat mark = Bureaucrat("Mark", 1);
// 	Bureaucrat peter = Bureaucrat("peter",150);

// 	try 
// 	{
// 		Bureaucrat b_exec("executor", 138);
// 		std::cout << b_exec << std::endl;
// 		ShrubberyCreationForm s("shrubbery1");
// 		std::cout << s << std::endl;
// 		s.execute(b_exec);
// 		form = new ShrubberyCreationForm("s1");
// 		mark.signForm(*form);
// 		mark.excuteForm(*form);
// 		delete form;
// 	} catch(const std::exception &e) {
// 		std::cerr << C_RED << e.what() << C_NC << std::endl;
// 	} catch(...) {
// 		std::cerr << C_RED << "Unknown Exception" << C_NC << std::endl;
// 	}
// }

// void shrubbery_test_2(void) {
// 	try {
// 		Bureaucrat b_sign("signer", 146);
// 		Bureaucrat b_exec("executor", 138);
// 		std::cout << b_sign << std::endl;
// 		std::cout << b_exec << std::endl;

// 		ShrubberyCreationForm s("shrubbery2");
// 		std::cout << s << std::endl;
// 		s.beSigned(b_sign);
// 		b_exec.excuteForm(s);
// 	} catch(const std::exception &e) {
// 		std::cerr << C_RED << e.what() << C_NC << std::endl;
// 	} catch(...) {
// 		std::cerr << C_RED << "Unknown Exception" << C_NC << std::endl;
// 	}
// }

// void shrubbery_test_3(void) {
// 	try {
// 		Bureaucrat b_sign("signer", 140);
// 		Bureaucrat b_exec("executor", 138);
// 		std::cout << b_sign << std::endl;
// 		std::cout << b_exec << std::endl;

// 		ShrubberyCreationForm s("shrubbery3");
// 		std::cout << s << std::endl;
// 		s.beSigned(b_sign);
// 		std::cout << s << std::endl;
// 		b_exec.excuteForm(s);
// 	} catch(const std::exception &e) {
// 		std::cerr << C_RED << e.what() << C_NC << std::endl;
// 	} catch(...) {
// 		std::cerr << C_RED << "Unknown Exception" << C_NC << std::endl;
// 	}
// }

// void shrubbery_test_4(void) {
// 	try {
// 		Bureaucrat b_sign("signer", 140);
// 		Bureaucrat b_exec("executor", 130);
// 		std::cout << b_sign << std::endl;
// 		std::cout << b_exec << std::endl;

// 		ShrubberyCreationForm s("shrubbery4");
// 		std::cout << s << std::endl;
// 		s.beSigned(b_sign);
// 		std::cout << s << std::endl;
// 		b_exec.excuteForm(s);
// 	} catch(const std::exception &e) {
// 		std::cerr << C_RED << e.what() << C_NC << std::endl;
// 	} catch(...) {
// 		std::cerr << C_RED << "Unknown Exception" << C_NC << std::endl;
// 	}
// }

// void robotomy_test(void) {
// 	try {
// 		Bureaucrat b_sign("signer", 70);
// 		Bureaucrat b_exec("executor", 40);
// 		std::cout << b_sign << std::endl;
// 		std::cout << b_exec << std::endl;

// 		RobotomyRequestForm r("robotomy");
// 		std::cout << r << std::endl;
// 		r.beSigned(b_sign);
// 		std::cout << r << std::endl;
// 		b_exec.excuteForm(r);
// 	} catch(const std::exception &e) {
// 		std::cerr << C_RED << e.what() << C_NC << std::endl;
// 	} catch(...) {
// 		std::cerr << C_RED << "Unknown Exception" << C_NC << std::endl;
// 	}
// }

// void presidential_test(void) {
// 	try {
// 		Bureaucrat b_sign("signer", 20);
// 		Bureaucrat b_exec("executor", 5);
// 		std::cout << b_sign << std::endl;
// 		std::cout << b_exec << std::endl;

// 		PresidentialPardonForm p("presidential");
// 		std::cout << p << std::endl;
// 		p.beSigned(b_sign);
// 		std::cout << p << std::endl;
// 		b_exec.executeForm(p);
// 	} catch(const std::exception &e) {
// 		std::cerr << C_RED << e.what() << C_NC << std::endl;
// 	} catch(...) {
// 		std::cerr << C_RED << "Unknown Exception" << C_NC << std::endl;
// 	}
// }

// int main(void)
// {
// 	std::srand(std::time(NULL));
// 	std::cout << "[Shrubbery total Test]" << std::endl;
// 	shrubbery_test_1();	// sign == false
// 	shrubbery_test_2();	// bureaucrat's grade 이 signGrade_ 보다 낮다. (즉, 값이 더 큰 경우)
// 	shrubbery_test_3();	// bureaucrat's grade 이 executeGrade_ 보다 낮다. (즉, 값이 더 큰 경우)
// 	shrubbery_test_4();	// sign 및 등급에서 문제가 없을 경우

// 	std::cout << "\n[Robotomy Test]" << std::endl;
// 	robotomy_test();

// 	std::cout << "\n[Presidential Test]" << std::endl;
// 	presidential_test();
// 	return (0);
// }

int main(void) {
	Bureaucrat t1("t1", 1);
	Bureaucrat t2("t2", 150);
	Form *f;

	try {
		std::cout << "==========test1==========" << std::endl;
		f = new PresidentialPardonForm("presidential");
		f->execute(t1); // Fail (Not Signed)
	} catch (std::exception &e) {
		delete f;
		std::cout << e.what() << std::endl; // NotSignedException
	}

	try {
		std::cout << "==========test2==========" << std::endl;
		f = new PresidentialPardonForm("presidential"); // Presidential
		f->beSigned(t1); // Signed O
		f->execute(t1); // Success
		delete f;
	} catch (std::exception &e) { // Skip
		delete f;
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "==========test3==========" << std::endl;
		f = new ShrubberyCreationForm("Shrubbery"); // Shrubbery
		f->beSigned(t1);
		f->execute(t1); // Success (Shrubbery_shrubbery file)
		delete f;
	} catch (std::exception &e) { // Skip
		delete f;
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "==========test4==========" << std::endl;
		f = new RobotomyRequestForm("Robotomy");
		f->beSigned(t1); // Signed O
		f->execute(t1); // Success
		f->execute(t2); // Fail
		delete f;
	} catch (std::exception &e) {
		delete f;
		std::cout << e.what() << std::endl; // GradeTooLowException
	}

	try {
		std::cout << "==========test5==========" << std::endl;
		RobotomyRequestForm a("Robotomy");
		t1.signForm(a); // Signed O
		t1.executeForm(a); // Success
		t2.executeForm(a); // Fail -> Message
	} catch (std::exception &e) { // Skip
		std::cout << e.what() << std::endl;
	}
	system("leaks ex02");
	return (0);
}