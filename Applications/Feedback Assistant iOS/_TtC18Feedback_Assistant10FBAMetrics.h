//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18Feedback_Assistant10FBAMetrics : NSObject
{
    MISSING_TYPE *logHandle;	// 8 = 0x8
    MISSING_TYPE *reloadStartDate;	// 0 = 0x0
    MISSING_TYPE *startedNewDraftLoadDate;	// 0 = 0x0
    MISSING_TYPE *startFinishEvents;	// 0 = 0x0
}

+ (id)sharedInstance;	// IMP=0x0000000100105ac4
- (void).cxx_destruct;	// IMP=0x0000000100106d7c
- (void)didEndEvent:(long long)arg1;	// IMP=0x0000000100106d0c
- (void)didStartEvent:(long long)arg1;	// IMP=0x00000001001069ec
- (void)didStartReload;	// IMP=0x00000001001065f4
- (void)start;	// IMP=0x00000001001065c8
- (id)init;	// IMP=0x0000000100105c94

@end

