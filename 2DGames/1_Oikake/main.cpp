#include <GSgame.h>
#include "Util/EffectGL.h"
#include "Util/BasicShapes.h"

const int SCREEN_WIDTH = 1280;		// ��ʉ���
const int SCREEN_HEIGHT = 720;		// ��ʏc��
const float GAME_FPS = 60.0f;		// �t���[�����[�g

class MyGame : public gslib::Game
{
public:
	MyGame() :Game(SCREEN_WIDTH, SCREEN_HEIGHT, false, GAME_FPS) {}


private:
    // �J�n
    virtual void start() override
	{

    }
    // �X�V
    virtual void update(float deltaTime) override
	{

    }
    // �`��
    virtual void draw() override
	{

    }
    // �I��
    virtual void end() override
	{

    }
};

int main()
{
    return MyGame().run();
}
