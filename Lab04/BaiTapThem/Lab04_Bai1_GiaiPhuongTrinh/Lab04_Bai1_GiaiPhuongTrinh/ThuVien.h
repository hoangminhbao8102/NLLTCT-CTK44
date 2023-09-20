#define M_PI 3.1415926

void GiaiPTBacNhat(float a, float b);
void GiaiPTBacHai(float a, float b, float c);
void GiaiPTBacBa(float a, float b, float c, float d);
void GiaiPTTrungPhuong(float a, float b, float c);
void GiaiHePTBacNhat(float a1, float b1, float c1, float a2, float b2, float c2);
void GiaiHePTBacHai(float a1, float b1, float c1, float a2, float b2, float c2, float d1, float d2);

void GiaiPTBacNhat(float a, float b) 
{
    if (a == 0) 
    {
        if (b == 0) 
        {
            cout << "Phuong trinh vo so nghiem" << endl;
        }
        else 
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
    else 
    {
        float x = -b / a;
        cout << "Phuong trinh co nghiem duy nhat x = " << x << endl;
    }
}

void GiaiPTBacHai(float a, float b, float c) 
{
    if (a == 0) 
    {
        GiaiPTBacNhat(b, c);
    }
    else 
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0) 
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (delta == 0) 
        {
            float x = -b / (2 * a);
            cout << "Phuong trinh co nghiem kep x = " << x << endl;
        }
        else 
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem phan biet x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
}

void GiaiPTBacBa(float a, float b, float c, float d) 
{
    if (a == 0) 
    {
        GiaiPTBacHai(b, c, d);
    }
    else 
    {
        float delta = b * b * c * c - 4 * a * c * c * c - 4 * b * b * b * d - 27 * a * a * d * d + 18 * a * b * c * d;
        float D = b * b * c * c - 3 * a * c * c - 12 * b * d - 27 * a * a * d + 9 * a * b * c;
        if (delta > 0) 
        {
            float u = (cbrt((-D + sqrt(delta)) / 2) + cbrt((-D - sqrt(delta)) / 2)) / (3 * a);
            cout << "Phuong trinh co nghiem thuc u = " << u << endl;
        }
        else if (delta == 0) 
        {
            float u = cbrt((-D) / 2) / (3 * a);
            cout << "Phuong trinh co nghiem thuc u = " << u << endl;
        }
        else 
        {
            float v = sqrt(-D / 3) / (3 * a);
            float w = acos(-sqrt(-27 * a * a * delta) / (2 * D * sqrt(-D / 3))) / 3;
            float u1 = 2 * cbrt(v) * cos(w) - b / (3 * a);
            float u2 = 2 * cbrt(v) * cos(w + 2 * M_PI / 3) - b / (3 * a);
            float u3 = 2 * cbrt(v) * cos(w + 4 * M_PI / 3) - b / (3 * a);
            cout << "Phuong trinh co ba nghiem phan biet u1 = " << u1 << ", u2 = " << u2 << ", u3 = " << u3 << endl;
        }
    }
}

void GiaiPTTrungPhuong(float a, float b, float c) 
{
    GiaiPTBacBa(a, b, c, 0);
}

void GiaiHePTBacNhat(float a1, float b1, float c1, float a2, float b2, float c2) 
{
    float D = a1 * b2 - a2 * b1;
    float Dx = c1 * b2 - c2 * b1;
    float Dy = a1 * c2 - a2 * c1;
    if (D == 0) 
    {
        if (Dx == 0 && Dy == 0) 
        {
            cout << "He phuong trinh co vo so nghiem" << endl;
        }
        else 
        {
            cout << "He phuong trinh vo nghiem" << endl;
        }
    }
    else 
    {
        float x = Dx / D;
        float y = Dy / D;
        cout << "He phuong trinh co nghiem duy nhat (x, y) = (" << x << ", " << y << ")" << endl;
    }
}

void GiaiHePTBacHai(float a1, float b1, float c1, float a2, float b2, float c2, float d1, float d2) 
{
    float D = a1 * b2 - a2 * b1;
    float Dx = c1 * b2 - c2 * b1;
    float Dy = a1 * c2 - a2 * c1;
    float Dz = d1 * b2 - d2 * b1;
    if (D == 0) {
        GiaiHePTBacNhat(c1, d1, c2, c2, d2, 0);
    }
    else 
    {
        float D1 = Dx * b2 - Dz * b1;
        float D2 = Dy * b2 - Dz * a1;
        float D3 = a1 * Dz - c1 * b1;
        float x = D1 / D;
        float y = D2 / D;
        float z = D3 / D;
        cout << "He phuong trinh co nghiem duy nhat (x, y, z) = (" << x << ", " << y << ", " << z << ")" << endl;
    }
}