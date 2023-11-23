#include <iostream>
#include "Leaver.h"

	Leaver::Leaver(std::string name) {
		this->name = name;
	}
	void Leaver::leave() {

		std::cout << "До свидания, " << name << '!' << std::endl;
	}
