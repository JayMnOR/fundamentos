#ifndef USERS_H
#define USERS_H

#include <string>
#include <vector>

using namespace std;

class Users {
public:
    int ID;
    string username;
    string email;
    string password;

    Users(int ID, string username, string email, string password);
};

class UserManager {
public:
    UserManager() = default;
    void addUser(const Users& user);
    Users* getUserByID(int ID);
    void listUsers() const;

private:
    vector<Users> users;
};

#endif
