#pragma once 

namespace VEngine
{
	class Application
	{
	public:
		void Run();

	protected:
		virtual void OnUpdate() {};

	};
}