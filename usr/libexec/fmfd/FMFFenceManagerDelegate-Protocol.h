//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FMFClientSession, FMFFence, FMFFenceManager;

@protocol FMFFenceManagerDelegate <NSObject>
- (void)fenceManager:(FMFFenceManager *)arg1 didModifyFence:(FMFFence *)arg2 clientSession:(FMFClientSession *)arg3 withCompletion:(void (^)(FMFFence *, NSError *))arg4;
@end
