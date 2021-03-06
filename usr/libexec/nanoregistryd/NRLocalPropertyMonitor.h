//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSPointerArray;
@protocol NSObject;

@interface NRLocalPropertyMonitor : NSObject <NSSecureCoding>
{
    _Bool _hasRegisteredForNotifications;	// 8 = 0x8
    _Bool _logAllPropertyReads;	// 9 = 0x9
    NSDictionary *_properties;	// 16 = 0x10
    NSMutableDictionary *_propertyCache;	// 24 = 0x18
    struct MGNotificationTokenStruct *_MGToken;	// 32 = 0x20
    id <NSObject> _localeToken;	// 40 = 0x28
    id <NSObject> _planToken;	// 48 = 0x30
    NSPointerArray *_observers;	// 56 = 0x38
    id _deviceCollectionObserver;	// 64 = 0x40
}

+ (void)initializeGetters;	// IMP=0x00000001000a184c
+ (id)remoteDeviceChipIDNumber;	// IMP=0x00000001000a11b8
+ (void)makeRemoteDeviceChipIDNumberQueue;	// IMP=0x00000001000a0f80
+ (id)_getGestaltDmin:(struct __CFString *)arg1;	// IMP=0x00000001000a0f64
+ (id)_getGestaltDictionary:(struct __CFString *)arg1;	// IMP=0x00000001000a0eac
+ (id)_getGestaltData:(struct __CFString *)arg1;	// IMP=0x00000001000a0e48
+ (id)_getGestaltStringValue:(struct __CFString *)arg1 withName:(id)arg2;	// IMP=0x00000001000a0dd8
+ (id)_getGestaltString:(struct __CFString *)arg1;	// IMP=0x00000001000a0dc0
+ (id)_getGestaltNumber:(struct __CFString *)arg1;	// IMP=0x00000001000a0da4
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000a0aa0
- (void).cxx_destruct;	// IMP=0x00000001000a6adc
@property(nonatomic) _Bool logAllPropertyReads; // @synthesize logAllPropertyReads=_logAllPropertyReads;
@property(nonatomic) _Bool hasRegisteredForNotifications; // @synthesize hasRegisteredForNotifications=_hasRegisteredForNotifications;
@property(retain, nonatomic) id deviceCollectionObserver; // @synthesize deviceCollectionObserver=_deviceCollectionObserver;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <NSObject> planToken; // @synthesize planToken=_planToken;
@property(nonatomic) __weak id <NSObject> localeToken; // @synthesize localeToken=_localeToken;
@property(nonatomic) struct MGNotificationTokenStruct *MGToken; // @synthesize MGToken=_MGToken;
@property(retain, nonatomic) NSMutableDictionary *propertyCache; // @synthesize propertyCache=_propertyCache;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void)refreshPropertyCache;	// IMP=0x00000001000a68d4
- (void)registerForNotifications;	// IMP=0x00000001000a57c8
- (double)abs_to_seconds:(unsigned long long)arg1;	// IMP=0x00000001000a579c
- (unsigned long long)abs_to_nanos:(unsigned long long)arg1;	// IMP=0x00000001000a5784
- (double)blockTimer:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a5700
- (id)_readProperty:(id)arg1 shouldUpdateCache:(_Bool)arg2 isUpdated:(_Bool *)arg3 forceLog:(_Bool)arg4;	// IMP=0x00000001000a513c
- (void)_notifyObserversPropertiesDidChange:(id)arg1 thisIsAllOfThem:(_Bool)arg2;	// IMP=0x00000001000a4f5c
- (void)_pollPropertiesAllOfThem:(_Bool)arg1 dontSendChanges:(_Bool)arg2;	// IMP=0x00000001000a4c70
- (void)pollProperties;	// IMP=0x00000001000a4b78
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000001000a4a44
- (void)removePropertyObserver:(id)arg1;	// IMP=0x00000001000a16dc
- (void)addPropertyObserver:(id)arg1;	// IMP=0x00000001000a16cc
- (void)unregisterFromNotifications;	// IMP=0x00000001000a144c
- (void)dealloc;	// IMP=0x00000001000a1400
- (id)init;	// IMP=0x00000001000a12b0
- (void)setRemoteDeviceChipIDNumber:(id)arg1;	// IMP=0x00000001000a0fe8
- (id)description;	// IMP=0x00000001000a0c0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000a0bec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000a0aa8

@end

