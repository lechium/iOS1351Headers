/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FCKeyValueStore, NSMutableDictionary, NSDictionary;

@interface FCPurchaseLookUpEntriesManager : NSObject {

	FCKeyValueStore* _localStore;
	NSMutableDictionary* _entriesByTagID;

}

@property (nonatomic,retain) FCKeyValueStore * localStore;                       //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entriesByTagID;               //@synthesize entriesByTagID=_entriesByTagID - In the implementation block
@property (nonatomic,readonly) NSDictionary * lookupEntriesByTagID; 
-(void)removeAllEntries;
-(void)removeEntry:(id)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)loadLocalCachesFromStore;
-(id)initWithLocalStore:(id)arg1 ;
-(NSDictionary *)lookupEntriesByTagID;
-(void)addEntryWithTagID:(id)arg1 purchaseID:(id)arg2 lastVerificationTime:(id)arg3 lastVerificationFailureTime:(id)arg4 purchaseType:(unsigned long long)arg5 purchaseValidationState:(unsigned long long)arg6 isNewsAppPurchase:(BOOL)arg7 dateOfExpiration:(id)arg8 hasShownRenewalNotice:(BOOL)arg9 ;
-(void)updateEntry:(id)arg1 ;
-(void)removeEntryForTagID:(id)arg1 ;
-(void)setEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)entriesByTagID;
-(id)_purchaseLookUpEntryIDForTagID:(id)arg1 ;
@end

