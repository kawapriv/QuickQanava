/*
 Copyright (c) 2008-2018, Benoit AUTHEMAN All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the author or Destrat.io nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL AUTHOR BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

//-----------------------------------------------------------------------------
// This file is a part of the GTpo software.
//
// \file	gtpo_graph_tests.cpp
// \author	benoit@qanava.org
// \date	2018 06 19
//-----------------------------------------------------------------------------

// STD headers
#include <list>
#include <memory>
#include <iostream>

// GTpo headers
#include <GTpo>

// Google Test
#include <gtest/gtest.h>
#include <gmock/gmock.h>

//-----------------------------------------------------------------------------
// Graph DFS linearization
//-----------------------------------------------------------------------------

TEST(GTpoGraph, linearize_dfs_rec)
{
    // Inserting a node should increase node count and root node count
    gtpo::graph<> g;
    auto nc = g.get_node_count();
    auto rnc = g.get_root_node_count();
    EXPECT_EQ( nc, 0);
    EXPECT_EQ( rnc, 0);
    g.create_node();
    EXPECT_EQ( g.get_node_count(), nc + 1 );
    EXPECT_EQ( g.get_root_node_count(), rnc + 1 );
    g.clear();
}

TEST(GTpoGraph, levelize_dfs_rec)
{
    // Inserting a node should increase node count and root node count
    gtpo::graph<> g;
    auto nc = g.get_node_count();
    auto rnc = g.get_root_node_count();
    EXPECT_EQ( nc, 0);
    EXPECT_EQ( rnc, 0);
    g.create_node();
    EXPECT_EQ( g.get_node_count(), nc + 1 );
    EXPECT_EQ( g.get_root_node_count(), rnc + 1 );
    g.clear();
}