//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, PLXPCObject;

@protocol PLAssetsdPhotoKitServiceProtocol <NSObject>
- (void)clearSaveTokens:(NSArray *)arg1;
- (void)requestUUIDWithCustomUUID:(NSString *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)applyChangesRequest:(PLXPCObject *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

