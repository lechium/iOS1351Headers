//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID[20];
};

struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> *__next_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> {
    struct __hash_table<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*>, std::__1::allocator<std::__1::__hash_node<sqlite3_stmt *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<sqlite3_stmt *, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<sqlite3_stmt *>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<sqlite3_stmt *>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

// Ambiguous groups
typedef struct {
    unsigned int action:1;
    unsigned int payloadSize:1;
    unsigned int type:1;
} CDStruct_32b64e58;

typedef struct {
    unsigned int domain:1;
    unsigned int flags:1;
    unsigned int state:1;
} CDStruct_06c35b4c;

typedef struct {
    unsigned int flags:1;
    unsigned int domain:1;
    unsigned int state:1;
} CDStruct_214543d2;

typedef struct {
    unsigned int limit:1;
} CDStruct_88fc3008;

typedef struct {
    unsigned int roleType:1;
} CDStruct_881fb62f;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

