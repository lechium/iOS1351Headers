/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CardDAVDelegateInfoProvider;
@class NSString, ACAccountStore;

@interface CardDAVDelegateManager : NSObject {

	id<CardDAVDelegateInfoProvider> _delegateProvider;
	NSString* _accountID;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                 //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) id<CardDAVDelegateInfoProvider> delegateProvider;              //@synthesize delegateProvider=_delegateProvider - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                                          //@synthesize accountID=_accountID - In the implementation block
+(void)finishFutures:(id)arg1 ;
-(id)account;
-(ACAccountStore *)accountStore;
-(NSString *)accountID;
-(id)removeAccount:(id)arg1 ;
-(id)addChildWithDelegateInfo:(id)arg1 ;
-(id)saveAccount:(id)arg1 ;
-(void)updateDelegates;
-(id)existingChildAccountsWithProperty:(id)arg1 ;
-(id)collectDelegateInfo;
-(id<CardDAVDelegateInfoProvider>)delegateProvider;
-(id)initWithDelegateInfoProvider:(id)arg1 accountID:(id)arg2 ;
-(id)collectExpiredDelegateInfo;
@end

