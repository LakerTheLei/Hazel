#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

#endif //  HZ_PLATFORM_WINDOWS

int main(int argc,char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}