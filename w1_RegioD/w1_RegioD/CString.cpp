#include "CString.h"

namespace w1 {

	CString::CString(char* str) {
		
		strncpy(m_str, str, MAX);

		if (str == nullptr)
			m_str[0] = '\0';

		m_str[MAX] = '\0';
		
	}

	void CString::display(std::ostream& os) {
		os << m_str;
	}

	std::ostream& operator<<(std::ostream& ostr, CString& CSobj) {
		//static int
		static int n = 0;
		ostr << n++ << ": ";
		CSobj.display(ostr);
		return ostr;
	}
}