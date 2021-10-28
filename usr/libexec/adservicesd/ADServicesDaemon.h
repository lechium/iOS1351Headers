//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADStatusConditionListener;
@protocol OS_dispatch_source;

@interface ADServicesDaemon : NSObject
{
    NSObject<OS_dispatch_source> *_memoryNotificationSource;	// 8 = 0x8
    _Bool _hasCreatedAdSpace;	// 16 = 0x10
    double _lastURLCachePersist;	// 24 = 0x18
    ADStatusConditionListener *_statusConditionListener;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000096e0
- (void).cxx_destruct;	// IMP=0x000000010000b0d0
@property(retain, nonatomic) ADStatusConditionListener *statusConditionListener; // @synthesize statusConditionListener=_statusConditionListener;
@property(nonatomic) _Bool hasCreatedAdSpace; // @synthesize hasCreatedAdSpace=_hasCreatedAdSpace;
@property(nonatomic) double lastURLCachePersist; // @synthesize lastURLCachePersist=_lastURLCachePersist;
- (void)startAdServices;	// IMP=0x000000010000a080
- (void)updateCurrentDSID:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009b14
- (void)_persistURLCache;	// IMP=0x000000010000995c
- (void)_setupiAdID;	// IMP=0x00000001000098e4
- (void)startUpdatingIDs;	// IMP=0x00000001000097cc
- (id)init;	// IMP=0x000000010000974c

@end
