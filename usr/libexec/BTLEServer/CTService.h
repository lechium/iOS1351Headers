//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ServerService.h"

@class CBMutableCharacteristic, NSTimer;

@interface CTService : ServerService
{
    CBMutableCharacteristic *_currentTimeCharacteristic;	// 8 = 0x8
    CBMutableCharacteristic *_localTimeInformationCharacteristic;	// 16 = 0x10
    NSTimer *_nextDSTTransitionTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100037b88
@property(retain, nonatomic) NSTimer *nextDSTTransitionTimer; // @synthesize nextDSTTransitionTimer=_nextDSTTransitionTimer;
@property(retain, nonatomic) CBMutableCharacteristic *localTimeInformationCharacteristic; // @synthesize localTimeInformationCharacteristic=_localTimeInformationCharacteristic;
@property(retain, nonatomic) CBMutableCharacteristic *currentTimeCharacteristic; // @synthesize currentTimeCharacteristic=_currentTimeCharacteristic;
- (unsigned char)currentDstOffset;	// IMP=0x0000000100037ab4
- (BOOL)currentTimeZone;	// IMP=0x0000000100037a2c
- (void)currentTimeDidChange;	// IMP=0x00000001000379f8
- (void)dstDidChange;	// IMP=0x0000000100037980
- (void)significantTimeChange;	// IMP=0x00000001000378f4
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;	// IMP=0x000000010003781c
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;	// IMP=0x000000010003772c
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;	// IMP=0x0000000100037564
- (void)stopNotifications;	// IMP=0x0000000100037470
- (void)startNotifications;	// IMP=0x0000000100037414
- (void)setupNextDSTTransitionTimer;	// IMP=0x00000001000372dc
- (void)cancelNextDSTTransitionTimer;	// IMP=0x0000000100037284
- (id)readLocalTimeInformation;	// IMP=0x0000000100037278
- (id)localTimeInformationValue;	// IMP=0x00000001000371c4
- (void)updateCurrentTime;	// IMP=0x0000000100037144
- (id)readCurrentTime;	// IMP=0x0000000100037138
- (id)currentTimeValue;	// IMP=0x0000000100036f04
- (void)dealloc;	// IMP=0x0000000100036eb8
- (void)stop;	// IMP=0x0000000100036e6c
- (id)init;	// IMP=0x0000000100036bf4

@end
