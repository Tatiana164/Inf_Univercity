#include <SFML/Graphics.hpp>

int main() {
    // Создание окна
    sf::RenderWindow window(sf::VideoMode(500, 500), "Grid Example");

    // Размер ячейки
    int cellSize = 50;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // Рисование сетки и закрашивание ячеек
        for (int row = 0; row < 10; ++row) {
            for (int col = 0; col < 10; ++col) {
                sf::RectangleShape rectangle(sf::Vector2f(cellSize, cellSize));
                rectangle.setPosition(col * cellSize, row * cellSize);
                rectangle.setOutlineThickness(1);
                rectangle.setOutlineColor(sf::Color::Black);

                if (row == 4 || col == 4) {
                    rectangle.setFillColor(sf::Color::Green);
                }
                else {
                    rectangle.setFillColor(sf::Color::White);
                }

                window.draw(rectangle);
            }
        }

        window.display();
    }

    return 0;
}
