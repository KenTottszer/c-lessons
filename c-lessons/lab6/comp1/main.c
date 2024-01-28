#include <stdio.h>



enum House {
    Griffindor, 
    Huffelpuff, 
    Ravenclaw, 
    Slytherin
};
typedef struct Student{
    char name[100];
    int age;
    float magic_attack;
    float magic_defense;
    float cleverness;
    enum House house;
}Student;

float force(Student stud){
    return stud.magic_attack+stud.magic_defense;

}




int main(){

    Student Friends[3]={{"Harry Potter", 13, 70, 68, 88, Griffindor},{"Ron Weasly", 13, 60, 70, 80, Griffindor},{"Hermonie Granger", 14, 55, 78, 90, Griffindor}};
    Student Foes[3]={{"Draco Malfoy", 13, 70, 68, 87, Slytherin},{"Gregory Goyle", 14, 76, 54, 66, Slytherin},{"Vincent Crabbe", 14, 60, 72, 65, Slytherin}};
    
    int max_index=0;
    int max_value=Foes[0].magic_attack+Foes[0].magic_defense;
    
    for(int i=1;i<3;i++){
        if(Foes[i].magic_attack+Foes[i].magic_defense>max_value){
        max_index=i;
        max_value=Foes[i].magic_attack+Foes[i].magic_defense;}
    }
    printf("The student with the strongest attributes combined in Foes is %s with %.0f\n",Foes[max_index].name,Foes[max_index].magic_attack+Foes[max_index].magic_defense);
    
    max_index=0;
    max_value=Friends[0].magic_attack+Friends[0].magic_defense;
    
    for(int i=1;i<3;i++){
        if(Friends[i].magic_attack+Friends[i].magic_defense>max_value){
        max_index=i;
        max_value=Friends[i].magic_attack+Friends[i].magic_defense;}
    }
    printf("The student with the strongest attributes combined in Friends is %s with %.0f\n",Friends[max_index].name,Friends[max_index].magic_attack+Friends[max_index].magic_defense);
    
    printf("force",)


return 0;
}