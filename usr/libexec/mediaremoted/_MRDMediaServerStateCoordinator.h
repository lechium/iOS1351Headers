//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _MRDMediaServerStateCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_dataSourceHashesToDiscoveryModes;	// 16 = 0x10
    unsigned int _currentDiscoveryMode;	// 24 = 0x18
}

+ (id)sharedCoordinator;	// IMP=0x00000001000452e4
- (void).cxx_destruct;	// IMP=0x00000001000458f0
@property(readonly, nonatomic) unsigned int currentDiscoveryMode; // @synthesize currentDiscoveryMode=_currentDiscoveryMode;
- (void)_updateMediaServerDiscoveryMode;	// IMP=0x0000000100045644
- (void)clearDiscoveryModeForDataSource:(id)arg1;	// IMP=0x0000000100045528
- (void)setDiscoveryMode:(unsigned int)arg1 forDataSource:(id)arg2;	// IMP=0x00000001000453d8
- (id)init;	// IMP=0x0000000100045350

@end
