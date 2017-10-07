#include "Message.h"


namespace w5 {
	Message::Message(){}

	Message::Message(std::ifstream& in, char c) {
		user.clear();
		reply.clear();
		tweet.clear();
		std::string temp;

		getline(in, temp, c);

		size_t i = 0u;

		//User
		for (i; i < temp.size() && temp[i] != ' '; i++) {
			user += temp[i];
		}
		i++;

		//reply
		if (i < temp.size() && temp[i] == '@') {
			i++;
			for (i; i < temp.size() && temp[i] != ' '; i++) {
				reply += temp[i];
			}
			i++;
		}
		//tweet
		for (i; i < temp.size(); i++) {
			tweet += temp[i];
		}

	}

	bool Message::empty()const {
		return tweet.empty();
	}

	void Message::display(std::ostream& os)const {
		os << "Message" << std::endl;
		os << "User : " << user << std::endl;
		if (!reply.empty()) {
			os << "Reply : " << reply << std::endl;
		}
		os << "Tweet : " << tweet << std::endl << std::endl;

	}
}