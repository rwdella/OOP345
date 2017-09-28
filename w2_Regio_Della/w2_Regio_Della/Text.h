#pragma once
#ifndef _TEXT_H_
#define _TEXT_H_
#include <iostream>
#include <fstream>
#include <string>

namespace w3{
	class Text {
		std::string* m_string;
		size_t m_size;
	public:
		Text();
		Text(const std::string m_filename);
		//copy
		Text(const Text& obj);
		Text& operator=(const Text& obj);
		//move
		Text(Text&& obj);
		Text& operator=(Text&& obj);
		~Text();
		size_t size() const;

	};
}


#endif