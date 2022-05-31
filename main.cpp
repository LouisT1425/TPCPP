#include "mainwindow.h"
#include <QApplication>
#include <time.h>

int main(int argc, char** argv)
{
    srand(time(NULL)); //srand pour les déplacements des fantomes

    QApplication *app = new QApplication(argc, argv);
    MainWindow *window = new MainWindow();
    window->show();

    return app->exec();
}

// Attention à bien changer le working directory pour le dossier contenant "Images" sinon la partie graphique ne marche pas.
