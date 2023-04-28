#ifndef TIMER_H
#define TIMER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Timer; }
QT_END_NAMESPACE

class Timer : public QWidget
{
    Q_OBJECT

public:
    Timer(QWidget *parent = nullptr);
    ~Timer();

private:
    Ui::Timer *ui;
};
#endif // TIMER_H
