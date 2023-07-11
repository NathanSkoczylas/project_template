#include "ClassObject.hpp"

namespace EnterNameSpace {
	
	ClassObject::ClassObject() {
		// Constructor
	}
	
	ClassObject::~ClassObject() {
		// Destructor
	}
	
	void ClassObject::enabled(bool e) {
		m_enabled = e;
	}
	
	bool ClassObject::enabled() {
		return m_enabled;
	}
}