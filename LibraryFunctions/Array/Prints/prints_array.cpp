

template <class T>
void Array<T>::Print()
    {
        validate();
        cout<<endl;
        for(int i = 0;i<size;i++)
        {
            cout<<" "<<self[i];
        }
    }