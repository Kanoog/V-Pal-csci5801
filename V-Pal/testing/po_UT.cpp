// Tests for OPLV
#include <gtest/gtest.h>
#include "../src/po.cpp"

 class POTests:public::testing::Test
{
    protected:
        PO * testpo;    
        
        virtual void TearDown()
        {
            delete testpo;            
            testpo = NULL;
        } 
};


 
TEST_F (POTests, Constructor)
{  
    Audit audit;    
    audit.auditFile = "audittest.txt";
    
    testpo = new PO (audit);
    
    EXPECT_EQ (testpo->GetTotalCandidates (), 0);    
    EXPECT_EQ (testpo->GetTypeofElection (), "PO");    
    EXPECT_EQ (testpo->GetTotalBallots (), 0);
};


 
TEST_F (POTests, TieBreaker)
{
    Audit audit;
};

TEST_F (POTests, AddCandidate)
{  
    Audit audit;    
    audit.auditFile = "audittest.txt";
    
    testpo = new PO (audit);
    
    POCandidate * can1 = new POCandidate ("John", 'R');    
    POCandidate * can2 = new POCandidate ("Susan", 'R');    
    POCandidate * can3 = new POCandidate ("Ralph", 'D');    
    POCandidate * can4 = new POCandidate ("Guy", 'I');
    
    testpo->AddCandidate (can1);    
    testpo->AddCandidate (can2);    
    testpo->AddCandidate (can3);    
    testpo->AddCandidate (can4);
    
    std::vector <POCandidate *> testcandidates = testpo->GetCandidates();
    
    
    EXPECT_EQ (testcandidates.size (), 4);    
};
 
TEST_F (POTests, FindWinner)
{  
    Audit audit;    
    audit.auditFile = "audittest.txt";
    
    testpo = new PO (audit);

    std::vector<std::string> files;
    files.push_back("po_data.csv");

    testpo->FindWinner (files);
    
    POCandidate testcand = testpo->GetWinner();
        
    EXPECT_EQ (testcand.GetName(), "Pike");    
};
