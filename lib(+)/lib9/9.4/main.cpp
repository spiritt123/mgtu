#include <QApplication>
#include "StrDialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    StrDialog *dialog = new StrDialog();
    dialog->show(); // отображаем окно
    return app.exec(); // запускаем цикл обработки сообщений
}