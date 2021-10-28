//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AppFrameworkListener {
    CDUnknownFunctionPointerType *_field1;
};

struct AudioSkywalkProvider {
    struct nexus_controller *_field1;
    unsigned char _field2[16];
};

struct CallInfo;

struct CallList {
    struct vector<BT::CallInfo, std::__1::allocator<BT::CallInfo>> fCalls;
};

struct Delegate {
    CDUnknownFunctionPointerType *_field1;
};

struct LeDevice {
    id _field1;
    id _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    _Bool _field5;
    _Bool _field6;
    basic_string_3f66b750 _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    long long _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _field19;
    basic_string_3f66b750 _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    struct Time _field27;
    unsigned short _field28;
    unsigned char _field29;
    unsigned char _field30;
    _Bool _field31;
    id _field32;
    id _field33;
    id _field34;
    id _field35;
    id _field36;
    id _field37;
    id _field38;
    id _field39;
    id _field40;
    unsigned short _field41;
    unsigned char _field42;
    _Bool _field43;
    _Bool _field44;
    _Bool _field45;
    id _field46;
    _Bool _field47;
};

struct LeDeviceCacheEventListener {
    CDUnknownFunctionPointerType *_field1;
};

struct Mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        unsigned char __opaque[56];
    } fMutex;
};

struct OperatorStatus {
    int _field1;
    basic_string_3f66b750 _field2;
};

struct PhoneNumber {
    basic_string_3f66b750 _field1;
    unsigned char _field2;
    basic_string_3f66b750 _field3;
};

struct Time {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct XPCAudioPluginDeviceDelegate;

struct XpcAudioPluginClient {
    struct _xpc_connection_s *_field1;
};

struct XpcAudioPluginDevice {
    CDUnknownFunctionPointerType *_field1;
    basic_string_3f66b750 _field2;
    struct XPCAudioPluginDeviceDelegate *_field3;
    struct atomic<bool> _field4;
    struct atomic<bool> _field5;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool _field1;
    } _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    unsigned char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct map<std::__1::basic_string<char>, BT::XpcAudioPluginDevice *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, BT::XpcAudioPluginDevice *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, BT::XpcAudioPluginDevice *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, BT::XpcAudioPluginDevice *>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, BT::XpcAudioPluginDevice *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, BT::XpcAudioPluginDevice *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, BT::XpcAudioPluginDevice *>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct nexus_controller;

struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct __tree<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::basic_string<char>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<std::__1::basic_string<char>>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vector<BT::CallInfo, std::__1::allocator<BT::CallInfo>> {
    struct CallInfo *__begin_;
    struct CallInfo *__end_;
    struct __compressed_pair<BT::CallInfo *, std::__1::allocator<BT::CallInfo>> {
        struct CallInfo *__value_;
    } __end_cap_;
};

struct vector<BT::XpcAudioPluginClient *, std::__1::allocator<BT::XpcAudioPluginClient *>> {
    struct XpcAudioPluginClient **__begin_;
    struct XpcAudioPluginClient **__end_;
    struct __compressed_pair<BT::XpcAudioPluginClient **, std::__1::allocator<BT::XpcAudioPluginClient *>> {
        struct XpcAudioPluginClient **__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_7523a67d;

typedef struct {
    unsigned char _field1[16];
    unsigned char _field2[4];
    double _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
    char _field7;
    _Bool _field8;
    unsigned char _field9;
} CDStruct_3f8e1fcf;

typedef struct {
    unsigned char _field1[6];
} CDStruct_5cfa2073;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    unsigned char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_3f66b750;
