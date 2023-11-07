#include "center.h"

int add(char * center_info,centre c)
{
center exist;

gets(c.id_center);
exist=search(char * center_info, int id)
if(exist==0){
gets(c.name_center);
gets(c.state);
gets(c.city);
scanf("%d",&c.date.day);
scanf("%d",&c.date.month);
scanf("%d",&c.date.year);
scanf("%d",&c.nb_workers.doctor);
scanf("%d",&c.nb_workers.nurse);
scanf("%d",&c.capacity);
gets(c.contact.phone1);
gets(c.contact.phone2);


}

FILE * f=fopen(center_info, "a")
    
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %s %s %d %d %d %d %d %d %s %s\n",c.id_center,c.name_center,c.state,c.city,c.date.day,date.month,c.date.year,c.nb_workers.doctor,c.nb_workers.nurse,c.capacity,c.contact.phone1,c.contact.phone2);
        fclose(f);
        return 1;
    }
    else return 0;
}
int switch_notebook_page_display(AppWidgets_display *appWidgets, center nouv,id, center_info) {
int n;

if((appWidgets->radio_button_modify==1)&&(appWidgets->choose==1)){


n= modifier(center_info , id, nouv );
}
else if ((appWidgets->radio_button_delete==1)&&(appWidgets->choose==1))

{

n=delete(char *center_info, char id)



}
else if ((appWidgets->radio_button_modify==1)&&(appWidgets->choose==1))

{
n=modifier(center_info , id, nouv )


}

return(n);
}



center search(char * center_info, int id)
{
   center c;
    int tr=0;
    FILE * f=fopen(center_info, "r");
    if(f!=NULL)
    {
        while((tr==0)&&(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %d %s %s\n",c.id_center,c.name_center,c.state,c.city,c.date.day,c.date.month,c.date.year,c.nb_workers.doctor,c.nb_workers.nurse,c.capacity,c.contact.phone1,c.contact.phone2
        !=EOF)));
        {
            
                        if(strcmp(c.id,id)==0)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        c.id=-1;
    return c;
}




int delete(char *center_info, char id)
{     

  int tr=0;
    center c;
    FILE * f=fopen(center_info, "r");
    FILE * f2=fopen("center_info2.txt", "w");
    if(f!=NULL && f2!=NULL)
    {

 while(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %d %s %s\n",c.id_center,c.name_center,c.state,c.city,c.date.day,c.date.month,c.date.year,c.nb_workers.doctor,c.nb_workers.nurse,c.capacity,c.contact.phone1,c.contact.phone2
        !=EOF))

       
        {
            if(strcmp(c.id,id)==0)
                tr=1;
            else
                fprintf(f2,"%s %s %s %s %s %d %d %d %d %d %d %s %s\n",c.id_center,c.name_center,c.state,c.city,c.date.day,c.date.month,c.date.year,c.nb_workers.doctor,c.nb_workers.nurse,c.capacity,c.contact.phone1,c.contact.phone2);
       

        }
    }
    fclose(f);
    fclose(f2);
    remove(center_info);
    rename("nouv.txt", center_info);
    return tr;
}









int modifier(char * center_info , int id, center nouv ); 
{
    int tr=0;
    center c;
    FILE * f=fopen(center_info, "r");
    FILE * f2=fopen("center_info2.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %d %d %d %d %d %d %s %s\n",c.id_center,c.name_center,c.state,c.city,c.date.day,c.date.month,c.date.year,c.nb_workers.doctor,c.nb_workers.nurse,c.capacity,c.contact.phone1,c.contact.phone2
        !=EOF));
        {
                        if(strcmp(c.id,id)==0)
            {
              fprintf  (f2,"%s %s %s %s %s %d %d %d %d %d %d %s %s\n", nouv.id_center, nouv.name_center, nouv.state, nouv.city, nouv.date.day, nouv.date.month, nouv.date.year, nouv.nb_workers.doctor, nouv.nb_workers.nurse, nouv.capacity, nouv.contact.phone1, nouv.contact.phone2);
        
                tr=1;
            }
            else
                fprintf(f2,"%s %s %s %s %s %d %d %d %d %d %d %s %s\n",c.id_center,c.name_center,c.state,c.city,c.date.day,c.date.month,c.date.year,c.nb_workers.doctor,c.nb_workers.nurse,c.capacity,c.contact.phone1,c.contact.phone2);
       

        }
    }

    fclose(f);
    fclose(f2);
    remove(center_info);
    rename("center_info2.txt",center_info);
    return tr;

}
int switch_notebook_page(AppWidgets *appWidgets) {
int n;
int ok;
if((appWidgets->radio_button_add==1)&&(appWidgets->choose==1)){

n=add(&center_info);
}
else if ((appWidgets->radio_button_display==1)&&(appWidgets->choose==1))

{

n=add(&center_info);



}
else if ((appWidgets->radio_button_statistics==1)&&(appWidgets->choose==1))

{

void statistics();

}

return(n);
}




/*Function to switch notebook pages
void switch_notebook_page(AppWidgets *appWidgets) {
    gint page_num;
    
    if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(appWidgets->radio_add)))
if((appWidgets->radio_add==1)

 {
        page_num = 0; // Index of 'add' page in the GtkNotebook
    } else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(appWidgets->radio_display))) {
        page_num = 1; // Index of 'display' page in the GtkNotebook
    } else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(appWidgets->radio_statistics))) {
        page_num = 2; // Index of 'statistics' page in the GtkNotebook
    } else {
        return; // No option selected
    }
    
    gtk_notebook_set_current_page(GTK_NOTEBOOK(appWidgets->notebook), page_num);
}

// Callback for the "clicked" signal of the choose button
void on_choose_clicked(GtkButton *button, gpointer user_data) {
    AppWidgets *appWidgets = (AppWidgets *)user_data;
    switch_notebook_page(appWidgets);
}

int main(int argc, char *argv[]) {
    GtkBuilder *builder;
    AppWidgets appWidgets;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file("your_glade_file.glade");
    
    // Map the widgets from Glade to your struct
    appWidgets.window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    appWidgets.notebook = GTK_WIDGET(gtk_builder_get_object(builder, "your_notebook"));
    appWidgets.btn_choose = GTK_WIDGET(gtk_builder_get_object(builder, "choose_button"));
    appWidgets.radio_add = GTK_WIDGET(gtk_builder_get_object(builder, "add_radio"));
    appWidgets.radio_display = GTK_WIDGET(gtk_builder_get_object(builder, "display_radio"));
    appWidgets.radio_statistics = GTK_WIDGET(gtk_builder_get_object(builder, "statistics_radio"));
    
    // Connect signals
    gtk_builder_connect_signals(builder, &appWidgets);
    
    // Destroy builder
    g_object_unref(G_OBJECT(builder));
    
    // Start the main loop
    gtk_widget_show_all(appWidgets.window);
    gtk_main();
    
    return 0;
}
*/
