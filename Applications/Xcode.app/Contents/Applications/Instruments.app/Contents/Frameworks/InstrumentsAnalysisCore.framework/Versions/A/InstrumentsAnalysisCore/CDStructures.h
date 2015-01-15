//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSMutableAttributedString, NSMutableSet, NSMutableString, NSObject, NSString, XRDescriptorSubstitutions;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct XRAnalysisCoreReadCursor {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
};

struct XRAnalysisCoreTableBindings;

struct XRAnalysisCoreTableColumnInternals;

struct XRAnalysisCoreWriteCursor {
    CDUnknownFunctionPointerType *_field1;
    char _field2;
    struct bitset<64> _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct _XRStorageManagerExternalAccessPack *_field6;
    vector_5b13af2a *_field7;
    struct _XRStorageManagerCursor _field8;
};

struct XRBinderEngine {
    void *_env;
    NSObject *_delegate;
    CDStruct_a3227609 _consoleNameRegex;
    CDStruct_a3227609 _dumpStringRegex;
    NSMutableString *_dumpedString;
    NSMutableAttributedString *_consoleContents;
    NSString *_currentCommand;
    unsigned long long _commandStringLoc;
    unsigned int _strongAddressType;
    NSMutableSet *_clipsHeldObjects;
};

struct XRCLIPS {
    void *_field1;
    id _field2;
    CDStruct_a3227609 _field3;
    CDStruct_a3227609 _field4;
    id _field5;
    id _field6;
    id _field7;
    unsigned long long _field8;
    unsigned int _field9;
    id _field10;
};

struct XRCLIPSModelerEngine {
    void *_env;
    NSObject *_delegate;
    CDStruct_a3227609 _consoleNameRegex;
    CDStruct_a3227609 _dumpStringRegex;
    NSMutableString *_dumpedString;
    NSMutableAttributedString *_consoleContents;
    NSString *_currentCommand;
    unsigned long long _commandStringLoc;
    unsigned int _strongAddressType;
    NSMutableSet *_clipsHeldObjects;
    struct XRAnalysisCoreTableBindings *_currentBindings;
    struct XRAnalysisCoreWriteCursor *_writeCursor;
    unsigned int _currentTableID;
    struct unordered_map<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>>> _columnMapsByTableID;
    unsigned long long _rowsCreated;
    unsigned long long _rowsRead;
};

struct XREventTypeActions {
    Class typeClass;
    unsigned int *fieldOffsets;
    unsigned int initCount;
    unsigned int **preorders;
    CDUnknownBlockType *initializers;
};

struct XRSpatialIndex<XRT50_C22_Strategy>;

struct XRSpatialIndex<XRTD50_CC22_Strategy>;

struct XRSpatialIndexMP<_XRIndexedStorageBasic_MPStrategy<XRT50_C22_Strategy>> {
    struct deque<_XRStorageManagerDirectAddress, std::__1::allocator<_XRStorageManagerDirectAddress>> _field1;
    struct vector<XRSpatialIndex<XRT50_C22_Strategy>*, std::__1::allocator<XRSpatialIndex<XRT50_C22_Strategy>*>> _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    struct _XRIndexedStorageBasic_MPStrategy<XRT50_C22_Strategy> *_field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
};

struct XRSpatialIndexMP<_XRIndexedStorageBasic_MPStrategy<XRTD50_CC22_Strategy>> {
    struct deque<_XRStorageManagerDirectAddress, std::__1::allocator<_XRStorageManagerDirectAddress>> _field1;
    struct vector<XRSpatialIndex<XRTD50_CC22_Strategy>*, std::__1::allocator<XRSpatialIndex<XRTD50_CC22_Strategy>*>> _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    struct _XRIndexedStorageBasic_MPStrategy<XRTD50_CC22_Strategy> *_field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field6;
};

struct XRStorageHeader {
    unsigned int magic;
    unsigned int version;
    unsigned int header_size;
    unsigned int _data_start;
    unsigned int _event_size;
    unsigned int _chunk_size;
    unsigned int events_per_chunk;
    long long data_end;
};

struct XRStorageManagerLock {
    struct _opaque_pthread_mutex_t _lock;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    int _readers;
    int _writers;
};

struct XRTimeRange {
    unsigned long long start;
    unsigned long long length;
};

