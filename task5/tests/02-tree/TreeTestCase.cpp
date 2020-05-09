//
// Created by akhtyamovpavel on 5/1/20.
//


#include "TreeTestCase.h"
#include "Tree.h"
#include <boost/filesystem/operations.hpp>
#include <fstream>


using boost::filesystem::current_path;
using boost::filesystem::create_directory;
using boost::filesystem::remove_all;

void TreeTestCase::SetUpTestCase() {
    path = current_path().string() + "/test1";
    create_directory(path);
    
    std::string fname = path + "testf.txt";   
    std::ofstream fout(fname);
    fout << "awesome";
    fout.close();
    
    create_directory(path + "/bad"); 

}

void TreeTestCase::TearDownTestCase() {
    remove_all(path);
}



TEST_F(TreeTestCase, test1) {
    ASSERT_THROW(GetTree(path + "/gooddir"), std::invalid_argument);
}


TEST_F(TreeTestCase, test2) {
    ASSERT_THROW(GetTree(path + "/testf.txt", true), std::invalid_argument);
}


TEST_F(TreeTestCase, test3) {
    ASSERT_NO_THROW(GetTree(path, true));
}


TEST_F(TreeTestCase, test4) {
    ASSERT_NO_THROW(GetTree(path, false));
}


TEST_F(TreeTestCase, test5) {
    ASSERT_EQ(GetTree(path, true), GetTree(path, true));
}

