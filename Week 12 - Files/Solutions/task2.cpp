#include <iostream>
#include <cstring>
#include <fstream>

struct User
{
    char username[255];
    char password[255];
    char name[21];
    char surname[21];
    unsigned yearOfBirth;
};

int main()
{
    std::fstream file("database.dat", std::ios::in | std::ios::out | std::ios::binary);
    if(!file)
    {
        std::cout << "There was an error with file" << std::endl;
        return 1;
    }
    char cmd[30];
    do
    {
        std::cin >> cmd;
        if(strcmp(cmd, "exit") == 0)
        {   
            file.close();
            std::cout << "Goodbye!" << std::endl;
        }
        else if(strcmp(cmd, "register") == 0)
        {
            User user;
            std::cout << "Enter username: ";
            std::cin >> user.username;
            std::cout << "Enter password: ";
            std::cin >> user.password;
            std::cout << "Enter name: ";
            std::cin >> user.name;
            std::cout << "Enter surname: ";
            std::cin >> user.surname;
            std::cout << "Enter year of birth: ";
            std::cin >> user.yearOfBirth;
            file.write((char*)&user, sizeof(user));
            file.sync();
        }
        else if(strcmp(cmd, "login") == 0)
        {
            char username[255];
            char password[255];
            std::cout << "Enter username: ";
            std::cin >> username;
            std::cout << "Enter password: ";
            std::cin >> password;
            file.seekg(0,std::ios::beg);
            User user;
            bool flag = false;
            while(file.read((char*)&user, sizeof(user)))
            {
                if(strcmp(user.username,username) == 0)
                {
                    flag = true;
                    if(strcmp(user.password, password) == 0)
                    {
                        std::cout << "Here is the data: " << std::endl;
                        std::cout << "Name: " << user.name << std::endl;
                        std::cout << "Surname: " << user.surname << std::endl;
                        std::cout << "Year of birth: " << user.yearOfBirth << std::endl; 
                    }
                    else
                    {
                        std::cout << "Wrong password" << std::endl;
                    }
                }
            }
            if(!flag)
            {
                std::cout << "Invalid user!" << std::endl;
            }

        }
        else if(strcmp(cmd, "removeUser") == 0)
        {
            char username[255];
            std::cout << "Enter username: ";
            std::cin >> username;
            std::ofstream copyOfFile("file2.dat", std::ios::out | std::ios::binary);
            if(!copyOfFile)
            {
                return 1;
            }
            file.seekg(0, std::ios::beg);
            User user;
            while(file.read((char*)&user, sizeof(user)))
            {
                std::cout << user.username << std::endl;
                if(strcmp(user.username, username) != 0)
                {
                    copyOfFile.write((char*)&user, sizeof(user));
                }
            }
            file.close();
            copyOfFile.close();
            std::ifstream fc("file2.dat", std::ios::in | std::ios::binary);
            std::ofstream f2("database.dat", std::ios::in | std::ios::trunc | std::ios::binary);
            if(!fc || !f2)
            {
                return 1;
            }
            while(fc.read((char*)&user, sizeof(user)))
            {
                f2.write((char*)&user, sizeof(user));   
            }
            fc.close();
            f2.close();
            file.open("database.dat", std::ios::in | std::ios::out | std::ios::binary);
            if(!file)
            {
                return 1;
            }

        }
        else
        {
            std::cout << "Invalid command! " << std::endl;
        }

    } 
    while (strcmp(cmd, "exit") != 0);
    
}