20.TODO ЛИСТ   
Сборка приложения:  
Для сборки необходимы: фреймворк QT и соответсвующие пакеты,cmake  
Необходимо создать папку build,в папке build собрать проект с помощью cmake -DCMAKE_CXX_FLAGS="-Werror" /путь до cw-iv-021_todo-list/, затем cmake --build .  
Вернуться в папку cw-iv-021_todo-list  вызвать команду cmake -E copybase.csv путь/до/build/Todo, зайти в папку /ToDo и  
выполнить ./ToDo
