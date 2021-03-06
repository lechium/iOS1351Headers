/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSError.h>

@interface PKCloudStoreError : NSError
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
+(BOOL)_isCloudKitErrorDomain:(id)arg1 ;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(long long)_code;
-(id)initWithError:(id)arg1 ;
-(BOOL)isPartialError;
-(id)_allPartialErrors;
-(BOOL)isZoneNotFoundError;
-(BOOL)isUnrecoverableDecryptionError;
-(BOOL)isManateeNotAvailableError;
-(BOOL)isKeychainSyncingInProgress;
-(BOOL)isPCSError;
-(BOOL)isChangeTokenExpired;
-(BOOL)isNetworkUnavailable;
-(BOOL)isInitializationTimeOutError;
@end

