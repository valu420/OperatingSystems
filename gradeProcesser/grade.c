#include <stdio.h>
#include <string.h>

// Definición de la estructura
struct Student {
    char name[50];
    int grade;
};

// Función para calcular el promedio de las calificaciones
float calculateAverage(struct Student students[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].grade;
    }
    return (float)sum / n;
}

// Función para encontrar la calificación más alta
int findHighestGrade(struct Student students[], int n) {
    int highest = students[0].grade;
    for (int i = 1; i < n; i++) {
        if (students[i].grade > highest) {
            highest = students[i].grade;
        }
    }
    return highest;
}

// Función para encontrar la calificación más baja
int findLowestGrade(struct Student students[], int n) {
    int lowest = students[0].grade;
    for (int i = 1; i < n; i++) {
        if (students[i].grade < lowest) {
            lowest = students[i].grade;
        }
    }
    return lowest;
}

int main() {
    int n;
    
    printf("¿Cuantos estudiantes hay en el curso de Sistemas Operativos? ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    // Recepción de los datos de los estudiantes
    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Ingrese la calificacion de %s: ", students[i].name);
        scanf("%d", &students[i].grade);
    }
    
    // Procesamiento de las calificaciones
    float average = calculateAverage(students, n);
    int highest = findHighestGrade(students, n);
    int lowest = findLowestGrade(students, n);
    
    // Mostrar resultados
    printf("\nResultados del curso de Sistemas Operativos:\n");
    for (int i = 0; i < n; i++) {
        printf("Estudiante: %s, Calificacion: %d", students[i].name, students[i].grade);
        if (students[i].grade >= 30) {
            printf(" (Aprobado)\n");
        } else {
            printf(" (Reprobado)\n");
        }
    }

    printf("\nPromedio de calificaciones: %.2f\n", average);
    printf("Calificacion mas alta: %d\n", highest);
    printf("Calificacion mas baja: %d\n", lowest);
    
    return 0;
}