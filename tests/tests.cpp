#include <iostream>
#include <Dlist.h>
#include <gtest/gtest.h>

TEST (constructor, simple){
    ASSERT_EQ(0,0);
}

TEST (constructor, default){
    Dlist a = Dlist();
    ASSERT_DOUBLE_EQ(a.get(),0);
}

TEST (constructor, init){

    Dlist a = Dlist(20.515423);
    ASSERT_DOUBLE_EQ(a.get(), 20.515423);
}

TEST (Side, sideSQ){

    Dlist a = Dlist(20.515423);
    ASSERT_NEAR(a.sideSq(), 43.5198,0.001);
}

TEST (radius, centre){

    Dlist a = Dlist(20.515423);
    ASSERT_NEAR(a.radiuc(45), 36.1486,0.001);
}

TEST (radius, curvatureTop){

    Dlist a = Dlist(20.515423);
    ASSERT_NEAR(a.radKrivVer(), 5.43997,0.001);
}

TEST (radius, curvatureAnchor){

    Dlist a = Dlist(20.515423);
    ASSERT_NEAR(a.radKrivYz(), 43.5198,0.001);
}

TEST (area, area){

    Dlist a = Dlist(20.515423);
    ASSERT_NEAR(a.area(), 631.324,0.001);
}

TEST (Poper, largest){

    Dlist a = Dlist(20.515423);
    ASSERT_NEAR(a.biggestPoper(), 19.7652,0.001);
}

TEST (Poper, lenghtTo){

    Dlist a = Dlist(20.515423);
    ASSERT_NEAR(a.lenghtToPoper(), 25.1262,0.0001);
}

