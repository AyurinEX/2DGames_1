#include <GSgame.h>
#include "Util/EffectGL.h"
#include "Util/BasicShapes.h"

const int SCREEN_WIDTH = 1280;		// 画面横幅
const int SCREEN_HEIGHT = 720;		// 画面縦幅
const float GAME_FPS = 60.0f;		// フレームレート

class MyGame : public gslib::Game
{
public:
	MyGame() :Game(SCREEN_WIDTH, SCREEN_HEIGHT, false, GAME_FPS) {}


private:
    // 開始
    virtual void start() override
	{

    }
    // 更新
    virtual void update(float deltaTime) override
	{

    }
    // 描画
    virtual void draw() override
	{

    }
    // 終了
    virtual void end() override
	{

    }
};

int main()
{
    return MyGame().run();
}
