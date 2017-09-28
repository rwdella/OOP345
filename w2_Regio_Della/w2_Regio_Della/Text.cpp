#include "Text.h"


namespace w3 {
	Text::Text() {
		m_string = nullptr;
		m_size = 0;
	}

	Text::Text(const std::string m_filename) {
		std::ifstream file(m_filename);

		std::string temp;
		int i = 0;
		m_size = 0;

		if (file.is_open()) {
			while (file.good()) {
				getline(file, temp, '\n'); // use temp just to count how many fields to use for allocation
				m_size++;
			}

			m_string = new std::string[m_size];

			while (file.good()) {
				getline(file, m_string[i++], '\n');
			}

			file.close();
		}
		else {
			m_string = nullptr;
			m_size = 0;
		}
	}


	
	Text::Text(const Text& obj) { 
		*this = obj;
	}

	Text& Text::operator=(const Text& obj) {
		if (this != &obj) {

			if (m_string)
			{
				delete[] m_string;
				m_string = nullptr;
				m_size = 0;
			}

			if (obj.m_string) {
				m_size = obj.m_size;
				m_string = new std::string[m_size];
				for (size_t i = 0; i < m_size; i++) {
					m_string[i] = obj.m_string[i];
				}
			}
		}
		return *this;
	}

	Text::Text(Text&& obj) {
		*this = std::move(obj);
	}

	Text& Text::operator=(Text&& obj) {
		if (this != &obj) {
			delete[] m_string;
			m_size = obj.m_size;
			m_string = obj.m_string;

			obj.m_size = 0;
			obj.m_string = nullptr;
		}
		return std::move(*this);
	}
	Text::~Text() {
		delete[] m_string;
		m_string = nullptr;
	}

	size_t Text::size() const {
		return m_size;
	}
}