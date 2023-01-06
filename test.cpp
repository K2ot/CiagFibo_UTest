#include "pch.h"
#include "../CiagFibo/CiagFibo.h"


TEST(CiagFibo, FiboRekurencja) {
	EXPECT_EQ(1, FiboReku(1));
	EXPECT_EQ(1, FiboReku(2));
	EXPECT_EQ(2, FiboReku(3));
	EXPECT_EQ(3, FiboReku(4));
	EXPECT_EQ(5, FiboReku(5));
    EXPECT_EQ(0, FiboReku(0));
    EXPECT_EQ(0, FiboReku(-5));
}

TEST(CiagFibo, FiboRekuVektor) {
	EXPECT_EQ(1, FiboReku2(1));
	EXPECT_EQ(1, FiboReku2(2));
	EXPECT_EQ(2, FiboReku2(3));
	EXPECT_EQ(3, FiboReku2(4));
	EXPECT_EQ(5, FiboReku2(5));
	EXPECT_EQ(0, FiboReku2(0));
	EXPECT_EQ(0, FiboReku2(-5));
}

TEST(CiagFibo, FiboInter) {
	EXPECT_EQ(1, FiboInter(1));
	EXPECT_EQ(1, FiboInter(2));
	EXPECT_EQ(2, FiboInter(3));
	EXPECT_EQ(3, FiboInter(4));
	EXPECT_EQ(5, FiboInter(5));
	EXPECT_EQ(0, FiboInter(0));
	EXPECT_EQ(0, FiboInter(-5));
}