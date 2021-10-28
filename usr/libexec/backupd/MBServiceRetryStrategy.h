//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBRetryStrategy.h"

@interface MBServiceRetryStrategy : MBRetryStrategy
{
    unsigned long long _consecutiveRetryCount;	// 40 = 0x28
    unsigned long long _softConsecutiveRetryLimit;	// 48 = 0x30
    unsigned long long _hardConsecutiveRetryLimit;	// 56 = 0x38
    double _resetConsecutiveRetriesTimeInterval;	// 64 = 0x40
    double _forcedRetryTimeInterval;	// 72 = 0x48
    double _networkRetryTimeInterval;	// 80 = 0x50
    double _maximumServiceUnavailableRetryInterval;	// 88 = 0x58
}

- (void)setMaximumServiceUnavailableRetryInterval:(double)arg1;	// IMP=0x000000010015d324
- (double)maximumServiceUnavailableRetryInterval;	// IMP=0x000000010015d314
- (void)setNetworkRetryTimeInterval:(double)arg1;	// IMP=0x000000010015d304
- (double)networkRetryTimeInterval;	// IMP=0x000000010015d2f4
- (void)setForcedRetryTimeInterval:(double)arg1;	// IMP=0x000000010015d2e4
- (double)forcedRetryTimeInterval;	// IMP=0x000000010015d2d4
- (void)setResetConsecutiveRetriesTimeInterval:(double)arg1;	// IMP=0x000000010015d2c4
- (double)resetConsecutiveRetriesTimeInterval;	// IMP=0x000000010015d2b4
- (void)setHardConsecutiveRetryLimit:(unsigned long long)arg1;	// IMP=0x000000010015d2a4
- (unsigned long long)hardConsecutiveRetryLimit;	// IMP=0x000000010015d294
- (void)setSoftConsecutiveRetryLimit:(unsigned long long)arg1;	// IMP=0x000000010015d284
- (unsigned long long)softConsecutiveRetryLimit;	// IMP=0x000000010015d274
- (unsigned long long)consecutiveRetryCount;	// IMP=0x000000010015d264
- (_Bool)shouldRetryAfterError:(id)arg1 hard:(_Bool)arg2;	// IMP=0x000000010015ca30
- (id)_updateAccountIfNeededAfterError:(id)arg1;	// IMP=0x000000010015c9a8
- (void)_incrementKey:(id)arg1;	// IMP=0x000000010015c95c
- (_Bool)_shouldForceRetry;	// IMP=0x000000010015c8d8
- (_Bool)_shouldResetConsecutiveRetryCounter;	// IMP=0x000000010015c868
- (double)_sleepIntervalAfterError:(id)arg1;	// IMP=0x000000010015c798
- (_Bool)wouldRetry;	// IMP=0x000000010015c774
- (_Bool)canRetryAfterError:(id)arg1;	// IMP=0x000000010015c680
- (void)setConsecutiveRetryCount:(unsigned long long)arg1;	// IMP=0x000000010015c568
- (id)initWithEngine:(id)arg1;	// IMP=0x000000010015c3c8

@end
