/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FMKeychainManager : NSObject
+(id)sharedInstance;
-(int)_delete:(id)arg1 ;
-(id)allServices;
-(id)allRecords;
-(id)_accessibilityForDataProtectionClass:(long long)arg1 migratable:(BOOL)arg2 ;
-(int)_add:(id)arg1 ;
-(int)_updateWithQuery:(id)arg1 attributes:(id)arg2 ;
-(BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)itemForAccount:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
-(BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(id)_query:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteDataForAccount:(id)arg1 service:(id)arg2 ;
-(id)dataForAccount:(id)arg1 service:(id)arg2 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)passwordForAccount:(id)arg1 service:(id)arg2 ;
-(id)allAccountsForService:(id)arg1 ;
@end

