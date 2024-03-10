#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
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
#include <string>
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
QString Nazvaniye_fayla_s_neyronami_i_signalom;
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   QFile f("/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_2/название файла с нейронами и сигналами.txt");
   if (f.open(QFile::ReadOnly | QFile::Text))
   {
   QTextStream in(&f);

   Nazvaniye_fayla_s_neyronami_i_signalom= in.readAll().toStdString().c_str();
   std::cout // << f.size()
       << Nazvaniye_fayla_s_neyronami_i_signalom.toStdString()//in.readAll().toStdString().c_str()
       << endl;
 //  goto c;
   }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "cycle_of_distinguishing_a_one_with_vectors_GUI"<< std::endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::ifstream is( //NOTE: сигналы 1
 // "/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/neurons_and_signal.txt" // 1.bmp
   //   "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1-1/neyroni_i_signal.txt" // 1-1.bmp
       
     //  "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/0/neyroni_i_signal.txt"
        // 1:
      //  "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1/neurons_and_signal-2.txt" //NOTE: BMP
        // 2:
    //    "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1-1(2)/neyroni_i_signal.txt"
        // 3:
     // "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/0-2/neurons_and_signal.txt"
        Nazvaniye_fayla_s_neyronami_i_signalom.toStdString().c_str()
      //NOTE: считывание в вектор нейронов и сигналов из файла (НАДО Менять для подстройки)
        );
    std::istream_iterator<unsigned long long> start(is), end;
    std::vector<unsigned long long> list_of_neurons(start, end);
    
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
    
// NOTE: блок отключаемый для настройки сопротивлений
    
    // *** начало блока ***
    
    // : После настройки синапсов надо включить (раскомментировать) загрузку из файла error
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
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
//    else
        // если файла с ошибкой нет
    
   // *** конец блока ***
    
// если хотим включить настройку сопротивлений синапсов блок отсюда и выше до 66 строки закомментируем (отключим)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///         
    variable_error     =   1073741824-list_of_neurons[200] ; // 1843778052
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     
// тут видимо считать из файла 201 нейрон   
// если мы подстроили несколько файлов надо обязательно снять коммент с чтения файла ошибки то есть ошибка должна читаться из файла    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
    if //(eto_ne_1==true)
    //    (list_of_neurons[200]>=1073741824 )
        ( variable_error <=0)
    // если  ошибка <= 0
    // NOTE: УжЕ НЕ НАДО поменять логику на противоположную
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
// если ошибки нет то на выход
    if (variable_error<=0) // тут видимо надо менять на если ошибка = или > то на выход то есть ошибка пропадает если становится > 0
        goto d;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     
    std::cout << "variable_error = " << variable_error<< std::endl;
    std::cout << "Variable error = 1073741824-list_of_neurons[200] = " << 1073741824-list_of_neurons[200]<< std::endl;
    std::cout << "list_of_neurons[200]  = " << list_of_neurons[200]  << std::endl;
b:
    // NOTE: решение
////////////////////////////////////////////// Solution function ////////////////////////////////////////////////////////////
    for ( var = 100; var < 200; ++var) // This is the range of neurons
    {
        for (int neuron_index = 0, synapse_index = 0;   neuron_index < 200, synapse_index < 10100;   ++neuron_index, synapse_index = synapse_index + 100)
        
        {
            // sigpe арифметическое исключение: (СИНАПСЫ бЫЛИ 0 ДЕление на 0)
            list_of_neurons[var]=list_of_neurons[var]+  (list_of_neurons[neuron_index]/ list_of_synapses[synapse_index]);    
        }
    }
    
    for (int   neuron_index = 100, synapse_index = 10000; neuron_index < 200;   ++neuron_index, ++synapse_index)
    {
        list_of_neurons[200] = list_of_neurons[200] + (list_of_neurons[neuron_index] / list_of_synapses[synapse_index]);
    }
    variable_error     =   1073741824-list_of_neurons[200] ;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     
//    if (variable_error<=0) // тут видимо надо менять на если ошибка = или > то на выход то есть ошибка пропадает если становится > 0
//        goto d;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     
      //  std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
    // std::cout << "variable_error = " << variable_error<< std::endl;
    if (variable_error<=0) // to the exit
       // goto c;
        goto d;
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
//c:
//    std::cout << "The error has disappeared. Variable error = " << variable_error<< std::endl;
//    std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
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
    fstream file3;
    file3.open(
        // NOTE: сигналы 2
      //  "/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/neurons_and_signal.txt"
        // 1:
   //   "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1/neurons_and_signal-2.txt"
        // 2:
     // "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1-1(2)/neyroni_i_signal.txt"
        // 3:
      // "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/0-2/neurons_and_signal.txt"
        Nazvaniye_fayla_s_neyronami_i_signalom.toStdString().c_str()
        ,ios_base::out);
   
    vector<unsigned long long>::iterator itr2;
    
    for(itr2=list_of_neurons.begin();itr2!=list_of_neurons.end();itr2++)
    {
        file3<<*itr2<<endl;
    }
    
    file3.close();
                                                                         
    std::cout << "The error has disappeared. Variable error = " << variable_error<< ". Это выход. "<<std::endl;
    std::cout << "list_of_neurons[200] = " << list_of_neurons[200]<< std::endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
