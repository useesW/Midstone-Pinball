#ifndef MAINMENU_H
#define MAINMENU_H
#include "Scene.h"

class UIPanel;
class UIButton;
class UIImage;

/// <Notes>
/// 
/// </summary>
class MainMenu : public Scene {
private:

	UIPanel* panel_Menu_Main;
	UIPanel* panel_Menu_Credits;

	
public:
	explicit MainMenu();
	virtual ~MainMenu();

	virtual bool OnCreate() override;
	virtual void OnDestroy() override;
	virtual void Update(const float deltaTime) override;
	virtual void Render() const override;
	virtual void HandleEvents(const SDL_Event& sdlEvent) override;
};


#endif // SCENE0_H