// Copyright (c) 2015-2017, The Aguscoin developers
//
// This file is part of Aguscoin
//
// Aguscoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Aguscoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Aguscoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QDialog>

namespace Ui {
class QuestionDialog;
}

namespace WalletGui {

class QuestionDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(QuestionDialog)

public:
  QuestionDialog(const QString& _title, const QString& _text, QWidget* _parent);
  ~QuestionDialog();

private:
  QScopedPointer<Ui::QuestionDialog> m_ui;
};

}
