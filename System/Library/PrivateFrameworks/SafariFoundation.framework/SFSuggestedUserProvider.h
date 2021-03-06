/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface SFSuggestedUserProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _suggestedEmails;
	NSArray* _suggestedNonEmails;

}
+(id)sharedProvider;
-(id)init;
-(void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)suggestedUsersOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_passwordStoreChangedNotification:(id)arg1 ;
-(id)_allCachedSuggestedUsersWithType:(long long)arg1 ;
-(id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2 ;
-(void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id*)arg2 suggestedNonEmails:(id*)arg3 ;
@end

