#pragma once

namespace datastructure
{
    
/**
 * 固定大小数组 c数组操作
 *
 * @tparam Type
 * @tparam size
 */
template <typename Type, size_t size> class Array
{
  public:
    Array();

    void Get(size_t index);

    void Set(size_t index, Type value);

    int Size() const;

    Type First();
    Type Last();

    bool IsEmpty();
    void Add(Type value);

    int Find(Type value);

    Type Max();
    Type Min();

    void Clear();

    void Sort();
    void Sort(size_t first, size_t second);

    void Traverse();

    void Delete(size_t index);

    T &operator[](size_t index) const;

  private:
    Type data[size];
};
} // namespace datastructure