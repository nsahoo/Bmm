#ifndef CANDANABD2JPSIKSTAR_H
#define CANDANABD2JPSIKSTAR_H

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>

#include <TROOT.h>
#include <TString.h>
#include <TVector3.h>
#include <TLorentzVector.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TTree.h>


#include "candAna.hh"

class candAnaBd2JpsiKstar : public candAna {
  
public:
  candAnaBd2JpsiKstar(bmmReader *pReader, std::string name, std::string cutsFile);
  virtual ~candAnaBd2JpsiKstar();

  void        candAnalysis();
  void        efficiencyCalculation();
  void        moreBasicCuts();
  void        moreReducedTree(TTree *);

  void        genMatch(); 
  void        recoMatch(); 
  void        candMatch(); 
  
  void        readCuts(string filename, int dump);
  void        bookHist();
  void        fillCandidateHistograms(int offset);

  int          JPSITYPE; 
  double       JPSIMASSLO, JPSIMASSHI;

  double       fKaonPt, fKaonEta, fKaonPhi;
  double       fKPtGen, fKEtaGen;
  double       fKaonPtNrf, fKaonEtaNrf;
  int          fKaonTkQuality;

  /* *******added in analogy for Pion but needs to be checked ****

    double       fPionPt, fPionEta, fPionPhi;
    double       fPiPtGen, fPiEtaGen;
    double       fPionPtNrf, fPionEtaNrf;
    int          fPionTkQuality;

   */
  double       fJpsiMass, fJpsiPt, fJpsiEta, fJpsiPhi;

  bool         fGoodJpsiMass;


  double       fKaPt, fKaEta, fKaPhi;
  double       fPiPt, fPiEta, fPiPhi;
  double       fKstarPt, fKstarEta, fKstarPhi; 
  bool         fKaMissid, fPiMissid, fKaMuMatch, fPiMuMatch;
  // tests d.k.   
  bool         fKaMissid2, fKaMuMatch2; 
  float        fKaMuMatchR, fKaMuMatchR2, fKaMuMatchR3, fKaMuMatchR4, fKaMuMatchR5;
  bool         fPiMissid2, fPiMuMatch2; 
  float        fPiMuMatchR, fPiMuMatchR2, fPiMuMatchR3, fPiMuMatchR4, fPiMuMatchR5;


  double       fKaPtNrf, fKaEtaNrf;
  double       fPiPtNrf, fPiEtaNrf;

  double       fKaPtGen, fKaEtaGen, fPiPtGen, fPiEtaGen;
  int          fKaGenID, fPiGenID; 
  int          fKaTkQuality, fPiTkQuality;

  // -- TM 
  int                     fGenKTmi, fGenPiTmi; 
  int                     fRecKTmi, fRecPiTmi; 
  
  // -- effTree
  float fETkpt, fETketa, fETg3pt, fETg3eta;
  float fETpipt, fETpieta, fETg4pt, fETg4eta;
  int   fETkq,  fETpiq; 
  bool  fETkgt, fETpigt;

  // -- Additional variables and cuts for Bd -> J/psi Kstar
  int               KSTARTYPE; 
  double            MKPILO, MKPIHI, DELTAR;
  double            fDeltaR, fMKPI;
  bool              fGoodDeltaR, fGoodMKPI;


};

#endif