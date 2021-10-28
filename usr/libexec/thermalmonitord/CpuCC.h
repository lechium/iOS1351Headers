//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface CpuCC : ComponentControl <tGraphDataSource>
{
    unsigned int kDVD1Level;	// 120 = 0x78
    int listIDPos;	// 124 = 0x7c
    unsigned int host;	// 128 = 0x80
    struct host_cpu_load_info currCpu;	// 132 = 0x84
    struct host_cpu_load_info prevCpu;	// 148 = 0x94
    float powerScale;	// 164 = 0xa4
    float timeActive;	// 168 = 0xa8
    _Bool _usesPowerZoneControl;	// 172 = 0xac
    _Bool _useDirectMap;	// 173 = 0xad
    unsigned int _minReachableLoadIndex;	// 176 = 0xb0
    float _directMapSlope;	// 180 = 0xb4
    float _directMapIntercept;	// 184 = 0xb8
}

@property(nonatomic) float directMapIntercept; // @synthesize directMapIntercept=_directMapIntercept;
@property(nonatomic) float directMapSlope; // @synthesize directMapSlope=_directMapSlope;
@property(nonatomic) unsigned int minReachableLoadIndex; // @synthesize minReachableLoadIndex=_minReachableLoadIndex;
@property(nonatomic) _Bool useDirectMap; // @synthesize useDirectMap=_useDirectMap;
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010001a1a4
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x000000010001a108
- (int)numberOfFields;	// IMP=0x000000010001a0d0
- (void)refreshFunctionalTelemetry;	// IMP=0x000000010001a068
- (void)refreshTGraphTelemetry;	// IMP=0x000000010001a030
- (unsigned int)getUserUsage;	// IMP=0x0000000100019f60
- (void)defaultAction;	// IMP=0x0000000100019ee8
- (id)initWithParams:(struct __CFDictionary *)arg1 powerScale:(float)arg2 listID:(int)arg3 needspowerZones:(_Bool)arg4;	// IMP=0x0000000100019d58

@end
