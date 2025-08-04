int main(void) {
        int k, p1, p2, p3 = 0;
        scanf("%d %d %d %d", &k, &p1, &p2, &p3);
        if (p1 + p2 + p3 <= k) {
                printf("YES\n");
        } else if (p1 + p2 <= k && p2 + p3 <= k){
                printf("YES\n");
        } else if (p1 + p3 <= k && p1 + p2 <= k){
                printf("YES\n");
        } else if (p3 + p1 <= k && p3 + p2 <= k){
                printf("YES\n");        
        } else if ((p1 + p2 <= p3 && p3 <= k) || (p2 + p3 <= p1 && p1 <= k) || (p1 + p3 <= p2 && p2 <= k)) {
                printf("YES\n");
        } else {
                printf("NO\n");
        }
} 
