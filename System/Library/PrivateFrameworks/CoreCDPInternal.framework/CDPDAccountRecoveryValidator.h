/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPRecoveryKeyValidatorInternal.h>

@protocol CDPAuthProviderInternal;
@class CDPContext, NSDictionary, NSString;

@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal> {

	id<CDPAuthProviderInternal> _authProvider;
	CDPContext* _context;
	NSDictionary* _recoveredInfo;
	NSString* _recoveryKey;

}

@property (nonatomic,copy) NSDictionary * recoveredInfo;              //@synthesize recoveredInfo=_recoveredInfo - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                    //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(void)setRecoveredInfo:(NSDictionary *)arg1 ;
-(id)_cdpErrorFromAuthKitError:(id)arg1 ;
-(id)initWithContext:(id)arg1 authProvider:(id)arg2 ;
-(NSDictionary *)recoveredInfo;
@end

