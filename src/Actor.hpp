#ifndef ACTOR_HPP
#define ACTOR_HPP

#include <string>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Vector2.hpp>

namespace sf
{
    class RenderWindow;
}

class Editor;

class Actor
{
    public:
        Actor( Editor& theEditor, const std::string& theName, sf::Vector2i thePos, int theFacing );
        
        std::string getName() const;
        
        void setPosition( sf::Vector2i thePos );
        sf::Vector2i getPosition() const;
        
        void setFacing( int theFacing );
        int getFacing() const;
        
        void render( sf::RenderWindow& window );
    
    private:
        Editor& editor;
        const std::string name;
        sf::Vector2i tilePos;
        int facing;
        
        sf::Texture tex;
        sf::Sprite spr;
        
        void init();
        
        friend class Map;
};

#endif // ACTOR_HPP
