#include <iostream>


void prompt() {
    system("clear");
    cout << "1. Create New Folder -> makeDirectory *Folder Name*" << endl;
    cout << "2. Create New File -> makeFile *File Name*" << endl;
    cout << "3. Delete File  -> removeFile *File Name*" << endl;
    cout << "4. Change Folder -> cd *Folder Name*" << endl;
    cout << "5. Open File -> read *File Name*" << endl;
    cout << "6. Move File -> moveFile *File Name*-*Path*" << endl;
    cout << "7. Move Folder -> moveFoler *Folder Name*-*Path*" << endl;
    cout << "8. List All Directories -> ls"  << endl;
    cout << "9. Current Directory -> current" << endl;
    cout << "10. Exit -> close" << endl;   
}