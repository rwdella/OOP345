#include "Notifications.h"


namespace w5 {
	Notifications::Notifications() : numOfMsg(0), m_message{new Message[MAX]}{}

	Notifications::Notifications(const Notifications& ntf) {
		*this = ntf;
	}

	Notifications& Notifications::operator=(const Notifications& ntf) {
		if (this != &ntf) {
			delete[] m_message; 
			numOfMsg = ntf.numOfMsg;
			m_message = new Message[MAX];
			m_message = ntf.m_message;
		}
		return *this;
	}

	Notifications::Notifications(Notifications&& ntf) {
		*this = std::move(ntf);
	}

	Notifications&& Notifications::operator=(Notifications&& ntf) {
		if (this != &ntf) {
			delete[] m_message;
			numOfMsg = ntf.numOfMsg;
			m_message = ntf.m_message;

			ntf.numOfMsg = 0;
			ntf.m_message = nullptr;
		}
		return std::move(*this);
	}

	Notifications::~Notifications() {
		delete[] m_message;
		m_message = nullptr;
	}

	void Notifications::operator+=(const Message& msg) {
		if (numOfMsg < MAX) {
			m_message[numOfMsg] = msg;
			numOfMsg++;
		}
	}

	void Notifications::display(std::ostream& os) const {
		for (size_t i = 0u; i < numOfMsg; i++) {
			m_message[i].display(os);
		}
	}
}
