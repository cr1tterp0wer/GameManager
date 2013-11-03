#include "State.h"
#include <vector>

namespace ClericGameManagement
{
	class StateManager
	{ 
	
	public:
	 virtual void Init();
	 virtual void CleanUp();

  	 virtual void Pause();
	 virtual void Resume();

	 //input
	 virtual void HandleEvents();
     virtual void Update();
	 virtual void Draw();

	 void ChangeState();

  private:
	  std::vector<State> states;

	};


}