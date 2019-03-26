// Original Source Code by Meroni,
// https://github.com/Flowx08/artificial_intelligence
// Modified by Curtó & Zarza
// {curto,zarza}.2@my.cityu.edu.hk

#ifndef VARIABLE_HPP
#define VARIABLE_HPP

////////////////////////////////////////////////////////////
///	INCLUDES
////////////////////////////////////////////////////////////
#include "Operation.hpp"

////////////////////////////////////////////////////////////
///	NAMESPACE AI
////////////////////////////////////////////////////////////
namespace ai
{

	class Variable : public Operation
	{
		public:

			Variable(int width);
			Variable(int width, int height);
			Variable(int width, int height, int depth);
			Variable(ai::IOData& data);
			void save(ai::IOData& data);
			void print();
			const Operation::Type get_type() const;
			static std::shared_ptr<Operation> make(int width);
			static std::shared_ptr<Operation> make(int width, int height);
			static std::shared_ptr<Operation> make(int width, int height, int depth);

		private:
			int _width, _height, _depth;

	};

} /* namespace ai */


#endif /* end of include guard: VARIABLE_HPP */

