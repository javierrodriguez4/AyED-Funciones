#include <iostream>

using namespace std;

/*Elabore una funcion para registro académico Ayed, que solicite Numero de curso y sus
correspondientes notas de periodo.  Cuyo prototipo es
int registroAcademico(int(int, int, int, int,int, int, int)
Curso, 1er Parcial, 2do Parcial, 1er Rec 1er P,2do R 1erP, 2do Rec 1er P, 2do R 2doP.
Cero en nota es ausente. Retorna 1..4: promocion, aprobado, no aprobado, ausente */

int registroAcademico(int p1, int p2){
    if( (p1>=6 && p1<8) && (p2>=6 && p2<8) ){
        return 1;
    }else if(p1>=8 && p2>=8){
        return 2;
    }else if(p1==0 || p2==0){
        return 3;
    }else if(p1<6 || p2<6){
        return 4;
    }
}

int main() {
    int curso, p1, p2, rp1, rp2, srp1, srp2, flag;
    cout <<"Ingrese el numero de comision"<<endl;
    cin >> curso;
    cout <<"Ingrese la nota del parcial 1:"<<endl;
    cin >> p1;
    cout <<"Ingrese la nota del parcial 2:"<<endl;
    cin >> p2;

    flag = registroAcademico(p1, p2);

    switch (flag) {
        case 1:
            cout <<"El Alumno del curso: "<<curso<<" APROBO la meteria"<<endl;
            break;
        case 2:
            cout <<"El Alumno del curso: "<<curso<<" PROMOCIONO la meteria"<<endl;
            break;
        case 3:
            cout <<"El Alumno del curso: "<<curso<<" quedo AUSENTE en la meteria"<<endl;
            break;
        case 4:
            cout <<"El Alumno del curso: "<<curso<<" DESAPROBO la meteria"<<endl;
            break;
    }

    return 0;
}
