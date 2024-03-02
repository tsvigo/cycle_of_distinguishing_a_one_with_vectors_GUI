#include "dialog.h"
#include "ui_dialog.h"
#include <fstream>
#include <iostream>
using namespace std;
//#include "ui_dialog.h"
//#include "dialog.h"
#include <csetjmp>
#include <QFile>
#include <QTextStream>
#include <QApplication>
#include <QProcess>
 #include <QFileInfo>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
std::vector<unsigned long long> list_of_synapses ;
std::vector<unsigned long long
          //  int
    > list_of_neurons[201] ;//={};
long long variable_error;
int var ;
int neuron_index, synapse_index;
int variable_synapse_index_counter=0;
bool eto_ne_1;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
extern bool eto_ne_1;
std::jmp_buf f;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool fileExists(QString path) {
    QFileInfo check_file(path);
    // check if file exists and if yes: Is it really a file and no directory?
    if (check_file.exists() && check_file.isFile()) {
        return true;
    } else {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
   ui->setupUi(this);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::ifstream is(
        "/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/neurons_and_signal.txt"
        );
    std::istream_iterator<unsigned long long> start(is), end;
    std::vector<unsigned long long> list_of_neurons(start, end);
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::ifstream is2("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/synapses.txt-4");
    std::istream_iterator<unsigned long long> start2(is2), end2;
    std::vector<unsigned long long> list_of_synapses(start2, end2);
   // f:
   // std::jmp_buf f;
    // std::longjmp(f, true); // Go to error handler
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// тут если файл с ошибкой существует читаем ошибку из него NOTE: остановился
///    #include <QFileInfo>
//(не забудьте добавить соответствующий #include-оператор)
    
//    if (fileExists("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors_GUI/error.txt")==true )
//    {;;
//        // считываем ошибку из файла
//        QFile file("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors_GUI/error.txt");
//        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
//            return;
//        QByteArray line = file.readLine();
//         file.close();
//        bool ok;
//        variable_error=line.toLongLong (&ok,10);//.toLongLong ();
//    }
//else
        
    variable_error     =   1073741824-list_of_neurons[200] ; // 1843778052
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
    if //(eto_ne_1==true)
        (list_of_neurons[200]>=1073741824 ) // TODO: поменять логику на противоположную
    // сейчас неправильно - надо уменьшить решающий 201 нейрон. Уменьшать надо уменьшая на 1 синапсы. Сейчас у меня несоответствие решающего
    // 201 нейрона и переменной ошибки. 201 нейрон меняется с ошибки на истину на 1073741824 а ошибка на 0 то есть соответствующая
    // ошибка меньше 201 нейрона на 1073741824? Надо изменить либо ошибку либо 201 нейрон. Оставим нейрон 1843778052 и высчитаем ошибку =
    // 1843778052-1073741824= 770036228
    // Теперь оставим ошибку
    {ui->label->setText("Программа считает что это 1.");} // меняем на это 1
    else {        ui->label->setText("Программа считает что это не 1.");    } //  меняем на это не 1
   // Отрицательная или 0 ошибка должна замениться на положительную тогда программа определяет правильно.     
    
//    if (Neiron::Peremennaia_Zariad_Neirona[201]<1073741824){ui->label_4->setText("Программа считает что это не 1.");}
//    else {
//        ui->label_4->setText("Программа считает что это 1.");
//    }
    /// // goto d; // на выход///////////////////////////////////////////////////
    // если ошибки нет то на выход
    if (variable_error<=0) // тут видимо надо менять на если ошибка = или > то на выход то есть ошибка пропадает если становится > 0
        goto d;
    std::cout << "variable_error = " << variable_error<< std::endl;
    std::cout << "Variable error = 1073741824-list_of_neurons[200] = " << 1073741824-list_of_neurons[200]<< std::endl;
    std::cout << "list_of_neurons[200]  = " << list_of_neurons[200]  << std::endl;
b:
    ////////////////////////////////////////////// Solution function ////////////////////////////////////////////////////////////
    for ( var = 100; var < 200; ++var) // This is the range of neurons
    {
        for (int neuron_index = 0, synapse_index = 0;   neuron_index < 200, synapse_index < 10100;   ++neuron_index, synapse_index = synapse_index + 100)
        
        {
            //FIXME: sigpe арифметическое исключение:
            list_of_neurons[var]=list_of_neurons[var]+  (list_of_neurons[neuron_index]/ list_of_synapses[synapse_index]);    
        }
    }
    
    for (int   neuron_index = 100, synapse_index = 10000; neuron_index < 200;   ++neuron_index, ++synapse_index)
    {
        list_of_neurons[200] = list_of_neurons[200] + (list_of_neurons[neuron_index] / list_of_synapses[synapse_index]);
    }
    variable_error     =   1073741824-list_of_neurons[200] ;
    //     std::cout << "list_of_neurons[201] = " << list_of_neurons[201]<< std::endl;
    if (variable_error<=0) // to the exit
        goto c;
    if (list_of_synapses[10100]==1) // to the exit
    {
        std::cout << "The values of all synapses are minimal and equal to 1." << std::endl;
        goto d;
    }
e:
    if (list_of_synapses[variable_synapse_index_counter] >1)
        list_of_synapses[variable_synapse_index_counter]  =  list_of_synapses[variable_synapse_index_counter]-1;
    
    if (list_of_synapses[variable_synapse_index_counter] ==1)
    {
        variable_synapse_index_counter = variable_synapse_index_counter+1;
        goto e;
    }
    if (variable_synapse_index_counter<10100)
        variable_synapse_index_counter=variable_synapse_index_counter+1;
    else
        variable_synapse_index_counter=0;
    goto b;
c:
    std::cout << "The error has disappeared. Variable error = " << variable_error<< std::endl;
    std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
d:
    fstream file;
    file.open("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/synapses.txt-4",ios_base::out);
    
    vector<unsigned long long>::iterator itr;
    
    for(itr=list_of_synapses.begin();itr!=list_of_synapses.end();itr++)
    {
        file<<*itr<<endl;
    }
    
    file.close();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    fstream file2;
//    file2.open("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/neurons_and_signal.txt",ios_base::out);
    
//    vector<unsigned long long>::iterator itr2;
    
//    for(itr2=list_of_neurons.begin();itr2!=list_of_neurons.end();itr2++)
//    {
//        file2<<*itr2<<endl;
//    }
    
//    file2.close();
    std::cout << "The error has disappeared. Variable error = " << variable_error<< ". Это выход. "<<std::endl;
    std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
// При нажатии на кнопку "Не правильно" надо ошибку изменить на 0   
// Записать ошибку в файл
    QFile fileOut("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors_GUI/error.txt"); // Связываем объект с файлом fileout.txt
    if(fileOut.open(QIODevice::WriteOnly | QIODevice::Text)) 
    { // Если файл успешно открыт для записи в текстовом режиме
        QTextStream writeStream(&fileOut); // Создаем объект класса QTextStream
        // и передаем ему адрес объекта fileOut
        writeStream << //long long
            QString::number(variable_error); // Посылаем строку в поток для записи
        fileOut.close(); // Закрываем файл
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
    if //(eto_ne_1==true)
        (list_of_neurons[200]>=1073741824 ) 
    {ui->label->setText("Программа считает что это 1.");} // меняем на это 1
    else {        ui->label->setText("Программа считает что это не 1.");    } //  меняем на это не 1  
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    //
   variable_error=1;
    // создать файл и записать туда ошибку? Потом перезапустить программу?
   
   QFile fileOut("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors_GUI/error.txt"); // Связываем объект с файлом fileout.txt
   if(fileOut.open(QIODevice::WriteOnly | QIODevice::Text)) 
   { // Если файл успешно открыт для записи в текстовом режиме
       QTextStream writeStream(&fileOut); // Создаем объект класса QTextStream
       // и передаем ему адрес объекта fileOut
       writeStream << "1"; // Посылаем строку в поток для записи
       fileOut.close(); // Закрываем файл
   }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// запускаем эту программу заново а этот экземплят текущий закрываем

        // restart:
        qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
  //  list_of_neurons[200]=1073741823; 4294967295
   
  //  goto f;
//    setjmp(f);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
//    if (variable_error<=0) // тут видимо надо менять на если ошибка = или > то на выход то есть ошибка пропадает если становится > 0
//        goto d;
//    std::cout << "variable_error = " << variable_error<< std::endl;
//    std::cout << "Variable error = 1073741824-list_of_neurons[200] = " << 1073741824-list_of_neurons[200]<< std::endl;
//    std::cout << "list_of_neurons[200]  = " << list_of_neurons[200]  << std::endl;
//b:
//    ////////////////////////////////////////////// Solution function ////////////////////////////////////////////////////////////
//    for ( var = 100; var < 200; ++var) // This is the range of neurons
//    {
//        for (int neuron_index = 0, synapse_index = 0;   neuron_index < 200, synapse_index < 10100;   ++neuron_index, synapse_index = synapse_index + 100)
        
//        {
            
//            list_of_neurons[var]=list_of_neurons[var]+  (list_of_neurons[neuron_index]/ list_of_synapses[synapse_index]);    
//        }
//    }
    
//    for (int   neuron_index = 100, synapse_index = 10000; neuron_index < 200;   ++neuron_index, ++synapse_index)
//    {
//        list_of_neurons[200] = list_of_neurons[200] + (list_of_neurons[neuron_index] / list_of_synapses[synapse_index]);
//    }
//    variable_error     =   1073741824-list_of_neurons[200] ;
//    //     std::cout << "list_of_neurons[201] = " << list_of_neurons[201]<< std::endl;
//    if (variable_error<=0) // to the exit
//        goto c;
//    if (list_of_synapses[10100]==1) // to the exit
//    {
//        std::cout << "The values of all synapses are minimal and equal to 1." << std::endl;
//        goto d;
//    }
//e:
//    if (list_of_synapses[variable_synapse_index_counter] >1)
//        list_of_synapses[variable_synapse_index_counter]  =  list_of_synapses[variable_synapse_index_counter]-1;
    
//    if (list_of_synapses[variable_synapse_index_counter] ==1)
//    {
//        variable_synapse_index_counter = variable_synapse_index_counter+1;
//        goto e;
//    }
//    if (variable_synapse_index_counter<10100)
//        variable_synapse_index_counter=variable_synapse_index_counter+1;
//    else
//        variable_synapse_index_counter=0;
//    goto b;
//c:
//    std::cout << "The error has disappeared. Variable error = " << variable_error<< std::endl;
//    std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
//d:
//    fstream file;
//    file.open("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/synapses.txt-4",ios_base::out);
    
//    vector<unsigned long long>::iterator itr;
    
//    for(itr=list_of_synapses.begin();itr!=list_of_synapses.end();itr++)
//    {
//        file<<*itr<<endl;
//    }
    
//    file.close();
//    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    //    fstream file2;
//    //    file2.open("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/neurons_and_signal.txt",ios_base::out);
    
//    //    vector<unsigned long long>::iterator itr2;
    
//    //    for(itr2=list_of_neurons.begin();itr2!=list_of_neurons.end();itr2++)
//    //    {
//    //        file2<<*itr2<<endl;
//    //    }
    
//    //    file2.close();
//    std::cout << "The error has disappeared. Variable error = " << variable_error<< ". Это выход. "<<std::endl;
//            std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
}