struct XRVMPagePool {
    CDUnknownFunctionPointerType *_vptr$XRSpatialIndexPagePool;
    _Bool _writable;
    unsigned int _pagesInSuperPage;
    int _fileFD;
    long long _offset;
    unsigned long long _pageSize;
    int _pagesRetained;
    unsigned int _pageCount;
    struct deque<char *, std::__1::allocator<char *>> _mappings;
};

struct _MergingCursor {
    CDUnknownFunctionPointerType *_vptr$XRAnalysisCoreReadCursor;
    unsigned int _currentTableID;
    struct priority_queue<_TimeOrderedCursor *, std::__1::vector<_TimeOrderedCursor *, std::__1::allocator<_TimeOrderedCursor *>>, _TimeOrderedCursorGreater> _timeOrderedCursorPrioQueue;
    struct unordered_multimap<unsigned int, unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _aliasMMap;
    struct __hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>> _currentTableID;
    struct __hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>> _currentTableIDsEnd;
};

struct _TimeOrderedCursor;

struct _XRAnalysisCoreReadCursorSeekable {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    struct function<signed char ()> _field3;
    unsigned int _field4;
    vector_5b13af2a *_field5;
    struct _XRStorageManagerCursor _field6;
};

struct _XRIndexedStorageBasic_MPStrategy<XRT50_C22_Strategy> {
    unsigned int _field1;
    struct _XRStorageManagerExternalAccessPack *_field2;
    id _field3;
};

struct _XRIndexedStorageBasic_MPStrategy<XRTD50_CC22_Strategy> {
    unsigned int _field1;
    struct _XRStorageManagerExternalAccessPack *_field2;
    id _field3;
};

struct _XRStorageManagerAccess {
    struct unordered_map<unsigned int, unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> *_reuseMap;
    struct vector<unsigned int, std::__1::allocator<unsigned int>> *_reuseIdentifiers;
    struct XRVMPagePool _pool;
    struct XRStorageHeader _storageHeader;
    struct XREventTypeActions _typeActions;
    XRDescriptorSubstitutions *_substitutions;
    unsigned int _nextEventIdentifier;
    unsigned int _monotonicNextEventIdentifier;
};

struct _XRStorageManagerAccessToken {
    struct bitset<3> _field1;
    struct XRStorageManagerLock *_field2;
};

struct _XRStorageManagerCursor {
    unsigned int *_field1;
    char *_field2;
    char *_field3;
    _Bool _field4;
    struct XRVMPagePool *_field5;
    struct _XRStorageManagerDirectAddress _field6;
};

struct _XRStorageManagerDirectAddress {
    unsigned int _field1;
    unsigned int _field2;
};

struct _XRStorageManagerExternalAccessPack {
    struct _XRStorageManagerAccessToken _field1;
    struct _XRStorageManagerAccess *_field2;
};

struct __hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>> {
    struct __hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*> {
        struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *> *__node_;
    } __i_;
};

struct __hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>;

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct bitset<3> {
    unsigned long long _field1;
};

struct bitset<64> {
    unsigned long long _field1;
};

