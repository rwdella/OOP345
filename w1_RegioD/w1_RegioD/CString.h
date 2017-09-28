#ifndef _CSTRING_H_
#define _CSTRING_H_
#include <iostream>
#include <cstring>

const int MAX = 3;

namespace w1 {
	class CString {
		char m_str[MAX + 1];
	public:
		CString(char * str);
		void display(std::ostream& os);
	};
	std::ostream& operator<<(std::ostream& ostr, CString& CSt);
}
#endif