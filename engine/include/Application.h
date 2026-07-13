#pragma once 

namespace VEngine
{
	class Application
	{
	public:
		void Run();

	protected:
		virtual void OnUpdate() {};

	private:
		void Init();
		bool Running();
		void BeginFrame();
		void EndFrame();
		void Shutdown();
	};
}