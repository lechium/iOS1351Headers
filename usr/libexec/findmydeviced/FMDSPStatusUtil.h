//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDispatchTimer, NSDate, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue, SPFMIPRegisterInfo;

@interface FMDSPStatusUtil : NSObject
{
    _Bool _waitingForDetailedStats;	// 8 = 0x8
    CDUnknownBlockType _statsChangeHandler;	// 16 = 0x10
    NSDictionary *_rawStats;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    NSObject<SPFMIPRegisterInfo> *_spFmipRegisterInfo;	// 40 = 0x28
    FMDispatchTimer *_timer;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001000ae254
- (void).cxx_destruct;	// IMP=0x00000001000b00d0
@property(nonatomic) _Bool waitingForDetailedStats; // @synthesize waitingForDetailedStats=_waitingForDetailedStats;
@property(retain, nonatomic) FMDispatchTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<SPFMIPRegisterInfo> *spFmipRegisterInfo; // @synthesize spFmipRegisterInfo=_spFmipRegisterInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSDictionary *rawStats; // @synthesize rawStats=_rawStats;
@property(copy, nonatomic) CDUnknownBlockType statsChangeHandler; // @synthesize statsChangeHandler=_statsChangeHandler;
- (void)_userDidLogIn:(id)arg1;	// IMP=0x00000001000affb4
- (void)updateDetailedSPStats:(id)arg1;	// IMP=0x00000001000afb08
- (void)_requestDetailedStatsFromUserAgent;	// IMP=0x00000001000afacc
- (void)_refreshDetailedStats:(_Bool)arg1;	// IMP=0x00000001000af168
- (void)_serialQueue_refreshBeaconStats;	// IMP=0x00000001000ae950
- (void)refreshBeaconStats;	// IMP=0x00000001000ae858
- (void)clearCache;	// IMP=0x00000001000ae80c
- (void)cancelRefresh;	// IMP=0x00000001000ae6e0
@property(readonly, nonatomic) NSString *mteStatusError;
@property(readonly, nonatomic) NSString *mteStatus;
@property(readonly, nonatomic) NSString *octStatusError;
@property(readonly, nonatomic) NSString *octStatus;
@property(readonly, nonatomic) NSDate *beaconLastKeyRollDate;
@property(readonly, nonatomic) NSNumber *beaconZoneCreationErrorCode;
@property(readonly, nonatomic) NSDate *beaconZoneCreationDate;
- (id)init;	// IMP=0x00000001000ae2fc

@end

