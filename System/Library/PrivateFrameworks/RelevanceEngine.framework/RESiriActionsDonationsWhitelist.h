/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSDictionary, NSSet;

@interface RESiriActionsDonationsWhitelist : NSObject {

	NSDictionary* _whitelist;
	os_unfair_lock_s _lock;
	NSSet* _intentWhitelistBundleIDs;
	NSSet* _userActivityWhitelistBundleIDs;

}

@property (nonatomic,readonly) NSSet * intentWhitelistBundleIDs;                    //@synthesize intentWhitelistBundleIDs=_intentWhitelistBundleIDs - In the implementation block
@property (nonatomic,readonly) NSSet * userActivityWhitelistBundleIDs;              //@synthesize userActivityWhitelistBundleIDs=_userActivityWhitelistBundleIDs - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2 ;
-(id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2 ;
-(id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2 ;
-(BOOL)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2 ;
-(NSSet *)intentWhitelistBundleIDs;
-(NSSet *)userActivityWhitelistBundleIDs;
@end
