//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACCPlatformDigitalAudioManager : NSObject
{
    _Bool _bDigAudSendNewProp;	// 8 = 0x8
    _Bool _bDigAudIsActive;	// 9 = 0x9
    int _digAudSampleEnum;	// 12 = 0xc
    unsigned int _digAudSampleMask;	// 16 = 0x10
    unsigned int _digAudVolumeLevel;	// 20 = 0x14
    unsigned int _digAudSoundCheck;	// 24 = 0x18
    NSString *_digAudEndpointUUID;	// 32 = 0x20
}

+ (unsigned int)sampleRateMaskFromEnum:(int)arg1;	// IMP=0x00000001000e2c68
+ (int)sampleRateEnumFromValue:(unsigned int)arg1;	// IMP=0x00000001000e2ae4
+ (unsigned int)sampleRateValueFromEnum:(int)arg1;	// IMP=0x00000001000e2a24
+ (id)getManager;	// IMP=0x00000001000e29b8
- (void).cxx_destruct;	// IMP=0x00000001000e3c44
@property(nonatomic) _Bool bDigAudIsActive; // @synthesize bDigAudIsActive=_bDigAudIsActive;
@property(nonatomic) _Bool bDigAudSendNewProp; // @synthesize bDigAudSendNewProp=_bDigAudSendNewProp;
@property(nonatomic) unsigned int digAudSoundCheck; // @synthesize digAudSoundCheck=_digAudSoundCheck;
@property(nonatomic) unsigned int digAudVolumeLevel; // @synthesize digAudVolumeLevel=_digAudVolumeLevel;
@property(nonatomic) unsigned int digAudSampleMask; // @synthesize digAudSampleMask=_digAudSampleMask;
@property(nonatomic) int digAudSampleEnum; // @synthesize digAudSampleEnum=_digAudSampleEnum;
@property(retain, nonatomic) NSString *digAudEndpointUUID; // @synthesize digAudEndpointUUID=_digAudEndpointUUID;
- (id)supportedSampleRatesList;	// IMP=0x00000001000e3a00
- (void)updateSoundCheck:(unsigned int)arg1;	// IMP=0x00000001000e3888
- (void)updateVolumeLevel:(unsigned int)arg1;	// IMP=0x00000001000e3710
- (void)updateSampleRate:(unsigned int)arg1;	// IMP=0x00000001000e3544
- (unsigned int)convertToSupportedSampleRate:(unsigned int)arg1;	// IMP=0x00000001000e3328
- (unsigned int)currentSampleRate;	// IMP=0x00000001000e31e4
- (_Bool)newAudioPropertyNotification;	// IMP=0x00000001000e2f28
- (void)stopAudioPropertyNotifications;	// IMP=0x00000001000e2edc
- (void)startAudioPropertyNotifications;	// IMP=0x00000001000e2e90
- (void)sendAudioStateChangedNotification;	// IMP=0x00000001000e2e84
- (_Bool)setDigitalAudioEndpointUUID:(id)arg1 withSupportedSampleRates:(unsigned int)arg2;	// IMP=0x00000001000e2d14
- (void)dealloc;	// IMP=0x00000001000e2ce0
- (id)init;	// IMP=0x00000001000e2c7c

@end

