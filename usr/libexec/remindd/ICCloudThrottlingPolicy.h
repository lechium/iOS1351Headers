//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCloudThrottlingLevel, NSArray, NSDate, NSTimer;

@interface ICCloudThrottlingPolicy : NSObject
{
    NSArray *_throttlingLevels;	// 8 = 0x8
    double _resetInterval;	// 16 = 0x10
    unsigned long long _currentBatchCount;	// 24 = 0x18
    unsigned long long _currentLevelIndex;	// 32 = 0x20
    NSDate *_policyStartDate;	// 40 = 0x28
    NSTimer *_policyResetTimer;	// 48 = 0x30
}

+ (void)resetSavedPolicyState;	// IMP=0x0000000100007aec
- (void).cxx_destruct;	// IMP=0x0000000100007f5c
@property(retain) NSTimer *policyResetTimer; // @synthesize policyResetTimer=_policyResetTimer;
@property(retain) NSDate *policyStartDate; // @synthesize policyStartDate=_policyStartDate;
@property(nonatomic) unsigned long long currentLevelIndex; // @synthesize currentLevelIndex=_currentLevelIndex;
@property(nonatomic) unsigned long long currentBatchCount; // @synthesize currentBatchCount=_currentBatchCount;
@property double resetInterval; // @synthesize resetInterval=_resetInterval;
@property(retain, nonatomic) NSArray *throttlingLevels; // @synthesize throttlingLevels=_throttlingLevels;
- (void)savePolicyState;	// IMP=0x0000000100007d50
- (void)loadSavedPolicyState;	// IMP=0x0000000100007bac
- (void)startPolicyResetTimer;	// IMP=0x0000000100007930
- (void)resetPolicy;	// IMP=0x00000001000076f0
@property(readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property(readonly, nonatomic) double batchInterval;
- (void)changeLevelIfNecessary;	// IMP=0x00000001000072fc
- (void)incrementBatchCount;	// IMP=0x0000000100007034
- (void)dealloc;	// IMP=0x0000000100006f28
- (id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2;	// IMP=0x0000000100006dbc

@end

