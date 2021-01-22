/*The IDL File  --- name IDL.x*/

struct userdata{
    char login[32];
    char password[32];
};

struct command {
    char cmd[256];
    userdata data;
};
/*Programme, version and procedure definition*/

program COMPUTE{
    version EXECUTE_VERS{
        string execute(command) = 1;
        string auth(userdata) = 2;
    } = 1;
} = 456123789;