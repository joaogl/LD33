#pragma once

#include <sparky.h>

using namespace sparky;

class Game : public Sparky
{
public:

private:
	graphics::Window* m_Window;
protected:

public:
	Game();
	~Game();

	void init() override;
	void render() override;

private:

protected:

};