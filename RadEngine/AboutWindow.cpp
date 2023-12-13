#include "Application.h"
#include "Globals.h"
#include "ModuleWindow.h"
#include "imgui.h"
#include "ModuleSceneIntro.h"
#include "AboutWindow.h"

#include "assimp/Include/version.h" // From assimp

AboutWindow::AboutWindow(const char* name, bool isActive) : ImGuiWindowBase("About", isActive = false)
{
	//fps = 0;
}

AboutWindow::~AboutWindow()
{
}

bool AboutWindow::Draw(ImGuiIO& io)
{
	bool ret = true;

	
	ImGui::Begin(GetName(), nullptr, ImGuiWindowFlags_None);

	if (App->moduleUi->hoveringWindow == false)
		App->moduleUi->hoveringWindow = ImGui::IsWindowHovered(); // To know if the window is being moved
	
	AboutHeader();
	
	ImGui::End();

	return ret;
}

bool AboutWindow::CleanUp()
{
	bool ret = true;

	return ret;
}

bool AboutWindow::AboutHeader()
{
	bool ret = true;
	/*Add an “About ..” modal window inside
			the “Help” menu that shows :
		○ Name of your Engine
			○ One(or few) line description
			○ Name of the Author with link to github page
			○ Libraries(with versions queried in real time)
			used with links to their web
			○ Full text of the license*/

	ImGui::Text("Rad Engine V0.5");
	ImGui::Spacing();

	ImGui::Bullet();
	if (ImGui::Button("Engine Repository"))
		ShellExecuteA(NULL, "open", "https://github.com/DaniGarMata/Rad-Engine", NULL, NULL, SW_SHOWNORMAL);

	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Separator();
	ImGui::Spacing();
	ImGui::Spacing();


	ImGui::Text("Developers:");
	ImGui::Spacing();

	ImGui::BulletText("Dani Garcia Mata");
	ImGui::SameLine();
	if (ImGui::Button("DaniGarMata"))
		ShellExecuteA(NULL, "open", "https://github.com/DaniGarMata", NULL, NULL, SW_SHOWNORMAL);

	ImGui::BulletText("Ogylandy Yespagambetov");
	ImGui::SameLine();
	if (ImGui::Button("Oga29"))
		ShellExecuteA(NULL, "open", "https://github.com/Oga29", NULL, NULL, SW_SHOWNORMAL);
	ImGui::Spacing();

	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Separator();
	ImGui::Spacing();
	ImGui::Spacing();


	ImGui::Text("External libraries used:");
	ImGui::Spacing();
	SDL_version sdlVersion;
	SDL_GetVersion(&sdlVersion);
	ImGui::BulletText("SDL v%i.%i.%i", sdlVersion.major, sdlVersion.minor, sdlVersion.patch);
	ImGui::Spacing();
	ImGui::BulletText("Open GL v3.1"); //3.1 ?
	ImGui::Spacing();
	ImGui::BulletText("Glew v2.1"); // 2.1.0 ?
	ImGui::Spacing();
	ImGui::BulletText("ImGui v%s (Docking)", ImGui::GetVersion());
	ImGui::Spacing();
	ImGui::BulletText("JSON Parser v3.10"); // 3.10.4 ?
	ImGui::Spacing();
	ImGui::BulletText("Assimp v%i.%i.%i", aiGetVersionMajor(), aiGetVersionMinor(), aiGetVersionRevision());
	ImGui::Spacing();
	ImGui::BulletText("DevIL v1.8.0"); // 1.7.8 ?
	ImGui::Spacing();
	//Ray tracing library: https://github.com/engilas/raytracing-opengl ----- fork: https://github.com/lucciffer/raytracing-opengl // To be included if we have time
	ImGui::BulletText("MathGeoLib v2.0"); // 2.0 ?
	ImGui::Spacing();
	ImGui::BulletText("PhysFS v3.0.2");

	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Separator();
	ImGui::Spacing();
	ImGui::Spacing();


	ImGui::Text("MIT License");
	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Text("Copyright (c) 2023 - DaniGarMata, Oga29");
	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::TextWrapped("The License can be found in the repository that was provided");
	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::TextWrapped("In the corresponding section. And also in the folder of release");
	

	return ret;
}
