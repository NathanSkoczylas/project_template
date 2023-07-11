#pragma once

namespace EnterNameSpace {
	class ClassObject {
		public:
			ClassObject();
			~ClassObject();
			
			void enabled(bool e);
			bool enabled();

		protected:
			
		private:
			bool m_enabled{ false };
			
	};
		
} // end namespace