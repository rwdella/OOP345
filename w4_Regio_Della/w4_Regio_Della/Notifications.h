#pragma once
#ifndef NOTIFICATIONS_H_
#define NOTIFICATIONS_H_
#include "Message.h"
#include <iostream>


static const size_t MAX = 10;

namespace w5 {
	class Notifications {
		Message* m_message;
		size_t numOfMsg;
	public:
		Notifications();
		Notifications(const Notifications&);
		Notifications& operator=(const Notifications&);
		Notifications(Notifications&&);
		Notifications&& operator=(Notifications&&);
		~Notifications();
		void operator+=(const Message& msg);
		void display(std::ostream& os) const;
	};
}

#endif