#include<cstdint>


template <typename Addr = uint64_t> struct Layout {
    virtual Addr first_address(); 
};


template <typename Addr = uint64_t> struct RectilinearLayout : Layout<Addr> {};


template <typename Addr = uint64_t> struct DenseRectilinearLayout : RectilinearLayout {} ;