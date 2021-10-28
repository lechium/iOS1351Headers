/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject {

	CNCache* _accountsCache;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) CNCache * accountsCache;                    //@synthesize accountsCache=_accountsCache - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
+(id)sharedCache;
-(id)init;
-(void)clearCache;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)accountForIdentifier:(id)arg1 ;
-(CNCache *)accountsCache;
-(id)accountsForIdentifiers:(id)arg1 ;
-(void)setAccountsCache:(CNCache *)arg1 ;
@end
