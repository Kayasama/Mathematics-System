int GCD(int a, int b)
{
    int remainer;
    remainer = b % a;
    if(remainer == 0) return a;
    else
    return GCD(remainer, a);
}


/*
 three gallon jug and five gallon jug, their gcd is 1,
 so, we can make exactly 1 gallon water in one of these jugs.
 So, that means we can also have any multiple of 1.
 a linear combination of a and b.
 Lemma : gcd(a,b) = gcd(rem(b,a), a) 
 Proof of this lemma : if m | a and m | b, then m | rem(b, a) = b - qa and m | a.
 a divides any linear combination of b and c
 To prove this lemma, we need to prove gcd(a, b) <= gcd(rem(b, a), a), and
 (a, b) >= gcd(rem(b, a), a)

 Thm : gcd(a,b) is a linear combination of a and b
 Pf(By induction): Invariant
 P(n) : if Euclid's Algorithm reaches gcd(x,y) after n steps,
        then, x and y are linear combination of a and b, gcd(a,b) = gcd(x,y).
 Base case : P(0) is true
 Inductive step : Assume P(n), we have reached some state x,y
*/
