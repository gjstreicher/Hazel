#pragma once

#ifdef HZ_PLATFORM_LINUX

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
  auto app = Hazel::CreateApplication();
  app->Run();
  delete app;
}

#endif