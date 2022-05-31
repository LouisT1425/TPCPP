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
