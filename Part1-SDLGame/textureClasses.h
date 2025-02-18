#ifndef TEXTURECLASSES_H
#define TEXTURECLASSES_H

#include <string>
#include <SDL.h>


class LTexture {
public:
	//Initializes variables
	LTexture();

	//Deallocates memory
	~LTexture();

	//Loads image from specified path
	bool loadFromFile(std::string path, SDL_Renderer* gRenderer);

	//Deallocates memory
	void free();

	void setColor(Uint8 red, Uint8 green, Uint8 blue);

	void setBlendMode(SDL_BlendMode blending);

	void setAlpha(Uint8 alpha);

	//Renders texture at given point
	void render(int x, int y, SDL_Rect* clip, SDL_Renderer* gRenderer);

	//Gets image dimensions
	int getWidth();
	int getHeight();
	
private:
	//The actual hardware texture
	SDL_Texture* mTexture;

	//Image dimensions
	int mWidth;
	int mHeight;
};


#endif // !TEXTURECLASSES_H
