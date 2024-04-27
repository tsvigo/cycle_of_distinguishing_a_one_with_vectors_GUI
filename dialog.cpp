// Не распознана 1.
#include "dialog.h"
#include "ui_dialog.h"
#include <fstream>
#include <iostream>
using namespace std;
//#include "ui_dialog.h"
//#include "dialog.h"
#include <csetjmp>
#include <QTextStream>
#include <QFile>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
std::vector<unsigned long long> list_of_synapses ;
std::vector<unsigned long long int> list_of_neurons[201] ;//={};
long long variable_error;
int var ;
int neuron_index, synapse_index;
int variable_synapse_index_counter=0;
bool eto_ne_1;
QString    Nazvaniye_fayla_s_neyronami_i_signalom="";
unsigned long long int polovina_maximalnogo_chisla=1073741824;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
extern bool eto_ne_1;
std::jmp_buf f;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
   ui->setupUi(this);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// тут по-моему ошибка
    /// Читает нейроны и сигнал из файла. Как вроде должен читать и... Почему он тут читает из какого-то непонятного файла? Он же вроде должен читать из файла который не правильно определился не распознал 1. Если так то он должен читать из файла 
    /// /home/viktor/my_projects_qt_2/Funktsiya_Resheniya_2/название файла с нейронами и сигналами.txt
    /// точнее не из файла а прочитать название файла и из него загрузиться в вектор
    /// 
QString firstLine;
QFile file("/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_2/название файла с нейронами и сигналами.txt");
if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream in(&file);
    firstLine = Nazvaniye_fayla_s_neyronami_i_signalom=in.readLine();
    file.close();
} else {
    // Обработка ошибки открытия файла
}
    /// 

    /// 
    std::ifstream is(
      //  "/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/neurons_and_signal.txt"
     Nazvaniye_fayla_s_neyronami_i_signalom.toUtf8().constData()
        );
    std::istream_iterator<unsigned long long> start(is), end;
    std::vector<unsigned long long> list_of_neurons(start, end);
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// читает синапсы из файла
    ///   Для синапсов тоже должен быть один файл.
    /// 
    std::ifstream is2(
    //"/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/synapses.txt"
    "/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_2/synapses.txt"
    );
    std::istream_iterator<unsigned long long> start2(is2), end2;
    std::vector<unsigned long long> list_of_synapses(start2, end2);
   // f:
   // std::jmp_buf f;
    // std::longjmp(f, true); // Go to error handler
    
    variable_error     =   1073741824-list_of_neurons[200] ;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
    if //(eto_ne_1==true)
        (list_of_neurons[200]<=1073741824 ) // TODO: поменять логику на противоположную
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
            
            list_of_neurons[var]=list_of_neurons[var]+  (list_of_neurons[neuron_index]/ list_of_synapses[synapse_index]);    
        } // складываем нейроны
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
    // 
    if (list_of_synapses[variable_synapse_index_counter] ==1)
    {
        variable_synapse_index_counter = variable_synapse_index_counter+1;
        goto e;
    }
    if (variable_synapse_index_counter<10100)
        variable_synapse_index_counter=variable_synapse_index_counter+1;
        // c начала вычитаем по 1 int variable_synapse_index_counter=0;
    else
        variable_synapse_index_counter=0;
    goto b;
c:
    std::cout << "The error has disappeared. Variable error = " << variable_error<< std::endl;
    std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
d:
    fstream file2;
    file2.open("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/synapses.txt",ios_base::out);
    
    vector<unsigned long long>::iterator itr;
    
    for(itr=list_of_synapses.begin();itr!=list_of_synapses.end();itr++)
    {
        file2<<*itr<<endl;
    }
    
    file2.close();
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

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
   variable_error=1;
  //  list_of_neurons[200]=1073741823; 4294967295
   
  //  goto f;
//    setjmp(f);
    if (variable_error<=0) // тут видимо надо менять на если ошибка = или > то на выход то есть ошибка пропадает если становится > 0
        goto d;
    std::cout << "variable_error = " << variable_error<< std::endl;
//  unsigned long long int raznosty= polovina_maximalnogo_chisla-list_of_neurons[200];
  //  std::cout << "Variable error = 1073741824-list_of_neurons[200] = " << polovina_maximalnogo_chisla-list_of_neurons[200]<< std::endl;
 //   std::cout << "list_of_neurons[200]  = " << list_of_neurons[200]  << std::endl;
b:
    ////////////////////////////////////////////// Solution function ////////////////////////////////////////////////////////////
    for ( var = 100; var < 200; ++var) // This is the range of neurons
    {
        for (int neuron_index = 0, synapse_index = 0;   neuron_index < 200, synapse_index < 10100;   ++neuron_index, synapse_index = synapse_index + 100)
        
        {
            
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
    file.open("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/synapses.txt",ios_base::out);
    
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
}

