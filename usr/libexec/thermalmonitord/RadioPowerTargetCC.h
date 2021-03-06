//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RadioCC.h"

#import "tGraphDataSource-Protocol.h"

@interface RadioPowerTargetCC : RadioCC <tGraphDataSource>
{
    int radioPowerTarget;	// 160 = 0xa0
    int maxRadioPower;	// 164 = 0xa4
    int minRadioPower;	// 168 = 0xa8
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x00000001000100bc
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100010020
- (int)numberOfFields;	// IMP=0x000000010000ffe8
- (void)setAdditionalRadioMitigations;	// IMP=0x000000010000ffb4
- (void)calculateAdditionalRadioMitigations;	// IMP=0x000000010000ff44
- (void)addRadioMitigations;	// IMP=0x000000010000ff10
- (id)initWithRunLoopAndParams:(struct __CFRunLoop *)arg1 withParams:(struct __CFDictionary *)arg2;	// IMP=0x000000010000fe40

@end

