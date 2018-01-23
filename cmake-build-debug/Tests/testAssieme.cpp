//
// Created by edoardo on 22/01/18.
//



#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Assieme.h"

using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test {
    public:
        Assieme obj;
        ClassDeclaration(){
            obj; // could put here a make method
        }
    };

}
TEST_F(ClassDeclaration, nameOfTheTest1){
      ASSERT_EQ("","");
}

TEST_F(ClassDeclaration, nameOfYourTest2){
      ASSERT_EQ("","");
}

