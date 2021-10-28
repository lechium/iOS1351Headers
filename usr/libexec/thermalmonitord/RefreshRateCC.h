//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface RefreshRateCC : ComponentControl <tGraphDataSource>
{
    unsigned char refreshRateLevelElem;	// 120 = 0x78
    unsigned char refreshRateLevelPointer;	// 121 = 0x79
    unsigned char refreshRateLevelUp[4];	// 122 = 0x7a
    unsigned char refreshRateLevels[4];	// 126 = 0x7e
    unsigned char refreshRateLevelDown[4];	// 130 = 0x82
    unsigned char currentRefreshRateLevel;	// 134 = 0x86
    unsigned char previousRefreshRateLevel;	// 135 = 0x87
    unsigned char currentRefreshRateFPS;	// 136 = 0x88
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100012668
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x00000001000125cc
- (int)numberOfFields;	// IMP=0x0000000100012598
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100012594
- (void)initRefreshRateTable:(struct __CFArray *)arg1;	// IMP=0x0000000100012350
- (void)defaultAction;	// IMP=0x000000010001218c
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x000000010001207c

@end
