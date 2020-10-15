
void sort_by_area(triangle* tr, int n) {
	int i,j;
    double area[n];
    for(i=0;i<n;i++){
        double l1,l2,l3;
        l1 = tr[i].a;
        l2 = tr[i].b;
        l3 = tr[i].c;
        double s = (l1+l2+l3)/2;
        double ar = sqrt((s-l1)*(s-l2)*(s-l3)*s);
        area[i] = ar;
    }

    for(i=0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(area[i]>area[j]){
                double temp = area[i];
                area[i] = area[j];
                area[j] = temp;
                triangle temp2 = tr[i];
                tr[i] = tr[j];
                tr[j] = temp2;
            }
        }
    }
}


