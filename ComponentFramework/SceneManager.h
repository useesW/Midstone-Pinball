#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#include <string>

class SceneManager  {
public:
	
	SceneManager();
	~SceneManager();
	void Run();
	bool Initialize(std::string name_, int width_, int height_);
	void GetEvents();
	
	
private:
	enum SCENE_NUMBER {
		SCENE0 = 0,
		SCENE1 = 1,
		SCENE2 = 2
		// Add more when we make more
	};

	class Scene* currentScene;
	class Timer* timer;
	class Window* window;

	unsigned int fps;
	bool isRunning;
	bool fullScreen;
	float width;
	float height;
	void BuildScene(SCENE_NUMBER scene_);
};


#endif // SCENEMANAGER_H