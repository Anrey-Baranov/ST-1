// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(PrimeTest, CheckPrimeSmallNumbers) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
}

TEST(PrimeTest, CheckPrimeLargeNumbers) {
    EXPECT_TRUE(checkPrime(9973));
    EXPECT_FALSE(checkPrime(10000));
    EXPECT_TRUE(checkPrime(104729));
}

TEST(NPrimeTest, FirstPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
    EXPECT_EQ(nPrime(6), 13);
    EXPECT_EQ(nPrime(7), 17);
    EXPECT_EQ(nPrime(8), 19);
    EXPECT_EQ(nPrime(9), 23);
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NPrimeTest, LargerN) {
    EXPECT_EQ(nPrime(20), 71);
    EXPECT_EQ(nPrime(50), 229);
    EXPECT_EQ(nPrime(100), 541);
}

TEST(NextPrimeTest, NextAfterSmallNumbers) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(9), 11);
    EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, NextAfterLargeNumbers) {
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(1000), 1009);
    EXPECT_EQ(nextPrime(10000), 10007);
}

TEST(SumPrimeTest, SmallBounds) {
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);
    EXPECT_EQ(sumPrime(4), 5);
    EXPECT_EQ(sumPrime(5), 5);
    EXPECT_EQ(sumPrime(6), 10);
    EXPECT_EQ(sumPrime(7), 10);
    EXPECT_EQ(sumPrime(8), 17);
    EXPECT_EQ(sumPrime(9), 17);
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, LargerBounds) {
    EXPECT_EQ(sumPrime(20), 77);  // 2+3+5+7+11+13+17+19
    EXPECT_EQ(sumPrime(30), 129);
}

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
