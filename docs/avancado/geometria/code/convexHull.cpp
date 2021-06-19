vp convex_hull(vp points){
    vp P(points);
    sort(P.begin(), P.end());
    vp L, U;
    // Lower Hull
    for(auto p: P){
        while(L.size()>=2 and esq(L[L.size()-2], L.back(), p)==-1)
            L.pop_back();
        L.push_back(p);
    }
    reverse(P.begin(), P.end());
    // Upper Hull
    for(auto p: P){
        while(U.size()>=2 and esq(U[U.size()-2], U.back(), p)==-1)
            U.pop_back();
        U.push_back(p);
    }
    L.pop_back();
    L.insert(L.end(), U.begin(), U.end()-1);
    return L;
}
