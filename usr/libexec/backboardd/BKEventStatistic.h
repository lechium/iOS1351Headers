//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionStreamable-Protocol.h"

@class NSArray, NSString;

@interface BKEventStatistic : NSObject <BSDescriptionStreamable>
{
    _Bool _updatedSinceReset;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSArray *_associatedStatistics;	// 24 = 0x18
}

+ (id)statisticWithLabel:(id)arg1;	// IMP=0x00000001000686b4
- (void).cxx_destruct;	// IMP=0x0000000100068668
@property(nonatomic) _Bool updatedSinceReset; // @synthesize updatedSinceReset=_updatedSinceReset;
@property(copy, nonatomic) NSArray *associatedStatistics; // @synthesize associatedStatistics=_associatedStatistics;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)reset;	// IMP=0x00000001000685f8
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000010006854c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

