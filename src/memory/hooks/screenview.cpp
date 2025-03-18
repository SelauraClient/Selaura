#include "screenview.hpp"

void selaura_hooks::ScreenView_SetupAndRender(void* a1, void* a2) {
	auto& trampoline = trampolines::SetupAndRender;

	/*static int count = 0;
	if (count == 3) {
		ImGui::GetForegroundDrawList()->AddRectFilled(ImVec2(0, 0), ImVec2(50, 50), 0xFF0000FF);
		count = 0;
	}
	else {
		count += 1;
	}*/
	//

	reinterpret_cast<void(*)(void*, void*)>(trampoline)(a1, a2);
}
