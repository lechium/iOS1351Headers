//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol NavdDoomDestinationsUpdater <NSObject>
- (void)stopUpdating;
- (NSArray *)currentDestinations;
- (_Bool)updateDestinationsForDuration:(double)arg1 completionHandler:(void (^)(_Bool, NSArray *))arg2;
@end

