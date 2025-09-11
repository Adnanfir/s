#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()
#include <string.h>
struct student
{
    char name[50];
    int age;
    float gpa;
    int id;
    char address[100];
    char phone[15];
    char email[50];
    char major[50];
    char department[50];
    int year_of_study;
    int semester;
    char Student_username[50];
    char Student_password[50];
};
struct teacher
{
    char name[50];
    int age;
    char Position[50];
    int id;
    char email[50];
    char phone[15];
    char address[100];
    char department[50];
    int years_of_experience;
    char qualifications[100];
    char office_location[50];
    char teacher_username[50];
    char teacher_password[50];
};
struct Administration
{
    char name[50];
    int age;
    char Position[50];
    int id;
    char email[50];
    char phone[15];
    char address[100];
    char department[50];
    int years_of_experience;
    char qualifications[1000];
    char office_location[50];
    char admin_username[50];
    char admin_password[50];
};
struct course
{
    char title[100];
    int credits;
};
struct Finance
{
    int Student_fee;
    int Teacher_Paycheck;
};
struct university
{
    struct student students[100];
    struct teacher teachers[50];
    struct course courses[20];
    struct Administration admin[10];
    struct Finance finance[10];
};
int register_student(struct university *uni, int initialization)
{
    int index = 0;
    printf("Enter the number of students to register: ");
    scanf("%d", &index);
    index = initialization + index;
    printf("%d", index);
    if (index > 100)
    {
        printf("Cannot register more than 100 students.\n");
        return initialization;
    }
    printf("Registering %d students...\n", index - initialization);

    // Loop to register each student

    for (int i = initialization; i < index; i++)
    {
        printf("Enter student name: ");
        scanf("%s", &uni->students[i].name);
        printf("Enter age: ");
        scanf("%d", &uni->students[i].age);
        printf("Enter GPA: ");
        scanf("%f", &uni->students[i].gpa);
        uni->students[i].id = rand() % 1000; // Random ID
        printf("Enter address: ");
        scanf("%s", &uni->students[i].address);
        printf("Enter phone: ");
        scanf("%s", &uni->students[i].phone);
        printf("Enter email: ");
        scanf("%s", &uni->students[i].email);
        printf("Enter major: ");
        scanf("%s", &uni->students[i].major);
        printf("Enter department: ");
        scanf("%s", &uni->students[i].department);
        printf("Enter year of study: ");
        scanf("%d", &uni->students[i].year_of_study);
        printf("Enter semester: ");
        scanf("%d", &uni->students[i].semester);
        printf("Student id: %d\n", uni->students[i].id);
    }
    printf("Registered %d students successfully.\n", index - initialization);
    initialization = index - initialization;
    strcpy(uni->students[initialization].Student_password, "password"); // Default password
    printf("Student password set to 'password'.\n");
    printf("Student registration complete.\n");
    printf("Registered %d students successfully.\n", index);
    return index;
}
int register_teacher(struct university *uni, int ini)
{
    int index = 0;
    printf("Enter the number of teachers to register: ");
    scanf("%d", &index);
    if (index > 50)
    {
        printf("Cannot register more than 50 teachers.\n");
        return -1;
    }
    printf("Registering %d teachers...\n", index);
    index = index + ini;
    // Loop to register each teacher
    for (int i = ini; i < index; i++)
    {
        printf("Enter teacher name: ");
        scanf("%s", &uni->teachers[i].name);
        printf("Enter age: ");
        scanf("%d", &uni->teachers[i].age);
        printf("Enter position: ");
        scanf("%s", &uni->teachers[i].Position);
        uni->teachers[i].id = rand() % 1000; // Random ID
        printf("Enter email: ");
        scanf("%s", &uni->teachers[i].email);
        printf("Enter phone: ");
        scanf("%s", &uni->teachers[i].phone);
        printf("Enter address: ");
        scanf("%s", &uni->teachers[i].address);
        printf("Enter department: ");
        scanf("%s", &uni->teachers[i].department);
        printf("Enter years of experience: ");
        scanf("%d", &uni->teachers[i].years_of_experience);
        printf("Enter qualifications: ");
        scanf("%s", &uni->teachers[i].qualifications);
        printf("Enter office location: ");
        scanf("%s", &uni->teachers[i].office_location);
        printf("Teacher ID: %d\n", uni->teachers[i].id);
    }
    printf("Registered %d teachers successfully.\n", index - ini);
    return index;
}
void displayingstudentinfo(struct university *uni, int count1, int count2)
{
    printf("Do you want to see 1 . student info 2. Teacher info\n");
    int choice1;
    scanf("%d", &choice1);
    if (choice1 == 1)
    {
        printf("Student Registry:\n");
        printf("------------------\n");
        printf("Displaying %d students:\n", count1);

        for (int i = 0; i < count1; i++)
        {
            printf("Student %d: %s\n", i + 1, uni->students[i].name);
        }
        printf("See Details of any student: 1.Yes 2. No \n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter the student number to see details: ");
            int student_number;
            scanf("%d", &student_number);
            if (student_number > 0 && student_number <= count1)
            {
                printf("Details of Student %d:\n", student_number);
                printf("Name: %s\n", uni->students[student_number - 1].name);
                printf("Age: %d\n", uni->students[student_number - 1].age);
                printf("GPA: %.2f\n", uni->students[student_number - 1].gpa);
                printf("ID: %d\n", uni->students[student_number - 1].id);
                printf("Address: %s\n", uni->students[student_number - 1].address);
                printf("Phone: %s\n", uni->students[student_number - 1].phone);
                printf("Email: %s\n", uni->students[student_number - 1].email);
                printf("Major: %s\n", uni->students[student_number - 1].major);
                printf("Department: %s\n", uni->students[student_number - 1].department);
                printf("Year of Study: %d\n", uni->students[student_number - 1].year_of_study);
                printf("Semester: %d\n", uni->students[student_number - 1].semester);
            }
            else
            {
                printf("Invalid student number.\n");
            }
        }
    }
    else if (choice1 == 2)
    {
        printf("Teacher Registry:\n");
        printf("------------------\n");
        printf("Displaying %d teachers:\n", count2);

        for (int i = 0; i < count2; i++)
        {
            printf("Teacher %d: %s\n", i + 1, uni->teachers[i].name);
        }
        printf("See Details of any teacher: 1.Yes 2. No \n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter the teacher number to see details: ");
            int teacher_number;
            scanf("%d", &teacher_number);
            if (teacher_number > 0 && teacher_number <= count2)
            {
                printf("Details of Teacher %d:\n", teacher_number);
                printf("Name: %s\n", uni->teachers[teacher_number - 1].name);
                printf("Age: %d\n", uni->teachers[teacher_number - 1].age);
                printf("Position: %s\n", uni->teachers[teacher_number - 1].Position);
                printf("ID: %d\n", uni->teachers[teacher_number - 1].id);
                printf("Address: %s\n", uni->teachers[teacher_number - 1].address);
                printf("Email: %s\n", uni->teachers[teacher_number - 1].email);
                printf("Phone: %s\n", uni->teachers[teacher_number - 1].phone);
                printf("Department: %s\n", uni->teachers[teacher_number - 1].department);
                printf("Years of Experience: %d\n", uni->teachers[teacher_number - 1].years_of_experience);
                printf("Qualifications: %s\n", uni->teachers[teacher_number - 1].qualifications);
                printf("Office Location: %s\n", uni->teachers[teacher_number - 1].office_location);
            }
            else
            {
                printf("Invalid teacher number.\n");
            }
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }
}
int Admin_Access(struct university *uni, int *student_count, int *teacher_count,int admin_count)
{

    // Function to handle admin access
    printf("To access admin functionalities, please enter the admin credentials.\n");
    printf("Enter  1. Username 2.id\n");
    char admin_username[50];
    int choice;
    int admin_id;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter admin username: ");
        admin_username[50];
        scanf("%s", admin_username);
    }
    else if (choice == 2)
    {
        printf("Enter admin ID: ");
        admin_id;
        scanf("%d", &admin_id);
    }
    else
    {
        printf("Invalid choice.\n");
    }
    printf("Enter admin password: ");
    char admin_password[50];
    scanf("%s", admin_password);
    // printf("%d", sizeof(uni->admin) / sizeof(uni->admin[0]));
    for (int i = 0; i < admin_count; i++)
    {
        if (strcmp(admin_username, uni->admin[i].admin_username) == 0 && strcmp(admin_password, uni->admin[i].admin_password) == 0 || admin_id == uni->admin[i].id && strcmp(admin_password, uni->admin[i].admin_password) == 0)
        { // Example check, replace with actual logic
            printf("Admin access granted.\n");
            printf("Welcome, %s!\n", uni->admin[i].name);
            printf("You can now register students and teachers.\n");

            int choice;
            do
            {
                printf("1. Register Student\n");
                printf("2. Register Teacher\n");
                printf("3. Display Student and Teacher Info\n");
                printf("4. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                    printf("Registering students...\n");
                    *student_count = register_student(uni, *student_count);
                    if (*student_count == -1)
                    {
                        printf("Failed to register students.\n");
                    }
                    else
                    {
                        printf("Total registered students: %d\n", student_count);
                    }
                    break;
                case 2:
                    printf("Registering teachers...\n");
                    *teacher_count = register_teacher(uni, *teacher_count);
                    if (*teacher_count == -1)
                    {
                        printf("Failed to register teachers.\n");
                    }
                    else
                    {
                        printf("Total registered teachers: %d\n", *teacher_count);
                    }
                    break;
                case 3:
                    displayingstudentinfo(uni, *student_count, *teacher_count);
                    break;
                case 4:
                    printf("Exiting admin functionalities.\n");

                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
                }
            } while (choice != 4);
        }

        else
        {
            printf("Invalid admin credentials.\n");
        }
    }
}
int Registering_Administration(struct university *uni, int initialization)
{
    printf("Registering Administration...\n");
    int count = count + initialization;

    printf("Enter the number of administration members to register: ");
    scanf("%d", &count);
    if (count > 10)
    {
        printf("Cannot register more than 10 administration members.\n");
    }
    for (int i = initialization; i < count; i++)
    {
        printf("Enter admin name: ");
        scanf("%s", uni->admin[i].name);
        printf("Enter age: ");
        scanf("%d", &uni->admin[i].age);
        printf("Enter position: ");
        scanf("%s", uni->admin[i].Position);
        uni->admin[i].id = rand() % 1000; // Random ID
        printf("Enter email: ");
        scanf("%s", &uni->admin[i].email);
        printf("Enter phone: ");
        scanf("%s", &uni->admin[i].phone);
        printf("Enter address: ");
        scanf("%s", &uni->admin[i].address);
        printf("Enter department: ");
        scanf("%s", &uni->admin[i].department);
        printf("Enter years of experience: ");
        scanf("%d", &uni->admin[i].years_of_experience);
        printf("Enter qualifications: ");
        scanf("%s", &uni->admin[i].qualifications);
        printf("Enter office location: ");
        scanf("%s", &uni->admin[i].office_location);
        printf("Admin ID: %d\n", uni->admin[i].id);
        // Generate random username and password for admin
        // Register admin credentials
        printf("Registering admin credentials...\n");
        printf("Enter admin username: ");
        scanf("%s", uni->admin[i].admin_username);
        printf("Enter admin password: ");
        scanf("%s", uni->admin[i].admin_password);
    }
    printf("Administration registered successfully.\n");
    initialization = count;
    return initialization;
}
void Student_Access(struct university *uni)
{
    // Function to handle student access
    printf("To access student functionalities, please enter your student ID/username and password.\n");
    printf("Enter 1. ID 2. Email\n");
    int option;
    int student_id;
    char student_email[50];
    scanf("%d", &option);
    switch (option)
    {
    case 1: // ID
        printf("Enter student ID: ");
        student_id;
        scanf("%d", &student_id);
        break;
    case 2: // Email
        printf("Enter student email: ");
        student_email[50];
        scanf("%s", student_email);
        break;

    default:
        printf("Invalid option. Please try again.\n");
        return; // Exit if invalid option
        break;
    }
    char student_password[50];
    printf("Enter student password: ");
    scanf("%s", student_password);

    for (int i = 0; i < sizeof(uni->students) / sizeof(uni->students[0]); i++)
    {
        if (student_id == uni->students[i].id && strcmp(student_password, uni->students[i].Student_password) == 0 || strcmp(student_email, uni->students[i].email) && strcmp(student_password, uni->students[i].Student_password) == 0)
        { // Example check, replace with actual logic
            printf("Student access granted.\n");
            printf("Welcome, %s!\n", uni->students[i].name);
            printf("You can now view your information.\n");
            printf("Name: %s\n", uni->students[i].name);
            printf("Email: %s\n", uni->students[i].email);
            printf("ID: %d\n", uni->students[i].id);
            printf("Address: %s\n", uni->students[i].address);
            printf("Phone: %s\n", uni->students[i].phone);
            printf("Major: %s\n", uni->students[i].major);
            printf("Department: %s\n", uni->students[i].department);
            printf("Year of Study: %d\n", uni->students[i].year_of_study);
            printf("Semester: %d\n", uni->students[i].semester);
            printf("GPA: %.2f\n", uni->students[i].gpa);
            printf("\n \n");
            printf("You can now access your courses and grades.\n");
            // Add functionality to access courses and grades here
            return;
        }
    }

    printf("Invalid student credentials.\n");
}
void Teacher_Access(struct university *uni)
{
    // Function to handle teacher access
    printf("To access teacher functionalities, please enter your teacher ID/username and password.\n");
    printf("Enter 1. ID 2. Email\n");
    int option;
    int teacher_id;
    char teacher_email[50];
    scanf("%d", &option);
    switch (option)
    {
    case 1: // ID
        printf("Enter teacher ID: ");
        teacher_id;
        scanf("%d", &teacher_id);
        break;
    case 2: // Email
        printf("Enter teacher email: ");
        teacher_email[50];
        scanf("%s", teacher_email);
        break;

    default:
        printf("Invalid option. Please try again.\n");
        return; // Exit if invalid option
        break;
    }
    char teacher_password[50];
    printf("Enter teacher password: ");
    scanf("%s", teacher_password);

    for (int i = 0; i < sizeof(uni->teachers) / sizeof(uni->teachers[0]); i++)
    {
        if (teacher_id == uni->teachers[i].id && strcmp(teacher_password, uni->teachers[i].teacher_password) == 0 || strcmp(teacher_email, uni->teachers[i].email) == 0)
        { // Example check, replace with actual logic
            printf("Teacher access granted.\n");
            printf("Welcome, %s!\n", uni->teachers[i].name);
            printf("You can now view your information.\n");
            printf("Name: %s\n", uni->teachers[i].name);
            printf("Email: %s\n", uni->teachers[i].email);
            printf("ID: %d\n", uni->teachers[i].id);
            printf("Address: %s\n", uni->teachers[i].address);
            printf("Phone: %s\n", uni->teachers[i].phone);
            printf("Department: %s\n", uni->teachers[i].department);
            printf("Years of Experience: %d\n", uni->teachers[i].years_of_experience);
            printf("Qualifications: %s\n", uni->teachers[i].qualifications);
            printf("Office Location: %s\n", uni->teachers[i].office_location);
            printf("\n \n");
            return;
        }
    }

    printf("Invalid teacher credentials.\n");
}
void Updating_data(struct university *uni, int student_count, int teacher_count, int admin_count)
{
    int p = 1;
    FILE *file2 = fopen("Admin.txt", "a+");
    FILE *file = fopen("Student.txt", "a+");
    FILE *file1 = fopen("Teacher.txt", "a+");
    while (p)
    {
        int x;
        printf("Enter 1 to update student data, 2 to update teacher data, 3 to update admin data, 4 to exit: ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            /*Update student data*/

            if (file == NULL)
            {
                printf("Error opening Student.txt.\n");
                return;
            }

            printf("Updating student data...\n");

            for (int i = 0; i < student_count; i++)
            {
                if (strlen(uni->students[i].name) == 0)
                    continue;
                printf("%d", student_count);
                char buffer[1000] = {};
                snprintf(buffer, sizeof(buffer),
                         "Name: %s\nAge: %d\nGPA: %.2f\nID: %d\nAddress: %s\nPhone: %s\nEmail: %s\nMajor: %s\nDepartment: %s\nYear: %d\nSemester: %d\n",
                         uni->students[i].name,
                         uni->students[i].age,
                         uni->students[i].gpa,
                         uni->students[i].id,
                         uni->students[i].address,
                         uni->students[i].phone,
                         uni->students[i].email,
                         uni->students[i].major,
                         uni->students[i].department,
                         uni->students[i].year_of_study,
                         uni->students[i].semester

                );
                printf("%s", buffer);
                fputs(buffer, file);
            }

            fclose(file);
            printf("Student data updated successfully.\n");
            break;
        case 2:
            /*Update teacher data*/
            if (file1 == NULL)
            {
                printf("Error opening Teacher.txt.\n");
                return;
            }

            printf("Updating teacher data...\n");

            for (int i = 0; i < teacher_count; i++)
            {
                if (strlen(uni->teachers[i].name) == 0)
                    continue;

                char buffer1[1000] = {};
                snprintf(buffer1, sizeof(buffer1),
                         "Name: %s\nAge: %d\nID: %d\nPhone: %s\nEmail: %s\nDepartment: %s\nYears of Experience: %d\nQualifications: %s\nOffice Location: %s\n",
                         uni->teachers[i].name,
                         uni->teachers[i].age,
                         uni->teachers[i].id,
                         uni->teachers[i].phone,
                         uni->teachers[i].email,
                         uni->teachers[i].department,
                         uni->teachers[i].years_of_experience,
                         uni->teachers[i].qualifications,
                         uni->teachers[i].office_location);

                fputs(buffer1, file1);
            }

            fclose(file1);
            printf("Teacher data updated successfully.\n");
            break;
        case 3:
            /*Update admin data*/

            if (file2 == NULL)
            {
                printf("Error opening Admin.txt.\n");
                return;
            }

            printf("Updating admin data...\n");

            for (int i = 0; i < admin_count; i++)
            {
                if (strlen(uni->admin[i].name) == 0)
                    continue;

                char buffer2[1000] = {};
                snprintf(buffer2, sizeof(buffer2),
                         "Name: %s\nAge: %d\nID: %d\nPhone: %s\nEmail: %s\nDepartment: %s\nYears of Experience: %d\nQualifications: %s\nOffice Location: %s\n",
                         uni->admin[i].name,
                         uni->admin[i].age,
                         uni->admin[i].id,
                         uni->admin[i].phone,
                         uni->admin[i].email,
                         uni->admin[i].department,
                         uni->admin[i].years_of_experience,
                         uni->admin[i].qualifications,
                         uni->admin[i].office_location);

                fputs(buffer2, file2);
            }

            fclose(file2);
            printf("Admin data updated successfully.\n");
            break;
        case 4 :
        printf("Displayed data successfully");
        p=0;
        default:

            break;
        }
    }
}
void Open_data()
{
    // Function to open and display data
    FILE *file;
    file = fopen("Student.txt", "r"); // Open file in read mode
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    char line[256];
    printf("Displaying data from Student.txt:\n");
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }
    fclose(file);
    FILE *file1;
    file1 = fopen("Teacher.txt", "r"); // Open file in read mode
    if (file1 == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    printf("Displaying data from Teacher.txt:\n");
    while (fgets(line, sizeof(line), file1))
    {
        printf("%s", line);
    }
    fclose(file1);
    FILE *file2;
    file2 = fopen("Admin.txt", "r"); // Open file in read mode
    if (file2 == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    printf("Displaying data from Admin.txt:\n");
    while (fgets(line, sizeof(line), file2))
    {
        printf("%s", line);
    }
    fclose(file2);
}
void main()
{
    struct university uni;
    srand(time(NULL)); // Seed the random number generator
    int p = 1;
    int student_count;
    int teacher_count;
    int admin_count = 0;
    printf("Welcome to the University Management System!\n");

    do
    {
        int choiceX;
        printf("Please select an option:\n");
        printf("1. Admin Access 2. Register Administration 3. Student Access 4. Teacher Access  5. Updating Data 6. Open Data 7. Exit\n");
        scanf("%d", &choiceX);
        switch (choiceX)
        {
        case 1:
            Admin_Access(&uni, &student_count, &teacher_count,admin_count); // Handle admin access
            printf("Registered Students: %d\n", student_count);
            printf("Registered Teachers: %d\n", teacher_count);
            break;
        case 2:
            admin_count = Registering_Administration(&uni, admin_count);
            if (admin_count == -1)
            {
                printf("Failed to register admins.\n");
            }
            else
            {
                printf("Total registered admins: %d\n", admin_count);
            }
            // Register administration members
            break;
        case 3:
            Student_Access(&uni); // Assuming this function is defined elsewhere to handle student access
            break;
        case 4:
            Teacher_Access(&uni); // Assuming this function is defined elsewhere to handle teacher access
            break;
        case 5:
            Updating_data(&uni, student_count, teacher_count, admin_count); // Update data
            break;
        case 6:
            Open_data();
            break;
        case 7:
            printf("Exiting the University Management System.\n");
            p = 0;
            break;
        default:
            break;
        }
    } while (p);

    printf("Thank you for using the University Management System!\n");
}
