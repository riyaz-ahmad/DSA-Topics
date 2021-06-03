/*
 *This program illustrates the concept of Array Based List
 */


template <class elemType>
class arrayListType{
    public:
    //memeber function for overloading assignment operator
    const arrayListType<elemType>& operator =(const arrayListType<elemType>&);
    //member functions for checking if list is empty
    bool isEmpty() const;
    //function for checking if list is full
    bool isFull() const;
    //fxn for determining no of elements is the list
    int listSize() const;
    //fxn for determing size of list
    int maxListSize() const;
    //fxn for priting elements of the list
    void print() const;
    //fxn for determing whether an item is there in the list as mentioned
    bool isItemAtEqual(int location, const elemType &item ) const;
    //fxn for inserting an item at a specified location
    void insertAt(int location, const elemType &insertItem);
    //fxn for inserting an item at the end of the list
    void insertEnd(const elemType &insertItem);
    //fxn for removing an element at a specified location
    void removeAt(int location);
    //fxn for reteriving an element from the list at a specified location
    void reteriveAt(int location, elemType &retItem) const;
    //fxn for replacing an item from the list at a spcified location
    void replaceAt(int loaction, const elemType &repItem) const;
    //fxn for clearing the list
    void clearList();
    //fxn to search the list for the given item
    int seqSearch(const elemType &item);
    //fxn to insert an item specified bt the parameter'
    void insert(const elemType &insertItem);
    //fxn to remove an item from the list
    void remove(const elemType &removeItem);
    //constructor
    arrayListType(int size=100);
    arrayListType(const arrayListType<elemType> &otherList);
    //destructor
    ~arrayListType();

    protected:
    elemType *list;
    int length;
    int maxSize;
};

template <class elemType>
bool arrayListType<elemType>::isEmpty() const{
    return (length == 0);
}

template <class elemType>
bool arrayListType<elemType>::isFull() const{
    return (length == maxSize);
}

template <class elemType>
int arrayListType<elemType>::listSize() const{
    return length;
}

template <class elemType>
int arrayListType<elemType>::maxListSize() const{
    return maxSize;
}

template <class elemType>
void arrayListType<elemType>:: print() const{
    for(int i=0; i<length; i++)
        cout<<list[i]<<" ";
    cout<<endl;
}

template <class elemType>
bool arrayListType<elemType>::isItemAtEqual(int location, const elemType &item) const{
    return(list[location]==item);
}

template <class elemType>
void arrayListType<elemType>::insertAt(int location, const elemType &inserItem){
    if(location<0 || location >= maxSize)
     cerr<<"The position of the item to be inserted "
         <<"is out of range" <<endl;
    else
        if(length >= maxSize) 
            cerr<< "Cannot insert in a full list"<<endl;
        else{
            for(int i=length; i> location ; i--)
                list[i] = list[i-1];
            list[location] = inserItem;
            length++;
        }
}

template <class elemType>
void arrayListType<elemType>:: insertEnd(const elemType &insertItem){
    if(length >= maxSize)
        cerr <<"Cannot insert in a full list "<<endl;
    else{
        list[length] = insertItem;
        length++;
    }
}

template <class elemType>
void arrayListType<elemType>:: removeAt(int location){
    if(location < 0 || location >= length)
        cerr <<"Location is out of range "<<endl;
    else{
        for(int i = location; i < length-1; i++)
            list[i] = list[i+1];
        length--;
    }
}

template <class elemType>
void arrayListType <elemType> :: reteriveAt(int location, elemType &retItem) const {
    if(location <0; || location >= length)
        cerr<<" Location is out of range "<<endl;
    else
        retItem = list[location];
}

template <class elemType>
void arrayListtype<elemType>:: replaceAt(int location, const elemType &repItem){
    if(location <0 || location >= length)
        cerr<<"Cannot replace the element out of range"<<endl;
    else{
        list[location] = repItem;
    }
}

template <class elemType>
arrayListType<elemType>::arrayListType(){
    if(size < 0){
        cerr<<"The size is always Positive, creating an array of 100 size"<<endl;
        size = 100;
    }
    else
        maxSize = size;
    length = 0;
    list = new elemType[maxSize];
    assert(list != NULL);
}

teplate <class elemType>
arrayListType<elemType> :: ~arrayListType(){
    delete [] list;
}

//copy constructor
template <class elemType>
arrayListType<elemType>::arrayListType(const arrayListType<elemType &otherList>){
    maxSize = otherList.maxSize;
    length = otherList.length;
    list = new elemType[maxSize];
    assert( list != NULL);
    for(int j=0; j<length; j++)
        list[j] = otherList.list[j];
}

//overloading the ssignment operator
template <class elemType>
const arrayListType<elemType> &arrayListType<elemType> :: operator=(const arrayListType<elemType> &otherList){
    if(this != &otherList){
        delete [] list;
        maxSize = otherList.maxSize;
        length = otherList.length;

        list = new elemType[maxSize];
        assert(list != NULL);

        for(int i=0; i<length; i++)
            list[i] = otherList.list[i];
    }
    return *this;
}

// searching: linear search algorithm
template <class elemType>
int arrayListType<elemType> :: seqSearch(const elemType &item) const{
    int loc;
    bool found = false;
    for(loc =0; loc<length; loc++)
        if(list[loc]==item){
            found = true;
            break;
        }
    if(found)
        return loc;
    else
        return -1;
}

//inserting an item
template <class elemType>
void arrayListType<elemType>::insert(const elemType &insertItem){
    int loc;
    if(length == 0)
        list[length++] = insertItem; //insert the item and then increment the length
    else if(length == maxSize)
        cerr<<"Cannot Insert, Item is full"<<endl;
    else{
        loc = seqSearch(insertItem);
        if(loc == -1)//item to be inserted does not exist in the list
            list[length++] = insertItem;
        else
            cerr<<"The item to be inserted into the list is already in the list and no duplicates are allowed"<<endl;
    }
}

//Removing an item from the list
template <class elemType>
void arrayListType<elemType>::remove(const elemType &removeItem){
    int loc;

    if (length == 0)
        cerr<<"Cannot remove from the empty list"<<endl;
    else{
        loc = seqSearch(removeItem);
        if(loc!=-1)
            removeAt(loc);
        else
            cerr<<"Item not in the list"<<endl;
    }
}