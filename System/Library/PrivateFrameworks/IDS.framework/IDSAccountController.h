/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _IDSAccountController, NSSet;

@interface IDSAccountController : NSObject {

	_IDSAccountController* _internal;

}

@property (nonatomic,readonly) NSSet * accounts; 
-(void)dealloc;
-(id)_internal;
-(id)serviceName;
-(NSSet *)accounts;
-(void)removeDelegate:(id)arg1 ;
-(id)_initWithService:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithService:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)_removeAccount:(id)arg1 ;
-(void)enableAccount:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(id)_initWithService:(id)arg1 onIDSQueue:(BOOL)arg2 ;
-(id)enabledAccounts;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enableAccount:(id)arg1 ;
-(void)_disableAccount:(id)arg1 ;
@end
