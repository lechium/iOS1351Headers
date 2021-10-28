//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface NavSignLaneGuidanceInfo : NSObject
{
    _Bool _isForManeuver;	// 8 = 0x8
    NSUUID *_laneInfoId;	// 16 = 0x10
    NSArray *_lanes;	// 24 = 0x18
    NSArray *_textAlternatives;	// 32 = 0x20
    NSArray *_midStepTitles;	// 40 = 0x28
}

+ (struct _NSRange)highlightedLaneRangeForLanes:(id)arg1;	// IMP=0x0000000100011814
+ (id)_createFakeLanes;	// IMP=0x0000000100010ea0
+ (id)fakeInfoForManeuver:(_Bool)arg1;	// IMP=0x0000000100010d54
- (void).cxx_destruct;	// IMP=0x0000000100011b38
@property(readonly, nonatomic) NSArray *midStepTitles; // @synthesize midStepTitles=_midStepTitles;
@property(readonly, nonatomic) NSArray *textAlternatives; // @synthesize textAlternatives=_textAlternatives;
@property(readonly, nonatomic) _Bool isForManeuver; // @synthesize isForManeuver=_isForManeuver;
@property(readonly, copy, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(readonly, copy, nonatomic) NSUUID *laneInfoId; // @synthesize laneInfoId=_laneInfoId;
- (id)highlightedLanes;	// IMP=0x0000000100011acc
@property(readonly, nonatomic) struct _NSRange highlightedLaneRange;
@property(readonly, nonatomic) _Bool isForMidStep;
- (id)description;	// IMP=0x000000010001162c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100011550
- (id)initWithLaneInfoId:(id)arg1 lanes:(id)arg2 forManeuver:(_Bool)arg3 midStepTitles:(id)arg4 details:(id)arg5;	// IMP=0x0000000100011428
- (id)initWithLaneInfoId:(id)arg1 lanes:(id)arg2;	// IMP=0x00000001000113c0
- (id)initWithGuidanceLaneInfo:(id)arg1;	// IMP=0x0000000100011090

@end
