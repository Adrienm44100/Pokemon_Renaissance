#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <QApplication>
#include <QWidget>
#include <QPixmap>
#include <QLabel>
#include <QDebug>

class Personnage {

public:
    Personnage();
    QLabel *getLabel();
    void aDroite();
    void aGauche();
    void enHaut();
    void enBas();

private:
    QLabel *label_;

};

#endif // PERSONNAGE_H
