//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class RootNetwork;

@interface Score : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x0000000100011508
+ (id)generateNewScoreObjectFromMOC:(id)arg1;	// IMP=0x0000000100131b2c
+ (id)copyFetchRequest;	// IMP=0x0000000100131b00
- (void)updateScoreForSwitch:(_Bool)arg1;	// IMP=0x0000000100131fb8
- (_Bool)checkIncrementForOverflowWithMuliplier:(long long)arg1 multiplier:(long long)arg2;	// IMP=0x0000000100131fb0
- (id)copyScoreLog;	// IMP=0x0000000100131e78
- (long long)getTotalScore;	// IMP=0x0000000100131ca8

// Remaining properties
@property(nonatomic) _Bool isLongTermNetwork; // @dynamic isLongTermNetwork;
@property(nonatomic) _Bool isMoving; // @dynamic isMoving;
@property(nonatomic) _Bool isOmniPresent; // @dynamic isOmniPresent;
@property(nonatomic) _Bool isTCPGood; // @dynamic isTCPGood;
@property(retain, nonatomic) RootNetwork *network; // @dynamic network;
@property(nonatomic) long long switchedAwayFromCount; // @dynamic switchedAwayFromCount;
@property(nonatomic) long long switchedToCount; // @dynamic switchedToCount;

@end
