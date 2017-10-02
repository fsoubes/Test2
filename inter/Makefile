sources = gui_simple.cpp 
objets = $(sources:.cpp=.o)

#pour retourner la bibliothÃ¨que Ã  l'Ã©xÃ©cution


CourbeCarre : carre.o
	g++  $^ -o $@ -L /net/cremi/fsoubes/C/inter/qcustomplot/sharedlib/compilation -lqcustomplot -lQtGui -lQtCore

carre.o : carre.cpp
	g++ -c $^ -I/usr/include/qt4/QtGui/ -I/usr/include/qt4/ -I/usr/include/qt4/QtCore/  -I/net/cremi/fsoubes/C/inter/qcustomplot



GUISimple :$(objets) 
	g++ $^ -o $@ -lQtGui -lQtCore #chercher les librairies

gui_simple.o : gui_simple.cpp
	g++ -c $^ -I/usr/include/qt4/QtGui/ -I/usr/include/qt4/
