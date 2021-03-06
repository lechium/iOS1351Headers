//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NDTPerf : NSObject
{
    long long _wallTime;	// 8 = 0x8
    long long _cpuTime;	// 16 = 0x10
    long long _dirtyMemory;	// 24 = 0x18
}

+ (long long)cpuTime;	// IMP=0x0000000100051ae4
+ (long long)dirtyMemory;	// IMP=0x0000000100051a7c
+ (long long)wallTime;	// IMP=0x00000001000519fc
+ (id)nowMinusPrevious:(id)arg1;	// IMP=0x0000000100051908
@property(nonatomic) long long dirtyMemory; // @synthesize dirtyMemory=_dirtyMemory;
@property(nonatomic) long long cpuTime; // @synthesize cpuTime=_cpuTime;
@property(nonatomic) long long wallTime; // @synthesize wallTime=_wallTime;
- (id)description;	// IMP=0x0000000100051b54
- (double)cpuTimeMs;	// IMP=0x000000010005189c
- (id)init;	// IMP=0x00000001000517c4

@end

