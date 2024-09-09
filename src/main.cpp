#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(200, 200), "SFML Works!\n");
	Clock deltaClock;

	bool kresleni = true;

    while (window.isOpen())
    {
	    Time dt = deltaClock.restart();
		if(kresleni)
		{
			window.clear();
			//window.display();
		}

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
			{
				window.close();
				return 0;
			}
			if(event.type == Event::Resized)
			{

			}
		}
    }

    return 0;
}
