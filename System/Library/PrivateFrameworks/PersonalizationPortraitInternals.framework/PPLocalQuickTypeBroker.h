/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@class PPQuickTypeNavigationServant, PPQuickTypeContactsServant, PPQuickTypeEventsServant, PPQuickTypeConnectionsServant, _PASLock, PPMFeedbackRegistered, PPM2FeedbackPortraitRegistered;

@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {

	PPQuickTypeNavigationServant* _navigationServant;
	PPQuickTypeContactsServant* _contactsServant;
	PPQuickTypeEventsServant* _eventsServant;
	PPQuickTypeConnectionsServant* _connectionsServant;
	_PASLock* _cacheLock;
	PPMFeedbackRegistered* _feedbackTracker;
	PPM2FeedbackPortraitRegistered* _feedbackTracker2;

}
+(id)sharedInstance;
-(id)init;
-(void)_registerForNotifications;
-(void)_clearCaches;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(void)hibernateWithCompletion:(/*^block*/id)arg1 ;
-(void)processFeedback:(id)arg1 ;
-(id)_quickTypeItemsFromServantsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(BOOL)_shouldUseCacheWithCacheEntry:(id)arg1 query:(id)arg2 ;
-(id)_recipientItemCacheKeyForRecipients:(id)arg1 ;
-(id)_cachedQuickTypeItemsWithQuery:(id)arg1 ;
-(id)_cachedQuickTypeItemsWithRecipients:(id)arg1 ;
-(id)_cacheEntryWithRecipients:(id)arg1 ;
-(id)filterFeedback:(id)arg1 ;
@end