struct deque<_XRStorageManagerDirectAddress, std::__1::allocator<_XRStorageManagerDirectAddress>> {
    struct __split_buffer<_XRStorageManagerDirectAddress *, std::__1::allocator<_XRStorageManagerDirectAddress *>> {
        struct _XRStorageManagerDirectAddress **__first_;
        struct _XRStorageManagerDirectAddress **__begin_;
        struct _XRStorageManagerDirectAddress **__end_;
        struct __compressed_pair<_XRStorageManagerDirectAddress **, std::__1::allocator<_XRStorageManagerDirectAddress *>> {
            struct _XRStorageManagerDirectAddress **__first_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<_XRStorageManagerDirectAddress>> {
        unsigned long long __first_;
    } __size_;
};

struct deque<char *, std::__1::allocator<char *>> {
    struct __split_buffer<char **, std::__1::allocator<char **>> {
        char ***__first_;
        char ***__begin_;
        char ***__end_;
        struct __compressed_pair<char ***, std::__1::allocator<char **>> {
            char ***__first_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<char *>> {
        unsigned long long __first_;
    } __size_;
};

struct function<signed char ()> {
    struct type _field1;
    struct __base<signed char ()> *_field2;
};

struct map<unsigned int, XRAnalysisCoreQueryDiscreteFilter, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, XRAnalysisCoreQueryDiscreteFilter>>> {
    struct __tree<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>>> {
        struct __tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, std::__1::less<unsigned int>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, XRAnalysisCoreQueryRangeFilter, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, XRAnalysisCoreQueryRangeFilter>>> {
    struct __tree<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>>> {
        struct __tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, std::__1::less<unsigned int>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct priority_queue<_TimeOrderedCursor *, std::__1::vector<_TimeOrderedCursor *, std::__1::allocator<_TimeOrderedCursor *>>, _TimeOrderedCursorGreater> {
    struct vector<_TimeOrderedCursor *, std::__1::allocator<_TimeOrderedCursor *>> c;
    struct comp;
};

struct re_guts;

struct type {
    unsigned char _field1[24];
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, std::__1::hash<unsigned int>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unordered_map<unsigned long, unsigned int, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>>>, std::__1::equal_to<unsigned int>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned int, unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>;

struct unordered_multimap<unsigned int, unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<XRAnalysisCoreTableColumnInternals, std::__1::allocator<XRAnalysisCoreTableColumnInternals>> {
    struct XRAnalysisCoreTableColumnInternals *__begin_;
    struct XRAnalysisCoreTableColumnInternals *__end_;
    struct __compressed_pair<XRAnalysisCoreTableColumnInternals *, std::__1::allocator<XRAnalysisCoreTableColumnInternals>> {
        struct XRAnalysisCoreTableColumnInternals *__first_;
    } __end_cap_;
};

struct vector<XRSpatialIndex<XRT50_C22_Strategy>*, std::__1::allocator<XRSpatialIndex<XRT50_C22_Strategy>*>> {
    struct XRSpatialIndex<XRT50_C22_Strategy> **_field1;
    struct XRSpatialIndex<XRT50_C22_Strategy> **_field2;
    struct __compressed_pair<XRSpatialIndex<XRT50_C22_Strategy>**, std::__1::allocator<XRSpatialIndex<XRT50_C22_Strategy>*>> {
        struct XRSpatialIndex<XRT50_C22_Strategy> **_field1;
    } _field3;
};

struct vector<XRSpatialIndex<XRTD50_CC22_Strategy>*, std::__1::allocator<XRSpatialIndex<XRTD50_CC22_Strategy>*>> {
    struct XRSpatialIndex<XRTD50_CC22_Strategy> **_field1;
    struct XRSpatialIndex<XRTD50_CC22_Strategy> **_field2;
    struct __compressed_pair<XRSpatialIndex<XRTD50_CC22_Strategy>**, std::__1::allocator<XRSpatialIndex<XRTD50_CC22_Strategy>*>> {
        struct XRSpatialIndex<XRTD50_CC22_Strategy> **_field1;
    } _field3;
};

struct vector<_TimeOrderedCursor *, std::__1::allocator<_TimeOrderedCursor *>> {
    struct _TimeOrderedCursor **__begin_;
    struct _TimeOrderedCursor **__end_;
    struct __compressed_pair<_TimeOrderedCursor **, std::__1::allocator<_TimeOrderedCursor *>> {
        struct _TimeOrderedCursor **__first_;
    } __end_cap_;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    int re_magic;
    unsigned long long re_nsub;
    char *re_endp;
    struct re_guts *re_g;
} CDStruct_a3227609;

// Template types
typedef struct map<unsigned int, XRAnalysisCoreQueryDiscreteFilter, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, XRAnalysisCoreQueryDiscreteFilter>>> {
    struct __tree<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>>> {
        struct __tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryDiscreteFilter>, std::__1::less<unsigned int>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} map_c516c4f7;

typedef struct map<unsigned int, XRAnalysisCoreQueryRangeFilter, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, XRAnalysisCoreQueryRangeFilter>>> {
    struct __tree<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>>> {
        struct __tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, XRAnalysisCoreQueryRangeFilter>, std::__1::less<unsigned int>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} map_58539d56;

typedef struct vector<XRAnalysisCoreTableColumnInternals, std::__1::allocator<XRAnalysisCoreTableColumnInternals>> {
    struct XRAnalysisCoreTableColumnInternals *__begin_;
    struct XRAnalysisCoreTableColumnInternals *__end_;
    struct __compressed_pair<XRAnalysisCoreTableColumnInternals *, std::__1::allocator<XRAnalysisCoreTableColumnInternals>> {
        struct XRAnalysisCoreTableColumnInternals *__first_;
    } __end_cap_;
} vector_5b13af2a;
