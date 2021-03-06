//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKUtilityService-Protocol.h"

@class NSData, NSURL;

@protocol GKUtilityServicePrivate <GKUtilityService>
- (oneway void)loadDataForURL:(NSURL *)arg1 postBody:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (oneway void)refreshPreferences;
- (oneway void)updateNotificationTopics;
- (oneway void)pingWithHandler:(void (^)(void))arg1;
- (oneway void)terminate;
- (oneway void)openGameCenterSettings;
- (oneway void)openICloudSettings;
- (oneway void)openSettings;
@end

