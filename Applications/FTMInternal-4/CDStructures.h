//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct Manager;

struct shared_ptr<abm::client::Manager> {
    struct Manager *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

// Ambiguous groups
typedef struct {
    unsigned int arfcn:1;
    unsigned int bsic:1;
    unsigned int rxlev:1;
} CDStruct_ed0dc830;

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;
