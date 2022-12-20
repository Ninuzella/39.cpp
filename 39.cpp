
class AbstractRefrigeator {
    protected:
     string ModelName;
     string Manufacturer;
     int Price;

   public: 
    
     static int RefrigeatorCount;

     
     AbstractRefrigeator(string Modelname,string Manufacturer,int Price){
     this-> ModelName=ModelName;
     this-> Manufacturer=Manufacturer;
     this-> Price=Price;
     RefrigeatorCount++;
    }

     string getModelName(){
       return ModelName;
     }

     void setModelName(string ModelName){
        this-> ModelName = ModelName;
    }

     string getManufacturer(){
        return Manufacturer;
     }

     void setManufacturer(string Manufacturer){
        this-> Manufacturer;
     }
      int getPrice() {
         return Price;
      }
      
      void setPrice(int Price){
        this-> Price;
      }
     

     void sensorOpen() {
       cout << "Abstract refrigeator is opening via sensor buttons" <<endl;
    }  
  
     void sensorClose() {
       cout << "Abstract refrigeator is closing via sensor buttons" <<endl;
    }
    
     virtual void freeze()=0;
      
 };
 
    int AbstractRefrigeator::RefrigeatorCount=0;


  class BekoRefrigeator: public AbstractRefrigeator {
    public:
     BekoRefrigeator(string Modelname,int Price): AbstractRefrigeator(Modelname, "Beko", Price){}

     void freeze(){ 
         cout << "Refrigeator Beko is freezing products" <<endl;
    }

     void freeze(string freezingMode){ 
         cout << "Refrigeator turns on " << freezingMode << "steaming freeze" <<endl;
    }
  };  

  class VestelRefrigeator: public AbstractRefrigeator {
    public:
     VestelRefrigeator(string Modelname,int Price): AbstractRefrigeator(Modelname, "Vestel", Price){}

     void freeze(){ 
         cout << "Refrigeator Vestel is freezing products" <<endl;
    }

     void freeze(string freezingMode){ 
         cout << "Refrigeator turns on " << freezingMode << "steaming freeze" <<endl;
    }
  };  
   
   class KitchenAppliancesStore {
       string Name

 public: 
   static int SoldRefrigeatorCount;

   KitchenAppliancesStore(string Name) {
      this-> Name = Name;
     }

     string getName ()  
          return Name;
     }

   void sellRefrigeator ()  {
        cout << "KitchenAppliancesStore sold the refrigeator to a customer" <<endl; 
       SoldRefrigeatorCount++;
     } 
 };   
    void sellRefrigeator(BekoRefrigeator refrigeator)
      cout<< "Kitchen appliances store sold" <<refrigeator.getManufacturer<< "" Refrigeator.getModelname <<" to a custumer"<<endl;
      SoldRefrigeatorCount++;
     } 
     void sellRefrigeator(VestelRefrigeator refrigeator)
      cout<< "Kitchen appliances store sold" <<refrigeator.getManufacturer<< "" Refrigeator.getModelname <<" to a custumer"<<endl;
      SoldRefrigeatorCount++;
     } 
 int KitchenApplianesStore::SoldRefrigeatorCount = 0;

int main()
{
    

    return 0;
}
