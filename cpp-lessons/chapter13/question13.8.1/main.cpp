#include <iostream>

struct Revenue{
    int adsWatched{};
    double percentageOfClicks{};
    double averageEarnings{};
};

void printData(Revenue e){
    std::cout << "Ads watched: " << e.adsWatched << "\n";
    std::cout << "Percentage of ad clicks: " << e.percentageOfClicks << "\n";
    std::cout << "Average earnings per click: " << e.averageEarnings << "\n";
    std::cout << "Daily earnings: " << (e.adsWatched*(e.percentageOfClicks/100)*e.averageEarnings) << "\n";
    
}




int main(){

    Revenue example{7, 45.7, 300.25};
    printData(example);
    return 0;
        

}

