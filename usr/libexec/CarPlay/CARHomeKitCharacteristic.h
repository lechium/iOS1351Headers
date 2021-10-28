//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARHomeKitEntity-Protocol.h"

@class CARHome, CARHomeKitService, HMCharacteristic, NSError, NSString, NSUUID;

@interface CARHomeKitCharacteristic : NSObject <CARHomeKitEntity>
{
    _Bool _current;	// 8 = 0x8
    id _value;	// 16 = 0x10
    id _formatedValue;	// 24 = 0x18
    CARHomeKitService *_service;	// 32 = 0x20
    HMCharacteristic *_characteristic;	// 40 = 0x28
    id _pendingWriteValue;	// 48 = 0x30
    id _pendingReadValue;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

+ (id)characteristicFormats;	// IMP=0x0000000100024e38
+ (id)characteristicFormat;	// IMP=0x0000000100024e2c
+ (id)chacteristicWithService:(id)arg1 characteristic:(id)arg2;	// IMP=0x0000000100023d94
+ (id)registeredCharacteristicClasses;	// IMP=0x0000000100023d28
+ (void)registerCharacteristicClass:(Class)arg1;	// IMP=0x0000000100023b5c
+ (void)load;	// IMP=0x0000000100023af0
- (void).cxx_destruct;	// IMP=0x000000010002551c
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id pendingReadValue; // @synthesize pendingReadValue=_pendingReadValue;
@property(retain, nonatomic) id pendingWriteValue; // @synthesize pendingWriteValue=_pendingWriteValue;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) __weak CARHomeKitService *service; // @synthesize service=_service;
@property(nonatomic) _Bool current; // @synthesize current=_current;
@property(retain, nonatomic) id formatedValue; // @synthesize formatedValue=_formatedValue;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSString *stateDescription;
- (id)statesDescription;	// IMP=0x000000010002511c
@property(readonly, nonatomic) _Bool usable;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)_updateValue;	// IMP=0x0000000100024ed4
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool writeable;
@property(readonly, nonatomic) _Bool readable;
@property(readonly, nonatomic) _Bool notifies;
@property(readonly, nonatomic) NSString *format;
- (void)updateValue;	// IMP=0x0000000100024464
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool pendingRead;
@property(readonly, nonatomic) _Bool pendingWrite;
@property(readonly, nonatomic) CARHome *home;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)initWithService:(id)arg1 characteristic:(id)arg2;	// IMP=0x0000000100023f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
