#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound() const;
		virtual std::string getType() const;
};

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		virtual void makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		virtual void makeSound() const;
};

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		void makeSound();
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
};

#endif