#ifndef DAMICPhysicsListLivermore_h
#define DAMICPhysicsListLivermore_h

#include "G4VUserPhysicsList.hh"
#include "globals.hh"

class DAMICPhysicsListLivermore: public G4VUserPhysicsList
{
public:
  DAMICPhysicsListLivermore();
  ~DAMICPhysicsListLivermore();

public:
  virtual void SetCuts();


protected:
  // Construct particle and physics
  virtual void ConstructParticle();
  virtual void ConstructProcess();

  // these methods Construct physics processes and register them
  virtual void ConstructGeneral();
  virtual void ConstructEM();
  virtual void ConstructHad();
  virtual void ConstructOp();


  virtual void AddTransportation();



private:
  G4int VerboseLevel;
  G4int OpVerbLevel;

  G4double cutForGamma;
  G4double cutForElectron;
  G4double cutForPositron;

  // these methods Construct particles
  void ConstructMyBosons();
  void ConstructMyLeptons();
  void ConstructMyHadrons();
  void ConstructMyShortLiveds();

  // Define a particle iterator
  G4ParticleTable::G4PTblDicIterator* theParticleIterator;

  

};


#endif
