//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADeviceObserver-Protocol.h"
#import "DADeviceObserverEnclosureDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface DADeviceObserverAggregator : NSObject <DADeviceObserverEnclosureDelegate, DADeviceObserver>
{
    NSOperationQueue *_discoveryQueue;	// 8 = 0x8
    NSArray *_observers;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
}

+ (id)defaultObserverClasses;	// IMP=0x000000010001926c
+ (id)aggregatorWithObserverClasses:(id)arg1;	// IMP=0x000000010001921c
- (void).cxx_destruct;	// IMP=0x000000010001a13c
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSOperationQueue *discoveryQueue; // @synthesize discoveryQueue=_discoveryQueue;
- (void)_endObserving;	// IMP=0x0000000100019fe4
- (void)_beginObserving;	// IMP=0x0000000100019ec8
- (void)observerDidChangeDevices:(id)arg1;	// IMP=0x0000000100019c34
- (void)discoverAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000198d4
- (void)endDiscoveringDevicesWithIdentifier:(id)arg1;	// IMP=0x0000000100019814
- (id)beginDiscoveringDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000196ec
- (id)allDevices;	// IMP=0x0000000100019570
- (id)initWithObserverClasses:(id)arg1;	// IMP=0x0000000100019314
- (id)init;	// IMP=0x00000001000192b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
