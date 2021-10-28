//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EAAccessoryDelegate-Protocol.h"

@class CLSilo, EAAccessory, NSString;

@interface CLAccessoryObserver : NSObject <EAAccessoryDelegate>
{
    EAAccessory *fAccessory;	// 8 = 0x8
    struct CLAccessoryObserverListener fListener;	// 16 = 0x10
    CLSilo *fSilo;	// 72 = 0x48
    _Bool _iAPTimeSyncEnable;	// 80 = 0x50
}

@property(nonatomic) _Bool iAPTimeSyncEnable; // @synthesize iAPTimeSyncEnable=_iAPTimeSyncEnable;
- (void)onStarkTimeSyncNotification:(id)arg1;	// IMP=0x00000001001ea160
- (void)ephemerisURLRequested:(id)arg1;	// IMP=0x00000001001ea028
- (void)locationPointDataRequested:(id)arg1;	// IMP=0x00000001001e9fb8
- (void)timeRequested:(id)arg1;	// IMP=0x00000001001e9f48
- (void)nmeaReceived:(id)arg1;	// IMP=0x00000001001e9cd8
- (void)accessoryDisconnected:(id)arg1;	// IMP=0x00000001001e9cbc
- (void)accessoryConnected:(id)arg1;	// IMP=0x00000001001e9be8
- (void)sendGPRMCDataStatusValues:(_Bool)arg1;	// IMP=0x00000001001e9a60
- (_Bool)setupEphemeris;	// IMP=0x00000001001e98f8
- (_Bool)setupAccessory:(id)arg1 withListenerCall:(_Bool)arg2;	// IMP=0x00000001001e8e50
- (_Bool)isBlackListed:(id)arg1;	// IMP=0x00000001001e8b00
- (_Bool)sendEphemeris:(id)arg1;	// IMP=0x00000001001e8970
- (_Bool)sendReferenceTime:(double)arg1 locationLatitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;	// IMP=0x00000001001e8790
- (_Bool)sendReferenceTime:(double)arg1;	// IMP=0x00000001001e85d8
- (void)accessoryDidDisconnect:(id)arg1;	// IMP=0x00000001001e808c
- (_Bool)stopLocation;	// IMP=0x00000001001e7f78
- (_Bool)startLocation;	// IMP=0x00000001001e7c98
- (void)dealloc;	// IMP=0x00000001001e7c34
- (id)initWithListener:(const struct CLAccessoryObserverListener *)arg1 silo:(id)arg2 timeSync:(_Bool)arg3;	// IMP=0x00000001001e79dc
@property(readonly, nonatomic) EAAccessory *activeAccessory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
