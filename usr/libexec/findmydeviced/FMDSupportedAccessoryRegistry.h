//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDAssetRegistry, FMDataArchiver, NSDictionary;
@protocol FMDSupportedAccessoryRegistryDelegate, OS_dispatch_queue;

@interface FMDSupportedAccessoryRegistry : NSObject
{
    _Bool _defaultAccessoriesEnabled;	// 8 = 0x8
    id <FMDSupportedAccessoryRegistryDelegate> _delegate;	// 16 = 0x10
    NSDictionary *_supportedAccessories;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    FMDataArchiver *_dataArchiver;	// 40 = 0x28
    FMDAssetRegistry *_assetRegistry;	// 48 = 0x30
}

+ (id)defaultStorageLocation;	// IMP=0x00000001000ba604
- (void).cxx_destruct;	// IMP=0x00000001000bcee4
@property(retain, nonatomic) FMDAssetRegistry *assetRegistry; // @synthesize assetRegistry=_assetRegistry;
@property(nonatomic) _Bool defaultAccessoriesEnabled; // @synthesize defaultAccessoriesEnabled=_defaultAccessoriesEnabled;
@property(retain, nonatomic) FMDataArchiver *dataArchiver; // @synthesize dataArchiver=_dataArchiver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSDictionary *supportedAccessories; // @synthesize supportedAccessories=_supportedAccessories;
@property(nonatomic) __weak id <FMDSupportedAccessoryRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)defaultTimeoutAudioSafetyStatusForProfile:(long long)arg1;	// IMP=0x00000001000bce58
- (void)readSupportedAccessoriesFromDisk;	// IMP=0x00000001000bcb64
- (id)supportedAccessoryForIdentifier:(id)arg1;	// IMP=0x00000001000bc7d0
- (id)supportedAccessoryForAccessory:(id)arg1;	// IMP=0x00000001000bc6a0
- (void)downloadAssetsIfNeededForAccessory:(id)arg1;	// IMP=0x00000001000bc4d0
- (id)assetForProfile:(long long)arg1;	// IMP=0x00000001000bc4c8
- (void)clearSupportedAccessoryRegistry;	// IMP=0x00000001000bc304
- (id)assetsForAccessory:(id)arg1;	// IMP=0x00000001000bc2b0
- (double)locationThrottleTimeIntervalForAccessory:(id)arg1 speed:(double)arg2;	// IMP=0x00000001000bc218
- (id)locatorForAccessory:(id)arg1;	// IMP=0x00000001000bbfd4
- (id)channelNamesForProfile:(long long)arg1;	// IMP=0x00000001000bbf30
- (id)playbackChannelNamesForAccessory:(id)arg1 commandChannels:(id)arg2;	// IMP=0x00000001000bbe68
- (unsigned long long)defaultTimeoutAudioSafetyStatusForAccessory:(id)arg1;	// IMP=0x00000001000bbdf4
- (id)advertisementStatusKeyForProfile:(long long)arg1;	// IMP=0x00000001000bbdd8
- (double)locateDesiredAccuracyForAccessory:(id)arg1;	// IMP=0x00000001000bbd64
- (double)locateTimeoutForAccessory:(id)arg1;	// IMP=0x00000001000bbcf0
- (id)longTermLocationExpiryTimeIntervalForAccessory:(id)arg1;	// IMP=0x00000001000bbc9c
- (id)shortTermLocationExpiryTimeIntervalForAccessory:(id)arg1;	// IMP=0x00000001000bbc48
- (id)maximumHistoricalLocationsForAccessory:(id)arg1;	// IMP=0x00000001000bbbf4
- (long long)profileForAccessoryIdentifier:(id)arg1;	// IMP=0x00000001000bbba8
- (_Bool)isAccessorySupported:(id)arg1;	// IMP=0x00000001000bbb30
- (void)resetSupportedAccessoriesVersion;	// IMP=0x00000001000bb924
- (id)supportedAccessoriesVersion;	// IMP=0x00000001000bb744
- (void)updateSupportedAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bb068
- (id)defaultSupportedAccessoriesIfEnabled:(_Bool)arg1;	// IMP=0x00000001000bacd8
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000ba680

@end

