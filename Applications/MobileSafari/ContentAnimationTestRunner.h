//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PurplePageLoadTestRunner.h"

@class NSMutableDictionary;

@interface ContentAnimationTestRunner : PurplePageLoadTestRunner
{
    NSMutableDictionary *_outputData;	// 72 = 0x48
    double _testDuration;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010008118c
- (void)finishedTestRunner;	// IMP=0x0000000100080fe0
- (void)writeOutputData;	// IMP=0x0000000100080e70
- (id)outputDataForPage:(id)arg1;	// IMP=0x0000000100080cf0
- (id)finalStatusForPage:(id)arg1;	// IMP=0x0000000100080c68
- (void)finishedTestPage:(id)arg1;	// IMP=0x0000000100080b6c
- (_Bool)performActionForPage:(id)arg1;	// IMP=0x0000000100080a8c
- (_Bool)startPageAction:(id)arg1;	// IMP=0x00000001000809e0
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x0000000100080914

@end

