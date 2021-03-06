//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL, NSURLRequest;

@protocol FBAForegroundDataClient <NSObject>
- (void)deleteAtURL:(NSURL *)arg1 parameters:(NSDictionary *)arg2 encoding:(unsigned long long)arg3 success:(void (^)(NSData *))arg4 error:(void (^)(NSError *))arg5;
- (void)deleteResourceAtURL:(NSURL *)arg1 success:(void (^)(NSData *))arg2 error:(void (^)(NSError *))arg3;
- (void)putToURL:(NSURL *)arg1 parameters:(NSDictionary *)arg2 encoding:(unsigned long long)arg3 success:(void (^)(NSData *))arg4 error:(void (^)(NSError *))arg5;
- (void)postToURL:(NSURL *)arg1 parameters:(NSDictionary *)arg2 encoding:(unsigned long long)arg3 success:(void (^)(NSData *))arg4 error:(void (^)(NSError *))arg5;
- (void)jsonForURL:(NSURL *)arg1 success:(void (^)(id))arg2 error:(void (^)(NSError *))arg3;
- (void)dataForURL:(NSURL *)arg1 successWithResponse:(void (^)(NSData *, NSURLResponse *))arg2 error:(void (^)(NSError *))arg3;
- (void)dataForURL:(NSURL *)arg1 success:(void (^)(NSData *))arg2 error:(void (^)(NSError *))arg3;
- (void)jsonForURLRequest:(NSURLRequest *)arg1 success:(void (^)(id))arg2 error:(void (^)(NSError *))arg3;
- (void)dataForURLRequest:(NSURLRequest *)arg1 successWithResponse:(void (^)(NSData *, NSURLResponse *))arg2 error:(void (^)(NSError *))arg3;
- (void)dataForURLRequest:(NSURLRequest *)arg1 success:(void (^)(NSData *))arg2 error:(void (^)(NSError *))arg3;
@end

