//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFHostCardEmulationDeviceHandleInteface-Protocol.h"

@class NFDriverWrapper, NSString;

@interface NFHostCardEmulationDeviceHandle : NSObject <NFHostCardEmulationDeviceHandleInteface>
{
    NFDriverWrapper *_driver;	// 8 = 0x8
    void *_devHandle;	// 16 = 0x10
}

@property(nonatomic) void *devHandle; // @synthesize devHandle=_devHandle;
@property(retain) NFDriverWrapper *driver; // @synthesize driver=_driver;
- (_Bool)sendAPDU:(id)arg1;	// IMP=0x00000001000b6b48
- (id)readAPDU;	// IMP=0x00000001000b6adc
- (void)dealloc;	// IMP=0x00000001000b6a94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
