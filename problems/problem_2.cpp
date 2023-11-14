float problemSolution2(float i, float j, float k) {
    float result;
    cout<<"Enter the numbers:";
    cin>>i>>j>>k;
    result=(i>j)?(i>k ? i:k)(j>k ? j:k);

    return result;
}
