//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TPSAnalyticsXPCServerInterface-Protocol.h"

@class NSString;

@protocol TPSDiscoverabilityXPCServerInterface <TPSAnalyticsXPCServerInterface>
- (oneway void)hintDismissedByPerformedOutcomeForIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3;
- (oneway void)hintDismissedByUserForIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3;
- (oneway void)hintDisplayedForIdentifier:(NSString *)arg1 context:(NSString *)arg2;
- (void)validateAndPrepareContentForDisplay:(id)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3 completionHandler:(void (^)(_Bool, id, NSError *))arg4;
- (void)contentWithContentID:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3 completionHandler:(void (^)(id, NSArray *, long long, NSError *))arg4;
@end

