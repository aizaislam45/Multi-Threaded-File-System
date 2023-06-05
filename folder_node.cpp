#include <iostream>
#include <string>
#include <vector>
#include "file_node.cpp"
using namespace std;
class Folder_Node
{
    public:
    int type;   
    string folder_name; 
    vector<Folder_Node*> sub_folders; 
    vector<File_Node*> sub_files; 
    
    Folder_Node(string folder_name) {
        this->type = 0;
        this->folder_name = folder_name;
        this->sub_files = sub_files;
        this->sub_folders = sub_folders;
    }
};