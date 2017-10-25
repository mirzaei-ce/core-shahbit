// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SHAHBIT_QT_SHAHBITADDRESSVALIDATOR_H
#define SHAHBIT_QT_SHAHBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ShahbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ShahbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Shahbit address widget validator, checks for a valid shahbit address.
 */
class ShahbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ShahbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SHAHBIT_QT_SHAHBITADDRESSVALIDATOR_H
