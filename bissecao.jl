function bissecao(f,a, b, tol, max=100)
   m = 0
   i=1
   while  i < max && abs(a-b) > tol
    m = (a+b)/2;
        if f(a)*f(m) < 0
            b = m
        else
            a = m
        end
    i += 1
    end
return m
end
a,b = 1,2;
f(x) = 1.2x^4 -0.7x^2 - 3.6x;
g(x) = x^2+2x-1;
h(x) = x^2-2


bissecao(g,0,1,0.01)
bissecao(f,1,2,0.01)
bissecao(h,1,2,0.0001)