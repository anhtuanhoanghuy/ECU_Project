#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "csv_io.h"

static FILE *csv_file;
static char csv_filename[100];

/***********************************************
 * Function: csv_init
 * Description: initial csv file
 * Parameters: file
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 10:39:12
 ***********************************************/
void csv_init(const char* filename) {;
    strncpy(csv_filename, filename, sizeof(csv_filename) - 1);
    csv_filename[sizeof(csv_filename) - 1] = '\0';
    csv_file = fopen(csv_filename, "r");
    if (csv_file == NULL) {
        printf("Can't open csv_file !\n");
    }
    fclose (csv_file);
}

/***********************************************
 * Function: csv_getInt
 * Description: getter function to get value of key
 * Parameters: key
 * Returns: (int) value of key
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 09:18:11
 ***********************************************/
int csv_getInt(const char* key) {
    csv_file = fopen(csv_filename, "r");
    if (csv_file != NULL) {
        char line[100];
        while(fgets(line, sizeof(line),csv_file) != NULL) {
            char* line_key = strtok(line,",");
            char* value_str = strtok(NULL, ",\n\r");
            if (line_key && value_str) {
                if (strcmp(line_key, key) == 0) {
                    int value = atoi(value_str);
                    fclose(csv_file);
                    return value;
                }
            }
        };
        fclose (csv_file);
    } else {
        printf("Can't open csv_file !\n");
    }
    return -1;
}


/***********************************************
 * Function: csv_setInt
 * Description: setter function to set value of key
 * Parameters: key, value
 * Returns: void
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 09:19:17
 ***********************************************/
void csv_setInt(const char* key, int value) {
    csv_file = fopen(csv_filename, "r");
    FILE* temp_file = fopen("temp.csv", "w");
    if (csv_file != NULL) {
        char line[100];
        while(fgets(line, sizeof(line),csv_file) != NULL) {
            char* line_key = strtok(line,",");
            char* line_value = strtok(NULL, ",\n\r");
            if (line_key && line_value) {
                if (strcmp(line_key, key) == 0) {
                    fprintf(temp_file, "%s,%d\n", line_key, value);  
                } else {
                    fprintf(temp_file, "%s,%s\n", line_key, line_value); 
                }
            }  
        };
        fclose (temp_file);
        fclose (csv_file);
        remove(csv_filename);
        rename("temp.csv", csv_filename);
    } else {
        printf("Can't open csv_file !\n");
    }
}


/***********************************************
 * Function: csv_getString
 * Description: read string for CAN protocol
 * Parameters: key
 * Returns: char* (string value of key)
 * Author: hoanghuyanhtuan
 * Date: 2025-08-02 09:20:44
 ***********************************************/
const char* csv_getString(const char* key) {
    csv_file = fopen(csv_filename, "r");
    if (csv_file != NULL) {
        char line[100];
        while(fgets(line, sizeof(line),csv_file) != NULL) {
            char* line_key = strtok(line,",");
            char* value_str = strtok(NULL, ",\n\r");
            if (line_key && value_str) {
                if (strcmp(line_key, key) == 0) {
                    fclose(csv_file);
                    return value_str;
                }
            }
        };
        fclose (csv_file);
    } else {
        printf("Can't open csv_file !\n");
    }
    return -1;
}