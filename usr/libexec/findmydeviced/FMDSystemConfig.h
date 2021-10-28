//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface FMDSystemConfig : NSObject
{
    _Bool _canHandleLocates;	// 8 = 0x8
    _Bool _isLocationServicesEnabledForShareMyLocation;	// 9 = 0x9
    _Bool _isFMIPLocationServicesEnabled;	// 10 = 0xa
    unsigned long long _fileVaultStatus;	// 16 = 0x10
    NSString *_rootVolumeUUID;	// 24 = 0x18
    NSNumber *_secureElementId;	// 32 = 0x20
    NSNumber *_ecid;	// 40 = 0x28
    NSNumber *_chipId;	// 48 = 0x30
    NSString *_wifiMacAddress;	// 56 = 0x38
    NSString *_btMacAddress;	// 64 = 0x40
    unsigned long long _activationLockAllowedState;	// 72 = 0x48
    unsigned long long _alCapability;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_systemInfoQueue;	// 88 = 0x58
    NSString *_internalBAUUID;	// 96 = 0x60
    unsigned long long _internalBAStatus;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x00000001000320bc
- (void).cxx_destruct;	// IMP=0x0000000100032af8
@property(nonatomic) unsigned long long internalBAStatus; // @synthesize internalBAStatus=_internalBAStatus;
@property(retain, nonatomic) NSString *internalBAUUID; // @synthesize internalBAUUID=_internalBAUUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *systemInfoQueue; // @synthesize systemInfoQueue=_systemInfoQueue;
@property(readonly, nonatomic) _Bool isFMIPLocationServicesEnabled; // @synthesize isFMIPLocationServicesEnabled=_isFMIPLocationServicesEnabled;
@property(readonly, nonatomic) _Bool isLocationServicesEnabledForShareMyLocation; // @synthesize isLocationServicesEnabledForShareMyLocation=_isLocationServicesEnabledForShareMyLocation;
@property(readonly, nonatomic) unsigned long long alCapability; // @synthesize alCapability=_alCapability;
@property(readonly, nonatomic) unsigned long long activationLockAllowedState; // @synthesize activationLockAllowedState=_activationLockAllowedState;
@property(readonly, nonatomic) NSString *btMacAddress; // @synthesize btMacAddress=_btMacAddress;
@property(readonly, nonatomic) NSString *wifiMacAddress; // @synthesize wifiMacAddress=_wifiMacAddress;
@property(readonly, nonatomic) NSNumber *chipId; // @synthesize chipId=_chipId;
@property(readonly, nonatomic) NSNumber *ecid; // @synthesize ecid=_ecid;
@property(readonly, nonatomic) NSNumber *secureElementId; // @synthesize secureElementId=_secureElementId;
@property(readonly, nonatomic) NSString *rootVolumeUUID; // @synthesize rootVolumeUUID=_rootVolumeUUID;
@property(readonly, nonatomic) unsigned long long fileVaultStatus; // @synthesize fileVaultStatus=_fileVaultStatus;
@property(readonly, nonatomic) _Bool canHandleLocates; // @synthesize canHandleLocates=_canHandleLocates;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) unsigned long long pairingType;
@property(readonly, nonatomic) NSString *wristStatusString;
- (id)stringForConnectionStatus:(long long)arg1;	// IMP=0x0000000100032984
@property(readonly, nonatomic) NSNumber *suinfoLastModifiedTimestamp;
@property(readonly, nonatomic) long long connectionStatus;
@property(readonly, nonatomic) _Bool isLowPowerModeEnabled;
@property(readonly, nonatomic) NSString *deviceRegion;
@property(readonly, nonatomic) NSString *deviceModel;
@property(readonly, nonatomic) NSData *escrowHash;
@property(readonly, nonatomic) _Bool allowsActivationLock;
@property(readonly, nonatomic) NSNumber *deletablePlans;
@property(readonly, nonatomic) _Bool hasCellularCapability;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) NSString *timezone;
@property(readonly, nonatomic) _Bool isRegionMonitoringAvailable;
@property(readonly, nonatomic) NSString *currentPasscodeConstraintStr;
@property(readonly, nonatomic) _Bool isLocking;
@property(readonly, nonatomic) unsigned long long unlockState;
@property(readonly, nonatomic) _Bool isLocked;
@property(readonly, nonatomic) _Bool isPasscodeChangeRestricted;
@property(readonly, nonatomic) _Bool isPasscodeSet;
- (_Bool)isInAirplaneMode;	// IMP=0x00000001000328d8
@property(readonly, nonatomic) unsigned long long baRegistrationStatus;
@property(readonly, nonatomic) NSString *baUUID;
@property(readonly, nonatomic) NSString *mlbSerialNumber;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, nonatomic) NSString *mobileEquipmentIdentifier;
@property(readonly, nonatomic) NSString *internationalMobileEquipmentIdentityTwo;
@property(readonly, nonatomic) NSString *internationalMobileEquipmentIdentity;
@property(readonly, nonatomic) _Bool hasNFC;
@property(readonly, nonatomic) _Bool hasSecureElement;
@property(readonly, nonatomic) NSString *backOfEnclosureColor;
@property(readonly, nonatomic) NSString *housingColor;
@property(readonly, nonatomic) NSString *coverGlassColor;
@property(readonly, nonatomic) NSString *deviceEnclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) NSString *recoveryBootState;
@property(readonly, nonatomic) _Bool isRunningInLocked;
@property(readonly, nonatomic) _Bool isRunningInRecovery;
@property(readonly, nonatomic) NSString *recoveryProductVersion;
@property(readonly, nonatomic) NSString *recoveryBuildVersion;
@property(readonly, nonatomic) _Bool isBuddyDone;
@property(readonly, nonatomic) _Bool isLocationServicesCapable;
@property(readonly, nonatomic) _Bool isLocationServicesEnabled;
@property(readonly, nonatomic) NSString *platform;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *idsDeviceID;
@property(readonly, nonatomic) NSString *deviceUDID;
@property(readonly, nonatomic) long long deviceClass;
@property(readonly, nonatomic) NSString *deviceClassString;
@property(readonly, nonatomic) NSString *deviceName;
- (void)initializeSystemConfig;	// IMP=0x000000010003235c
- (void)baUUIDMayHaveChanged;	// IMP=0x00000001000322a8
- (id)initSingleton;	// IMP=0x00000001000321d0

@end
