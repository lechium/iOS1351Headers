//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iAP2IdentificationParameter.h"

@class NSData, NSNumber, NSString;

@interface iAP2TransportComponent : iAP2IdentificationParameter
{
    NSNumber *componentID;	// 24 = 0x18
    NSString *componentName;	// 32 = 0x20
    unsigned char supportsiAPConnection;	// 40 = 0x28
    int transportType;	// 44 = 0x2c
    NSData *macAddr;	// 48 = 0x30
    NSData *btPairingTypes;	// 56 = 0x38
    unsigned int btServicesFilter;	// 64 = 0x40
    unsigned int sampleRateBitmask;	// 68 = 0x44
    unsigned char mode;	// 72 = 0x48
    _Bool hasNCMInterface;	// 73 = 0x49
    _Bool isCarPlay;	// 74 = 0x4a
    struct BTAccessoryManagerImpl *btAccessoryManager;	// 80 = 0x50
    struct BTDeviceImpl *btDevice;	// 88 = 0x58
    _Bool needToUnplugBTDevice;	// 96 = 0x60
    unsigned char _NCMInterfaceNumber;	// 97 = 0x61
}

+ (unsigned int)sampleRateMaskFromEnum:(int)arg1;	// IMP=0x000000010002cb04
+ (unsigned int)sampleRateValueFromEnum:(int)arg1;	// IMP=0x000000010002caac
+ (int)sampleRateEnumFromValue:(unsigned int)arg1;	// IMP=0x000000010002c994
@property unsigned char NCMInterfaceNumber; // @synthesize NCMInterfaceNumber=_NCMInterfaceNumber;
@property _Bool needToUnplugBTDevice; // @synthesize needToUnplugBTDevice;
@property struct BTDeviceImpl *btDevice; // @synthesize btDevice;
@property struct BTAccessoryManagerImpl *btAccessoryManager; // @synthesize btAccessoryManager;
@property _Bool isCarPlay; // @synthesize isCarPlay;
@property _Bool hasNCMInterface; // @synthesize hasNCMInterface;
@property unsigned int sampleRateBitmask; // @synthesize sampleRateBitmask;
@property unsigned int btServicesFilter; // @synthesize btServicesFilter;
@property(retain) NSData *btPairingTypes; // @synthesize btPairingTypes;
@property(retain) NSData *macAddr; // @synthesize macAddr;
@property unsigned char supportsiAPConnection; // @synthesize supportsiAPConnection;
@property int transportType; // @synthesize transportType;
@property(retain) NSNumber *componentID; // @synthesize componentID;
@property(retain) NSString *componentName; // @synthesize componentName;
- (unsigned char)getMode;	// IMP=0x000000010002cb28
- (void)setMode:(unsigned char)arg1;	// IMP=0x000000010002cb18
- (_Bool)isSampleRateBitSet:(int)arg1;	// IMP=0x000000010002c974
- (void)setSampleRateBit:(int)arg1;	// IMP=0x000000010002c94c
- (void)dealloc;	// IMP=0x000000010002c878
- (id)init;	// IMP=0x000000010002c790

@end

