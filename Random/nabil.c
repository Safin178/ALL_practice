#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *pt;
 struct  Patient {
    char name[50];
    int age;
    char gender[10];
    char history[100];
};


 struct  Patient  p[100];
int n = 0,i;

void registerPatient();
void searchPatient();
void editPatientHistory();
void deletePatientRecord();
void readinfo();
void writeinfo();

int main() {
    int choice = 0;

    while (choice != 6) {
        
 
        printf("\nPatient Register System\n");
        printf("1. Register Patient\n");
        printf("2. Search Patient\n");
        printf("3. Edit Patient History\n");
        printf("4. Delete Patient Record\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            registerPatient();
            writeinfo();
        } else if (choice == 2) {
            searchPatient();
        } else if (choice == 3) {
            editPatientHistory();
        } else if (choice == 4) {
            deletePatientRecord();
            writeinfo();
            readinfo();
            writeinfo();
        } else if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}

void registerPatient() {
    
    system("CLS");
    readinfo();
    printf("\nRegister Patient\n");
    printf("Enter patient name: ");
    scanf(" %[^\n]", p[n].name);
    printf("Enter patient age: ");
    scanf("%d", &p[n].age);
   
    printf("Enter patient gender: ");
    scanf("%s", p[n].gender);
    printf("Enter patient medical history: ");
    scanf("%s", p[n].history);
    n++;

   
    writeinfo();

    printf("Patient registered successfully!\n");
}

void searchPatient() {
    char name[50];
    int found = 0;
     readinfo();
    printf("\nSearch Patient\n");
    printf("Enter patient name: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < n; i++) {
        if (strcmp(name, p[i].name) == 0) {
            printf("Patient found:\n");
            printf("Name: %s", p[i].name);
            printf("\nAge: %d\n", p[i].age);
            printf("Gender: %s", p[i].gender);
            printf("\nMedical History: %s\n\n", p[i].history);
            found = 1;
             
            break;
        }
    }
    writeinfo();
    if (!found) {
        printf("Patient not found!\n");
    }
}

void editPatientHistory() {
    char name[50];
    int found = 0;
    readinfo();
    
    printf("\nEdit Patient History\n");
    printf("Enter patient name: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < n; i++) {
        if (strcmp(name, p[i].name) == 0) {
            printf("Enter new medical history: ");
            scanf(" %[^\n]", p[i].history);

            printf("Patient history updated successfully!\n");
            found = 1;
             
            break;
        }
    }
    writeinfo();
    if (!found) {
        printf("Patient not found!\n");
    }
}

void deletePatientRecord() {
    char name[50];
    int found = 0;
    readinfo();
    writeinfo();
    printf("\nDelete Patient Record\n");
    printf("Enter patient name: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < n; i++) {
        if (strcmp(name, p[i].name) == 0) {
            for (int j = i; j < n - 1; j++) {
                p[j] = p[j + 1];
            }
            n--;
            printf("Patient record deleted successfully!\n");
            found = 1;
            
            break;
        }
    }

    if (!found) {
        printf("Patient not found!\n");
    }
}

void readinfo()
{
    pt = fopen("patient.txt", "r");
      fscanf(pt, "%d ", &n);
      for( i = 0 ; i < n ; i++)
      {
         fscanf(pt,"%[^\n]", p[i].name);
        fscanf(pt," %d ", &p[i].age);
        fscanf(pt," %s ", p[i].gender);
        fscanf(pt," %s ", p[i].history);
      }

      fclose(pt);
}
void writeinfo()
{

    pt = fopen("patient.txt", "w");
    fprintf(pt,"%d\n", n);
    for(i = 0 ; i < n; i++)
      {
        fprintf(pt, "%s\n", p[i].name);
        fprintf(pt,"%d\n", p[i].age);
        fprintf(pt,"%s\n", p[i].gender);
        fprintf(pt,"%s\n", p[i].history);
      }


}