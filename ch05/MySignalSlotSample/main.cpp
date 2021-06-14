#include <QCoreApplication>

#include "receiver.h"
#include "sender.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sender sender;
    Receiver receiver;

    QObject::connect(&sender, &Sender::changedValue,
                     &receiver, &Receiver::setValue);

    sender.sendSignal();

    return a.exec();
}
