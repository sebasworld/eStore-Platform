#include "QuerySolver.h"

using namespace std;

/* NU MODIFICATI */
QuerySolver::QuerySolver() 
{
  server = Server::GetInstance();
}

/* NU MODIFICATI */
QuerySolver::~QuerySolver()
{
  if (server != nullptr) 
  {
    server = nullptr;
  }
}

list<Product*> QuerySolver::Query_3a(){
    list<Product *> p;
    list<Product *>::iterator it;
    for(it=server->getProductsList().begin(); it!=server->getProductsList().end(); it++){
      if((*it)->getCategory()=="espressor" && (*it)->getProductType()=="redus"){
        p.push_back((*it));
      }
    }
    return p;
}

list<User*> QuerySolver::Query_3b(){
   list<User*> u;
    list<User *>::iterator it;
    for(it=server->getUsersList().begin(); it!=server->getUsersList().end(); it++){
      if((*it)->getUserType()=="User nonpremium" && (*it)->getTransportCost()<=11.5){
        u.push_back((*it));
      }  
    }
  return u;
}

list<Product*> QuerySolver::Query_3c(){
  list<Product*> p;
  list<Product*>::iterator it;
  for(it=server->getProductsList().begin(); it!=server->getProductsList().end(); it++){
    ResealedProduct* rp = dynamic_cast<ResealedProduct*>((*it));
    if (rp!=nullptr){
      if((*it)->getProductType()=="resigilat" && rp->getReason()=="lipsa_accesorii"){
        p.push_back((*it));
      }
    }
  }
  p.sort(Utility::sortFunction);
  return p;
}

list<Product*> QuerySolver::Query_3d(){
  list<Product*> p;
  list<Product*>::iterator it;
  for(it=server->getProductsList().begin(); it!=server->getProductsList().end(); it++){
    if((*it)->getProductType()=="alimentar"){
      p.push_back((*it));
    }
  }
  p.sort(Utility::sortFunction2);
  return p;
}      
    
list<User*> QuerySolver::Query_3e()
{
  throw("undefined");
}

list<User*> QuerySolver::Query_3f()
{
  throw("undefined");
}
