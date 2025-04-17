#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30
#define STREET_SIZE 30
#define CITY_SIZE 30
#define CLASS_SIZE 48

/***********************************************************************/


typedef struct{

char street[STREET_SIZE];
char city[CITY_SIZE];
int zip_code;

} Address;


// Create a new data type (Create a structure)
typedef struct {

    // The members (variables) of a structure
    char first_name[NAME_SIZE];
    int age;
    Address home_address;

} Student;

typedef struct{

    int n_students;
    Student roaster[CLASS_SIZE];


} Class;

/********************************************************************/

void printStudentInfo(const  Student *st);

void printAddress(const Address *adr);

Student createStudent(char *name, int age, char *city, char *street, int zip);

void printClassRoaster(const Class *cl);

void printYoungest(const Class *cl);


/********************************************************************/

int main(){

    // Create an address object
    Address adr = {.city = "Lakeland", .street = "Main", .zip_code = 33876};

    printAddress(&adr);

    // Create and initialize a student object
    Student st1 = {.first_name = "Mike", .age = 20, .home_address = {
                    .city = "Tampa",
                     .street = "Orange",
                      .zip_code = 32875}
                };

    printStudentInfo(&st1);

    // Create the second student with a function
    Student st2 = createStudent("Bob", 34, "Orlando", "Apple", 34567);
    printStudentInfo(&st2);

    // Create a class object
    Class COP2271 = {.n_students = 2, .roaster = {st1, st2}};

    // Add the third student to the class
    Student st3 = createStudent("Lilly", 19, "Kissimmee", "Surf", 34747);

    COP2271.roaster[COP2271.n_students] = st3;
    COP2271.n_students++;
 
    printClassRoaster(&COP2271); 

    return 0;

}

/********************************************************************/

void printStudentInfo(const Student *st){
    

    printf("%s\n", st->first_name);
    printf("%d\n", st->age);
    printAddress(&st->home_address);


}   


/********************************************************************/

void printAddress(const Address *adr){

    printf("%s\n%s\n%d\n", adr->street, adr->city, adr->zip_code);



}

/********************************************************************/

Student createStudent(char *name, int age, char *city, char *street, int zip){

    Student st;

    strcpy(st.first_name, name);
    strcpy(st.home_address.city, city);
    strcpy(st.home_address.street, street);
    st.age = age;
    st.home_address.zip_code = zip;

    return st;
}


/********************************************************************/


void printClassRoaster(const Class *cl){

    for(int i = 0; i < cl->n_students; i++){

        printStudentInfo(&cl->roaster[i]);

    }


}

/********************************************************************/

void printYoungest(const Class *cl){

    int smallest = &cl->roaster[0];

    for(int i = 1; cl->n_students; i++){

        if(smallest > &cl->roaster[i]);
        smallest = &cl-roaster[i];

    }




}