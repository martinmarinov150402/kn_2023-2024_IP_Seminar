#include <iostream>
#include <cstring>

struct Mark
{
    char subject[256];
    int grade;
};
struct Student
{
    char name[256];
    int year;
    int marksCount;
    Mark marks[256];
};
struct University
{
    int stundetsCount;
    Student students[1500];
};

void add_student(University& uni, Student stud)
{
    uni.students[uni.stundetsCount++] = stud;
}
void add_mark(University& uni, char name[], Mark mark)
{
    int idx = -1;
    for(int i = 0; i < uni.stundetsCount; i++)
    {
        if(strcmp(uni.students[i].name, name) == 0)
        {
            idx = i;
            break;
        }
    }
    if(idx != -1)
    {
        uni.students[idx].marks[uni.students[idx].marksCount++] = mark;
    }
}
Student* get_by_year(University& uni, int year)
{
    int count = 0;
    for(int i = 0; i < uni.stundetsCount; i++)
    {
        if(uni.students[i].year == year)
        {
            count ++;
        }
    }
    Student* array = new Student[count];
    count = 0;

    for(int i = 0; i < uni.stundetsCount; i++)
    {
        if(uni.students[i].year == year)
        {
            array[count++] = uni.students[i];
        }
    }
    return array;
}

Student* get_by_subject(University& uni, char subject[256])
{
    int count = 0;
    for(int i = 0; i < uni.stundetsCount; i++)
    {
        for(int j = 0; j < uni.students[i].marksCount; j++)
        {
            if(strcmp(uni.students[i].marks[j].subject, subject) == 0)
            {
                count++;
                break;
            }
        }
    }

    Student* array = new Student[count];
    count = 0;


    for(int i = 0; i < uni.stundetsCount; i++)
    {
        for(int j = 0; j < uni.students[i].marksCount; j++)
        {
            if(strcmp(uni.students[i].marks[j].subject, subject) == 0)
            {
                array[count++] = uni.students[i];
                break;
            }
        }
    }

    return array;
}

Student* get_results_for_subject(University& uni, char subject[], int a, int b)
{
    
    int count = 0;
    for(int i = 0; i < uni.stundetsCount; i++)
    {
        for(int j = 0; j < uni.students[i].marksCount; j++)
        {
            if(strcmp(uni.students[i].marks[j].subject, subject) == 0 && 
                      uni.students[i].marks[j].grade >= a && 
                      uni.students[i].marks[j].grade <= b)
            {
                count++;
                break;
            }
        }
    }

    Student* array = new Student[count];
    count = 0;

    for(int i = 0; i < uni.stundetsCount; i++)
    {
        for(int j = 0; j < uni.students[i].marksCount; j++)
        {
            if(strcmp(uni.students[i].marks[j].subject, subject) == 0 && 
                      uni.students[i].marks[j].grade >= a && 
                      uni.students[i].marks[j].grade <= b)
            {
                array[count++] = uni.students[i];
                break;
            }
        }
    }
    return array;

}

void graduate_year(University& uni, char** names, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < uni.stundetsCount; j++)
        {
            if(strcmp(uni.students[j].name, names[i]) == 0)
            {
                uni.students[j].year++;
                if(uni.students[j].year > 4)
                {
                    std::swap(uni.students[j], uni.students[uni.stundetsCount - 1]);
                    uni.stundetsCount--;
                }
            }
        }
    }   
}
int main()
{
    
}