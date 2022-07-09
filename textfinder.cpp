#include "textfinder.h"
#include "ui_textfinder.h"
#include <QFile>
#include <QTextStream>

/*constructor for textFinder*/
textFinder::textFinder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::textFinder)
{
    ui->setupUi(this);
    loadTextFile();;
}

textFinder::~textFinder()
{
    delete ui;
}


void textFinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);

}

void textFinder::loadTextFile(){
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readLine();

    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
