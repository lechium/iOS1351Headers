//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString, NSUUID, OS_remote_device;
@protocol OS_dispatch_queue;

@interface CBDRemoteDeviceConnection : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSString *_productType;	// 24 = 0x18
    NSString *_osVersion;	// 32 = 0x20
    OS_remote_device *_remoteDevice;	// 40 = 0x28
    NSDictionary *_properties;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serviceDiscoveryQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000054dc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceDiscoveryQueue; // @synthesize serviceDiscoveryQueue=_serviceDiscoveryQueue;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) OS_remote_device *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000052bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005244
- (_Bool)isEqualToDeviceConnection:(id)arg1;	// IMP=0x00000001000051a8
- (unsigned long long)hash;	// IMP=0x000000010000515c
- (id)description;	// IMP=0x0000000100005038
- (void)dealloc;	// IMP=0x0000000100004fec
- (void)invalidate;	// IMP=0x0000000100004f94
- (id)initWithRemoteDevice:(id)arg1;	// IMP=0x00000001000049e0

@end
