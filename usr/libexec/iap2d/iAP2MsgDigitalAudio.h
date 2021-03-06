//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class iAP2Connection;

@interface iAP2MsgDigitalAudio : NSObject
{
    iAP2Connection *pConnection;	// 8 = 0x8
    int digAudSampleEnum;	// 16 = 0x10
    unsigned int digAudSampleMask;	// 20 = 0x14
    unsigned int digAudVolumeLevel;	// 24 = 0x18
    unsigned int digAudSoundCheck;	// 28 = 0x1c
    _Bool bDigAudSendNewProp;	// 32 = 0x20
    _Bool bDigAudIsActive;	// 33 = 0x21
}

+ (id)getActiveDigitalAudioInstance;	// IMP=0x0000000100075134
@property(readonly, nonatomic) _Bool bDigAudSendNewProp; // @synthesize bDigAudSendNewProp;
@property(readonly, nonatomic) _Bool bDigAudIsActive; // @synthesize bDigAudIsActive;
@property(readonly, nonatomic) unsigned int digAudSoundCheck; // @synthesize digAudSoundCheck;
@property(readonly, nonatomic) unsigned int digAudVolumeLevel; // @synthesize digAudVolumeLevel;
@property(nonatomic) unsigned int digAudSampleMask; // @synthesize digAudSampleMask;
@property(readonly, nonatomic) int digAudSampleEnum; // @synthesize digAudSampleEnum;
- (id)description;	// IMP=0x00000001000758ec
- (id)supportedSampleRatesList;	// IMP=0x000000010007582c
- (void)updateSoundCheck:(unsigned int)arg1;	// IMP=0x00000001000757cc
- (void)updateVolumeLevel:(unsigned int)arg1;	// IMP=0x000000010007576c
- (void)updateSampleRate:(unsigned int)arg1;	// IMP=0x00000001000756bc
- (unsigned int)convertToSupportedSampleRate:(unsigned int)arg1;	// IMP=0x000000010007559c
- (unsigned int)currentSampleRate;	// IMP=0x0000000100075550
- (int)newAudioPropertyNotification;	// IMP=0x0000000100075478
- (int)stopAudioPropertyNotifications;	// IMP=0x000000010007537c
- (int)startAudioPropertyNotifications;	// IMP=0x000000010007522c
- (void)shuttingDown;	// IMP=0x0000000100075204
- (void)dealloc;	// IMP=0x00000001000751b0
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100075140

@end

