//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12searchpartyd23BeaconManagerTrampoline : NSObject
{
    MISSING_TYPE *implementation;	// 8 = 0x8
    MISSING_TYPE *beaconStore;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001abc3c
- (id)init;	// IMP=0x00000001001abbe0
- (void)alwaysBeaconStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001abb70
- (void)setAlwaysBeaconState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001abb08
- (void)currentBeaconingKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aba48
- (void)getLocalPairingDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aba3c
- (void)getMacBeaconConfigWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aba30
- (void)setServiceState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab9bc
- (void)beaconingKeysForUUID:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ab850
- (void)beaconingKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ab834
- (void)unacceptedBeaconsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ab6a0
- (void)allBeaconsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab600
- (void)allBeaconsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ab3f4
- (void)notificationBeaconForSubscriptionId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab0b4
- (void)beaconForUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab090
- (void)beaconingStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ab074
- (void)removeLocalAccountDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001aade4
- (void)primaryAccountModified;	// IMP=0x00000001001aadb8

@end

