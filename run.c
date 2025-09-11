// main.c
#include <gtk/gtk.h>
#include "C_Project.h"

void on_admin_clicked(GtkWidget *widget, gpointer data) {
    struct university *uni = (struct university *)data;
    int student_count = 0, teacher_count = 0, admin_count = 10;
    Admin_Access(uni, &student_count, &teacher_count, admin_count);
}

void on_student_clicked(GtkWidget *widget, gpointer data) {
    struct university *uni = (struct university *)data;
    Student_Access(uni);
}

void on_teacher_clicked(GtkWidget *widget, gpointer data) {
    struct university *uni = (struct university *)data;
    Teacher_Access(uni);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    struct university uni;
    srand(time(NULL)); // Init random

    GtkWidget *window, *vbox, *admin_btn, *student_btn, *teacher_btn;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "University Management System");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    admin_btn = gtk_button_new_with_label("Admin Access");
    student_btn = gtk_button_new_with_label("Student Access");
    teacher_btn = gtk_button_new_with_label("Teacher Access");

    gtk_box_pack_start(GTK_BOX(vbox), admin_btn, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), student_btn, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), teacher_btn, TRUE, TRUE, 0);

    g_signal_connect(admin_btn, "clicked", G_CALLBACK(on_admin_clicked), &uni);
    g_signal_connect(student_btn, "clicked", G_CALLBACK(on_student_clicked), &uni);
    g_signal_connect(teacher_btn, "clicked", G_CALLBACK(on_teacher_clicked), &uni);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
