//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSmartWidgetPrediction.h"

#import "CarGarageDoorObserver-Protocol.h"

@class CARGarageDoor, NSString;

@interface CARSmartWidgetHomePrediction : CARSmartWidgetPrediction <CarGarageDoorObserver>
{
    CARGarageDoor *_garageDoor;	// 8 = 0x8
}

+ (double)minValue;	// IMP=0x000000010009b19c
+ (double)maxValue;	// IMP=0x000000010009b194
+ (long long)baseScore;	// IMP=0x000000010009aea0
+ (id)_image:(id)arg1 onBackgroundColor:(id)arg2;	// IMP=0x000000010009a788
+ (id)closedGarageDoor;	// IMP=0x000000010009a6cc
+ (id)openGarageDoor;	// IMP=0x000000010009a610
- (void).cxx_destruct;	// IMP=0x000000010009b380
@property(readonly, nonatomic) CARGarageDoor *garageDoor; // @synthesize garageDoor=_garageDoor;
- (void)garageDoor:(id)arg1 didUpdateObstructionDetected:(_Bool)arg2;	// IMP=0x000000010009b2fc
- (void)garageDoor:(id)arg1 didUpdateTargetDoorState:(long long)arg2;	// IMP=0x000000010009b288
- (void)garageDoor:(id)arg1 didUpdateDoorState:(long long)arg2;	// IMP=0x000000010009b214
- (void)serviceDidUpdate:(id)arg1;	// IMP=0x000000010009b1b0
- (double)value;	// IMP=0x000000010009b140
- (id)debugScoreText;	// IMP=0x000000010009aff4
- (void)updateWithPrediction:(id)arg1;	// IMP=0x000000010009af08
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010009aea8
- (_Bool)showImageBorder;	// IMP=0x000000010009ae7c
- (id)image;	// IMP=0x000000010009ae18
- (long long)_iconType;	// IMP=0x000000010009ad8c
- (CDUnknownBlockType)actionBlock;	// IMP=0x000000010009ac40
- (id)subtitle;	// IMP=0x000000010009aa74
- (id)title;	// IMP=0x000000010009aa20
- (id)predictedObject;	// IMP=0x000000010009aa14
- (id)uniqueIdentifier;	// IMP=0x000000010009a9c0
- (id)initWithGarageDoor:(id)arg1;	// IMP=0x000000010009a578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

