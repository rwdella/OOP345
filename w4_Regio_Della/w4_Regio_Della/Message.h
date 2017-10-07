#pragma once
#ifndef MESSAGE_H_
#define MESSAGE_H_
#include <iostream>
#include <fstream>
#include <string>

namespace w5 {
	class Message {
		std::string user;
		std::string reply;
		std::string tweet;
	public:
		Message();
		Message(std::ifstream& in, char c);
		bool empty()const;
		void display(std::ostream&)const;
	};
}

#endif // !MESSAGE_H_
