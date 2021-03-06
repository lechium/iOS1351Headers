//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOLocation, NSArray;
@protocol NavdDoomRoutesObserver;

@protocol NavdDoomRoutesUpdater <NSObject>
- (_Bool)updateRoutesForDestinations:(NSArray *)arg1 withOrigin:(GEOLocation *)arg2 completionHandler:(void (^)(_Bool, NSDictionary *, NSSet *, NSError *))arg3;
- (void)addObserver:(id <NavdDoomRoutesObserver>)arg1;
@end

