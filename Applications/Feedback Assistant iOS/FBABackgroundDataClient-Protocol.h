//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, NSURLRequest, NSURLSessionUploadTask;

@protocol FBABackgroundDataClient <NSObject>
- (void)getOngoingTasks:(void (^)(NSArray *, NSArray *, NSArray *))arg1;
- (NSURLSessionUploadTask *)beginUploadWithRequest:(NSURLRequest *)arg1 fromFileURL:(NSURL *)arg2;
@end
