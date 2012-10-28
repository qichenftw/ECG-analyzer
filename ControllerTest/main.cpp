#include "gtest/gtest.h"

#include "ECGController.h"

class ECGControllerTest : public ::testing::Test
{
protected:

  ECGController controller;
};

TEST_F(ECGControllerTest, ReadFileValidTest)
{
  EXPECT_EQ(false, controller.readFile("no_file_QWE"));
}

TEST_F(ECGControllerTest, ReadFileInvalidTest)
{
  EXPECT_EQ(true, controller.readFile("100"));
}

int main(int argc, char** argv) 
{ 
    testing::InitGoogleTest(&argc, argv); 
    RUN_ALL_TESTS(); 
}
