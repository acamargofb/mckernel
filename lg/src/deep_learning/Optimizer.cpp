// Original Source Code by Meroni (https://github.com/Flowx08/).
// Modified by Curtó & Zarza.
// c@decurto.ch z@dezarza.ch

////////////////////////////////////////////////////////////
///	INCLUDES
////////////////////////////////////////////////////////////
#include "Optimizer.hpp"

////////////////////////////////////////////////////////////
///	NAMESPACE LG
////////////////////////////////////////////////////////////
namespace lg
{

	////////////////////////////////////////////////////////////
	void Optimizer::fit(Neural_Network& net, Tensor_float &inputs, Tensor_float &targets) {}
	
	#ifdef CUDA_BACKEND
	////////////////////////////////////////////////////////////
	void Optimizer::fit(Neural_Network& net, TensorCUDA_float &inputs, TensorCUDA_float &targets) {}
	#endif
	
	////////////////////////////////////////////////////////////
	void Optimizer::setLearningrate(const float learningrate) { _learningrate = learningrate; }

	////////////////////////////////////////////////////////////
	void Optimizer::setMomentum(const float momentum) { _momentum = momentum; }
	
	////////////////////////////////////////////////////////////
	const float Optimizer::getLearningrate() const { return _learningrate; }
	
	////////////////////////////////////////////////////////////
	const float Optimizer::getMomentum() const { return _momentum; }
	
	////////////////////////////////////////////////////////////
	const float Optimizer::getError() const { return _error; }
	
} /* namespace lg */
