/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SSVPlayActivityEnqueuerProperties;

@interface MPCReportingIdentityProperties : NSObject {

	BOOL _hasSubscriptionPlaybackCapability;
	NSString* _householdID;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	SSVPlayActivityEnqueuerProperties* _enqueuerProperties;

}

@property (nonatomic,copy) NSString * householdID;                                              //@synthesize householdID=_householdID - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                                 //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                                             //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionPlaybackCapability;                            //@synthesize hasSubscriptionPlaybackCapability=_hasSubscriptionPlaybackCapability - In the implementation block
@property (nonatomic,copy) SSVPlayActivityEnqueuerProperties * enqueuerProperties;              //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
-(unsigned long long)storeAccountID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(NSString *)storeFrontID;
-(SSVPlayActivityEnqueuerProperties *)enqueuerProperties;
-(NSString *)householdID;
-(void)setEnqueuerProperties:(SSVPlayActivityEnqueuerProperties *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setHasSubscriptionPlaybackCapability:(BOOL)arg1 ;
-(BOOL)hasSubscriptionPlaybackCapability;
@end

