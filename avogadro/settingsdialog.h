/******************************************************************************
  This source file is part of the Avogadro project.
  This source code is released under the 3-Clause BSD License, (see "LICENSE").
******************************************************************************/

#ifndef AVOGADRO_SETTINGSDIALOG_H
#define AVOGADRO_SETTINGSDIALOG_H

#include <QtWidgets/QDialog>

namespace Ui {
class SettingsDialog;
}

namespace Avogadro {

class SettingsDialog : public QDialog
{
  Q_OBJECT
public:
  SettingsDialog(QWidget* Parent);
  ~SettingsDialog();

private:
  Ui::SettingsDialog* m_ui;
};

} // End Avogadro namespace

#endif // AVOGADRO_SETTINGSDIALOG_H
