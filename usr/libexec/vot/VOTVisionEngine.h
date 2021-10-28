//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMVoiceOverVisionEngine;
@protocol VOTVisionEngineResultUpdateDelegate;

@interface VOTVisionEngine : NSObject
{
    _Bool _wasCachePurged;	// 8 = 0x8
    id <VOTVisionEngineResultUpdateDelegate> _resultUpdateDelegate;	// 16 = 0x10
    AXMVoiceOverVisionEngine *_engine;	// 24 = 0x18
}

+ (_Bool)elementNeedsAdditionalDescription:(id)arg1;	// IMP=0x0000000100100450
+ (_Bool)shouldAnalyzeElement:(id)arg1;	// IMP=0x00000001001001b0
+ (_Bool)shouldIncludeElementAnalysisInDescripiton:(id)arg1;	// IMP=0x0000000100100018
- (void).cxx_destruct;	// IMP=0x000000010010214c
@property(retain, nonatomic) AXMVoiceOverVisionEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak id <VOTVisionEngineResultUpdateDelegate> resultUpdateDelegate; // @synthesize resultUpdateDelegate=_resultUpdateDelegate;
@property(nonatomic) _Bool wasCachePurged; // @synthesize wasCachePurged=_wasCachePurged;
- (void)produceCaptionForElement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100101c04
- (void)purgeCache;	// IMP=0x0000000100101b8c
- (id)resultsForElement:(id)arg1;	// IMP=0x00000001001017a4
- (void)analyzeElement:(id)arg1;	// IMP=0x00000001001009a4
- (long long)_interfaceOrientationForElement:(id)arg1;	// IMP=0x0000000100100654
- (id)init;	// IMP=0x00000001001005b0

@end
