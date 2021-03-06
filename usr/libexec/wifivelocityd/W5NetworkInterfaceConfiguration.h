//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface W5NetworkInterfaceConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __SCDynamicStore *_storeRef;	// 16 = 0x10
    _Bool _isMonitoringEvents;	// 24 = 0x18
    NSString *_interfaceName;	// 32 = 0x20
    NSString *_hardwareAddress;	// 40 = 0x28
    CDUnknownBlockType _updatedNetworkInterfaceCallback;	// 48 = 0x30
}

@property(copy, nonatomic) CDUnknownBlockType updatedNetworkInterfaceCallback; // @synthesize updatedNetworkInterfaceCallback=_updatedNetworkInterfaceCallback;
@property(readonly, nonatomic) NSString *hardwareAddress; // @synthesize hardwareAddress=_hardwareAddress;
@property(readonly, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (id)__hardwareAddress;	// IMP=0x00000001000156fc
- (_Bool)isLinkActive;	// IMP=0x0000000100015604
- (id)ipv6PrefixLengths;	// IMP=0x00000001000154cc
- (id)ipv6Flags;	// IMP=0x0000000100015394
- (id)ipv6Addresses;	// IMP=0x000000010001525c
- (id)ipv4SubnetMasks;	// IMP=0x0000000100015124
- (id)ipv4BroadcastAddresses;	// IMP=0x0000000100014fec
- (id)ipv4Addresses;	// IMP=0x0000000100014eb4
- (id)__linkStateConfig;	// IMP=0x0000000100014e0c
- (id)__ipv6StateConfig;	// IMP=0x0000000100014d64
- (id)__ipv4StateConfig;	// IMP=0x0000000100014cbc
- (id)__airPortSetupConfig;	// IMP=0x0000000100014c14
- (id)__airPortStateConfig;	// IMP=0x0000000100014b6c
- (id)airPortSetupConfiguration;	// IMP=0x0000000100014a4c
- (id)airPortStateConfiguration;	// IMP=0x0000000100014910
- (void)stopEventMonitoring;	// IMP=0x0000000100014868
- (void)__stopEventMonitoring;	// IMP=0x0000000100014824
- (void)startEventMonitoring;	// IMP=0x0000000100014778
- (void)__startEventMonitoring;	// IMP=0x0000000100014644
- (void)dealloc;	// IMP=0x00000001000145d4
- (id)init;	// IMP=0x00000001000144c0
- (id)initWithInterfaceName:(id)arg1;	// IMP=0x000000010001427c

@end