// При нажатии на кнопку "Не правильно" надо ошибку изменить на 0   
// Записать ошибку в файл
    QFile fileOut(
     //   "/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors_GUI/error.txt"
            "/home/viktor/my_projects_qt_2/Sgenerirovannye_fayly/1/error.txt"      
                  ); // Связываем объект с файлом fileout.txt
    if(fileOut.open(QIODevice::WriteOnly | QIODevice::Text)) 
    { // Если файл успешно открыт для записи в текстовом режиме
        QTextStream writeStream(&fileOut); // Создаем объект класса QTextStream
        // и передаем ему адрес объекта fileOut
        writeStream << //long long
            QString::number(variable_error); // Посылаем строку в поток для записи
        fileOut.close(); // Закрываем файл
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// \brief file2
    /// запись 201 нейрона в файл
    fstream file2;
    file2.open("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors/201.txt",ios_base::out);
    

    {

        file2<< list_of_neurons[200];
    }
    
    file2.close();       
// записываем решающий нейрон. В принципе можно не записывать.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
    if       ( variable_error <=0)
    {ui->label->setText("Программа считает что это 1.");} // меняем на это 1
    else {        ui->label->setText("Программа считает что это не 1.");    } //  меняем на это не 1
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 QProcess().execute("/home/viktor/my_scripts_2/zvuk.sh");
//  c:  
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::~Dialog
///
Dialog::~Dialog()
{
    delete ui;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief convertULongLongToString
/// \param number
/// \return 
///
std::string convertULongLongToString(unsigned long long number) {
    std::string result;
    do {
        char digit = '0' + (number % 10);
        result = digit + result;
        number /= 10;
    } while (number > 0);
    return result;
}
void Dialog::on_pushButton_clicked()
{
    //
//   variable_error=1;
//    // создать файл и записать туда ошибку? Потом перезапустить программу?
   
//   QFile fileOut("/home/viktor/my_projects_qt_2/cycle_of_distinguishing_a_one_with_vectors_GUI/error.txt"); // Связываем объект с файлом fileout.txt
//   if(fileOut.open(QIODevice::WriteOnly | QIODevice::Text)) 
//   { // Если файл успешно открыт для записи в текстовом режиме
//       QTextStream writeStream(&fileOut); // Создаем объект класса QTextStream
//       // и передаем ему адрес объекта fileOut
//       writeStream << "1"; // Посылаем строку в поток для записи
//       fileOut.close(); // Закрываем файл
    //}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     КАК эту процедуру назвать? Предварительный поиск ошибки?
// 1а. Ставим синапсы на минимум то есть все на 1. Наверное и 201 нейрон надо поставить на 0?
    // 1. считываем синапсы из файла все по 1
    // 2. Считывем нейроны из файла
    // 3. Решаем то есть считаем 201 нейрон
    // 4. Считаем ошибку
  // 1b.
    // 1. считываем синапсы из файла все по 2147483646
    // 2. Считывем нейроны из файла
    // 3. Решаем то есть считаем 201 нейрон
    // 4. Считаем ошибку
    // то есть проверяем возможно ли вообще убрать ошибку в принципе
    // c того конца который ближе к уничтожению ошибки начинаем либо прибавлять либо вычитать по 1
    // node cherrytree: единица vector
    

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// запускаем эту программу заново а этот экземплят текущий закрываем

        // restart:
    // NOTE: может тут новую Программу запустить?
  //  QProcess::execute("/home/viktor/my_projects_qt_2/build-bez_1-Desktop_Qt_5_12_12_GCC_64bit-Debug/bez_1");
     QProcess::startDetached("/home/viktor/my_projects_qt_2/build-bez_1-Desktop_Qt_5_12_12_GCC_64bit-Debug/bez_1", qApp->arguments());  
       qApp->quit();
//    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
// Видимо из файлов можно не читать ведь данные в векторах
 // for (int x=0; x<15; x++)
    {
       // std::cout<< list_of_neurons[0]<< std::endl;
       // for (unsigned long long elem : list_of_neurons) cout << elem <<std::endl;
      //  std::cout<< list_of_neurons[0] << std::endl<unsigned long long , std::char_traits<unsigned long long >>;
//       std::cout// << "list_of_neurons[200]  = "
//           << list_of_neurons[200]  << std::endl;
     //   std::cout << "variable_error = " << variable_error<< std::endl;
       // ui->label->setText("Программа считает что это не 1.");
   //    ui->textEdit->append (QString::number(list_of_neurons[x]));
    //   _itoa_s(x, str, 100, 10);
    //   unsigned long long number = 12345678901234567890ULL;
//       std::string str = std::to_string(list_of_neurons[x]);
//       std::cout << str << std::endl;
//       std::string str = convertULongLongToString(list_of_neurons[x]);
//       std::cout << "Method 2 Output: " << str << std::endl;
    }
}

