#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_buttonLogin_clicked();
    void on_buttonSignup_clicked();
    void on_buttonForgotPassword_clicked();
    void on_buttonTogglePassword_clicked();

private:
    Ui::login *ui;
    void showMessage(const QString &message);
    bool passwordVisible;

    QString iconClosedPath;
    QString iconOpenPath;
};

#endif // LOGIN_H
