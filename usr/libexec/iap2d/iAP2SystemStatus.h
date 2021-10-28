//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface iAP2SystemStatus : NSObject
{
    unsigned long long _holdState;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_btEventQueue;	// 24 = 0x18
}

+ (id)GetSoftwareVersion;	// IMP=0x0000000100046c64
+ (id)GetModelName;	// IMP=0x0000000100046bec
+ (id)GetSerialNumber;	// IMP=0x0000000100046bd0
+ (id)GetDeviceName;	// IMP=0x0000000100046bb4
+ (id)GetMobileGestaltKeyValue:(struct __CFString *)arg1;	// IMP=0x00000001000466b0
+ (id)sharedInstance;	// IMP=0x000000010004662c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *btEventQueue; // @synthesize btEventQueue=_btEventQueue;
@property(nonatomic) struct BTSessionImpl *btSession; // @synthesize btSession=_session;
@property(nonatomic) unsigned long long holdState; // @synthesize holdState=_holdState;
- (int)UpdateBTComponent:(id)arg1 withState:(int)arg2;	// IMP=0x000000010004717c
- (void)UnplugBTDevice:(id)arg1 btAccessoryManager:(struct BTAccessoryManagerImpl *)arg2 btDevice:(struct BTDeviceImpl *)arg3 btName:(const char *)arg4;	// IMP=0x00000001000470ec
- (void)PluginBTDevice:(id)arg1 btAccessoryManager:(struct BTAccessoryManagerImpl *)arg2 btDevice:(struct BTDeviceImpl *)arg3 btName:(const char *)arg4;	// IMP=0x0000000100047020
- (void)PostAudioOutputStateChange:(unsigned char)arg1;	// IMP=0x000000010004701c
- (void)NotifyOfUSBHostModeChange:(id)arg1;	// IMP=0x0000000100047018
- (void)PostSwapAccessoryNotificationActivate:(id)arg1 deactivate:(id)arg2;	// IMP=0x0000000100047014
- (void)setMode:(unsigned char)arg1 forMACAddress:(id)arg2;	// IMP=0x0000000100046f2c
- (unsigned char)modeForMACAddress:(id)arg1;	// IMP=0x0000000100046ed4
- (void)clearRegisteredComponentsForConnectionID:(unsigned int)arg1;	// IMP=0x0000000100046e98
- (_Bool)isComponent:(id)arg1 registeredForConnectionID:(unsigned int)arg2;	// IMP=0x0000000100046e54
- (void)unregisterComponent:(id)arg1 forConnectionID:(unsigned int)arg2;	// IMP=0x0000000100046e10
- (void)registerComponent:(id)arg1 forConnectionID:(unsigned int)arg2;	// IMP=0x0000000100046dcc
- (_Bool)IsAssistiveTouchEnabled;	// IMP=0x0000000100046db0
- (id)GetNowPlayingAppName;	// IMP=0x0000000100046d34
- (id)GetNowPlayingApp;	// IMP=0x0000000100046ce8
- (_Bool)IsHoldSwitchOn;	// IMP=0x0000000100046cd8
- (void)_changeListenerQueuePriorityStop:(id)arg1;	// IMP=0x0000000100046ba8
- (void)_changeListenerQueuePriorityHigh:(id)arg1;	// IMP=0x0000000100046b64
- (void)dealloc;	// IMP=0x0000000100046a78
- (id)init;	// IMP=0x000000010004674c

@end
