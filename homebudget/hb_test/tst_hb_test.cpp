#include <QString>
#include <QtTest>

class Hb_test : public QObject
{
    Q_OBJECT

public:
    Hb_test();

private Q_SLOTS:
    void testCase1();
};

Hb_test::Hb_test()
{
}

void Hb_test::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Hb_test)

#include "tst_hb_test.moc"
