bool collinear(std::vector<std::vector<long long>> coordinates)
{
    //3 points lie on the same line when
    // (b1-a1)/(c1-a1)=(b2-a2)/(c2-a2)
    std::vector<double> AB, AC;
    AB = {coordinates.at(1).at(0)-coordinates.at(0).at(0), coordinates.at(1).at(1)-coordinates.at(0).at(1)};
    AC = { coordinates.at(2).at(0)-coordinates.at(0).at(0), coordinates.at(2).at(1)-coordinates.at(0).at(1) };
    return (AB[0]*AC[1]==AC[0]*AB[1]);  
}