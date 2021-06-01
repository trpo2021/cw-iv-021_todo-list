20.TODO ЛИСТ  
Сборка приложения:
Для сборки необходимы: фреймворк QT и соответсвующие пакеты,cmake
Необходимо создать папку build,в папке build собрать проект с помощью cmake -DCMAKE_CXX_FLAGS="-Werror" /путь до cw-iv-021_todo-list/ затем cmake --build .  
Находясь в папке build вызвать команду cmake -E copy /путь до cw-iv-021_todo-list/base.csv, зайти в папку /ToDo и выполнить ./ToDo
