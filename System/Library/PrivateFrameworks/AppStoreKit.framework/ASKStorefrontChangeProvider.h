/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount;

@interface ASKStorefrontChangeProvider : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	ACAccountStore* _accountStore;
	ACAccount* _localAccount;
	ACAccount* _activeAccount;

}

@property (nonatomic,copy,readonly) id block;                                         //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * localAccount;                                //@synthesize localAccount=_localAccount - In the implementation block
@property (nonatomic,retain) ACAccount * activeAccount;                               //@synthesize activeAccount=_activeAccount - In the implementation block
-(void)dealloc;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(ACAccountStore *)accountStore;
-(ACAccount *)localAccount;
-(ACAccount *)activeAccount;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)setActiveAccount:(ACAccount *)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(BOOL)hasStorefrontChangedFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(BOOL)hasManagedStateChangedFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(void)setLocalAccount:(ACAccount *)arg1 ;
@end
