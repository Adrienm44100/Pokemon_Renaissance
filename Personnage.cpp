#include "Personnage.h"

Personnage::Personnage() {

    //QImage monImage("images/linkBas.png");
    //qDebug() << monImage.size().width() << "x" << monImage.size().height();

    label_ = new QLabel();
    QPixmap image = QPixmap(/* chemin image perso déplacement vers le bas */);
    label_->setPixmap(image);

}

QLabel *Personnage::getLabel(){
    return label_;
}

void Personnage::aDroite(){
    QPixmap nouvImage = QPixmap(/* chemin image perso déplacement vers la droite */);
    label_->setPixmap(nouvImage);
}

void Personnage::aGauche(){
    QPixmap nouvImage = QPixmap(/* chemin image perso déplacement vers la gauche */);
    label_->setPixmap(nouvImage);
}

void Personnage::enHaut(){
    QPixmap nouvImage = QPixmap(/* chemin image perso déplacement vers le haut */);
    label_->setPixmap(nouvImage);
}

void Personnage::enBas(){
    QPixmap nouvImage = QPixmap(/* chemin image perso déplacement vers le bas */);
    label_->setPixmap(nouvImage);
}
