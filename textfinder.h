#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class textFinder; }
QT_END_NAMESPACE

class textFinder : public QMainWindow
{
    Q_OBJECT

public:
    textFinder(QWidget *parent = nullptr);
    ~textFinder();

private slots:
    void on_findButton_clicked();

private:
    Ui::textFinder *ui;
    void loadTextFile();
};
#endif // TEXTFINDER_H
