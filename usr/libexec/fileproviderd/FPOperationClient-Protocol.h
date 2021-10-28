//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FPCancellable-Protocol.h"

@class NSDictionary, NSError, NSString;
@protocol FPCancellable;

@protocol FPOperationClient <FPCancellable>
- (void)setCancellationHandler:(id <FPCancellable>)arg1;
- (NSString *)proxifiedDescription;

@optional
- (void)operationDidProgressWithInfo:(NSDictionary *)arg1 error:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
@end
