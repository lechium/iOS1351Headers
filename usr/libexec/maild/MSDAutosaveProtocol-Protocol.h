//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MSDAutosaveProtocol <NSObject>
- (void)autosaveSessionForIdentifier:(NSString *)arg1 completion:(void (^)(id <MSDAutosaveSessionProtocol>, NSError *))arg2;
- (void)getIdleAutosaves:(void (^)(NSArray *, NSError *))arg1;
- (void)autosaveMessageData:(NSData *)arg1 replacingIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)autosavedMessageDataWithIdentifier:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)removeAutosavedMessageWithIdentifier:(NSString *)arg1;
- (void)hasAutosavedMessageWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end
