

namespace ClericGameManagement
{
  class State
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

  private:
	  bool m_running;
  };

}
