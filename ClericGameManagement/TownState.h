#include "State.h"
#include "InteriorState.h"
#include <vector>

namespace ClericGameManagement
{


	class TownState:State
	{
	public:


	private:
		std::vector<InteriorState> states;

	};


}