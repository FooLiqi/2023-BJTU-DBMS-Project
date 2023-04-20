#ifndef COLUMNDIALOG_H
#define COLUMNDIALOG_H
// 自定义对话框窗口类
#include <QDialog>
#include <QDialogButtonBox>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
class ColumnDialog : public QDialog {
  Q_OBJECT
 public:
  explicit ColumnDialog(QWidget *parent = nullptr);

  // 声明三个QLineEdit指针成员变量
  QLineEdit *lineEdit1;
  QLineEdit *lineEdit2;
  QLineEdit *lineEdit3;
  QStringList getValues();

 private:
  // 声明两个按钮的指针成员变量
  QPushButton *okButton;
  QPushButton *cancelButton;

 private slots:
  // 声明确认按钮的槽函数
  void acceptValues();
};

#endif  // COLUMNDIALOG_H
