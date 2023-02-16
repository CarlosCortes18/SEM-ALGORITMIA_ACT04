#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <iostream>
using namespace std;

class Neurona
{
private:
     int id;
     float voltaje;
     int posicion_x;
     int posicion_y;
     int red;
     int green;
     int blue;
public:
     Neurona *siguiente;
     Neurona();
     ~Neurona();
     void agregarDato(int newId, float newVoltaje, int newPosicion_x, int newPosicion_y, int newRed, int newGreen, int newBlue);
     QString getId();
     QString getVoltaje();
     QString getPosX();
     QString getPosY();
     QString getRed();
     QString getGreen();
     QString getBlue();
};

class listaNeurona //Clase que administra una lista de Neuronas
{
private:
    Neurona *inicio;
    //int cont;
public:
    listaNeurona();
    ~listaNeurona();
    bool vacia();
    void agregar_inicio(int newId, float newVoltaje, int newPosicion_x, int newPosicion_y, int newRed, int newGreen, int newBlue);
    void agregar_final(int newId, float newVoltaje, int newPosicion_x, int newPosicion_y, int newRed, int newGreen, int newBlue);
    QString mostrar();
};

void menuPrincipal(); //MENU PRINCIPAL DEL PROGRAMA

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_insertarInicio_clicked();

    void on_insertarFinal_clicked();

    void on_mostrarNeuronas_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
