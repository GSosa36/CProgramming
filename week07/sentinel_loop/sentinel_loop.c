#include <stdio.h>


double sumStudentGradesSentinel(void);

double avgStudentGradesSentinel(void);

double getGrade(void);

/**************************************************************** */
int main(void){


       // printf("%.2lf\n", sumStudentGradesSentinel());

        printf("%.2lf\n", avgStudentGradesSentinel());


        for(int v = 15; v <= 45; v +=5){

        scan("%d",&v);
        printf("%d", v);
        }

        for(int a = 100; a>=2; a--){
            if(a % 2 == 0){
            scan("%d",&a);
            printf("%d", a);
            }
            }

    return 0;
}

/**************************************************************** */
double sumStudentGradesSentinel(void){

    double grade = 0;
    double total_grade = 0;

    while(grade != -1){ // -1 is out sentinel value

        // Get the grade

        printf("Enter the grade:");
        scanf("%lf", &grade);

        total_grade += grade;

    }



    return total_grade;
}
/**************************************************************** */
// TODO don't could -1 as a grade
// TODO don't divide by 0
double avgStudentGradesSentinel(void){

    double grade = 0;
    double total_grade = 0;
    int n_grade = 0;

    while(grade != -1){ // -1 is out sentinel value

        // Get the grade

        grade = getGrade();

        //printf("Enter the grade (-1 to exit):");
        //scanf("%lf", &grade);

        // Get the total
    if (grade >= 0){
        total_grade += grade;
        n_grade++;
    }
    }

    if(n_grade >= 1){
        
    return total_grade / n_grade;

    } else{

        return total_grade;
    }


}

/**************************************************************** */
double getGrade(void){

    // Return only grades in the range [-1; 100]

    double grade;

    //do while loop

    do {

    printf("Enter the grade (-1 to exit):");
    scanf("%lf", &grade); 
        if (grade < -1 || grade > 100){

            puts("INCORRECT GRADE! Try again");

        }
    } while(grade < -1 || grade > 100);

    

    return grade;



}


