//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSmartWidgetSource.h"

@class ATXActionPredictionClient, ATXActionResponse;

@interface CARSmartWidgetAppPredictionSource : CARSmartWidgetSource
{
    ATXActionPredictionClient *_siriClient;	// 8 = 0x8
    ATXActionResponse *_currentActionResponse;	// 16 = 0x10
}

+ (id)predictionClasses;	// IMP=0x000000010005df34
+ (id)sourceName;	// IMP=0x000000010005df28
+ (void)load;	// IMP=0x000000010005def4
- (void).cxx_destruct;	// IMP=0x000000010005e3ac
@property(retain, nonatomic) ATXActionResponse *currentActionResponse; // @synthesize currentActionResponse=_currentActionResponse;
@property(retain, nonatomic) ATXActionPredictionClient *siriClient; // @synthesize siriClient=_siriClient;
- (id)freshPredictions;	// IMP=0x000000010005e044
- (id)initWithDelegate:(id)arg1 resourceProvider:(id)arg2;	// IMP=0x000000010005dfac
- (_Bool)defaultsDisabled;	// IMP=0x000000010005dfa4

@end

