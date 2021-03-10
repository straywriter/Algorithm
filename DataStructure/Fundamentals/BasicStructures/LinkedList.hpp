#pragma once


namespace datastruct
{

template <typename Type> class LinkedListNode
{

  private:
};

template <typename Type> class LinkedList
{
  private:
    template <typename Type> class LinkedListNode
    {

      private:

    };

  public:
    // typedef Node ;

    LinkedList();
    ~LinkedList();

    void Add(Type);
    void Delete(size_t index);
    Node Find();
    void Clear();
    void Insert(size_t index, Type value);

    Type First();
    Type Last();

    void Reverse();

    int Lenth();

    int MemorySize();

    bool IsEmpty();
    void Sort();

    Type &operator[](size_t index);

  protected:
    LinkedListNode MakeNode();
    void DeleteNode(); //?

  private:
    LinkedListNode<Type> header;
    LinkedListNode<Type> trailer;
};

} // namespace datastruct
