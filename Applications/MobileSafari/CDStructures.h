//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    id foregroundNotificationObserver;
    id backgroundNotificationObserver;
    _Bool needsDeferredContentUpdate;
    _Bool sceneIsForeground;
} CDStruct_4e0a34f2;

typedef struct {
    int nodes;
    int bytes;
} CDStruct_81cc75c8;

typedef struct {
    struct CGPoint offset;
    double zOffset;
    double logScale;
} CDStruct_5ca50560;

typedef struct {
    struct CGRect _field1;
    struct UIEdgeInsets _field2;
    struct UIEdgeInsets _field3;
    struct CGSize _field4;
    struct CGSize _field5;
    struct UIEdgeInsets _field6;
    _Bool _field7;
    _Bool _field8;
} CDStruct_65294ada;

