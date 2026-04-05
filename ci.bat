REM Створення каталогу білдування
mkdir build

REM Перехід у каталог білдування
cd build

REM Конфігурування проєкту за допомогою CMake
cmake ..

REM Білдування проєкту
cmake --build .

REM Повернення у кореневий каталог проєкту
cd ..

REM Забезпечення прав на виконання та фіксація змін (використовуємо git)
git add -A
git commit -m "Build configuration and executable permissions"