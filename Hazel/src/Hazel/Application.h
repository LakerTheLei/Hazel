#pragma once
#include "Core.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		//为什么这里构造函数不需要virtual，而析构函数需要
		//在该类的派生类中，如果析构函数不采用virtual，则只会执行到基类的析构函数，不会执行派生类的析构函数
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}


