file(GLOB hdrs "*.h*") #Добавляем в переменную hdrs все файлы с расширением .h
file(GLOB srcs "*.cpp")#Добавляем в переменную srcs все файлы с расширением .h
add_executable(${main} ${srcs} ${hdrs}) #Создаем проект с именем из переменной ${Mtrix}, в него добавляются файлы из переменных ${srcs} и ${hdrs}
target_link_libraries(${main} ${Queuelib} ${Stecklib}) #Подключаем к проекту с именем ${Matrix} библиотеку с именем ${Matrixlib}


