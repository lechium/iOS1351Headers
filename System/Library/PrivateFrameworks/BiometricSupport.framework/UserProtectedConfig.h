/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface UserProtectedConfig : NSObject {

	int _unlockEnabled;
	int _identificationEnabled;
	int _loginEnabled;
	int _applePayEnabled;
	int _attentionDetectionEnabled;

}

@property (assign,nonatomic) int unlockEnabled;                          //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) int identificationEnabled;                  //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (assign,nonatomic) int loginEnabled;                           //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (assign,nonatomic) int applePayEnabled;                        //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (assign,nonatomic) int attentionDetectionEnabled;              //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
-(id)init;
-(int)unlockEnabled;
-(void)setUnlockEnabled:(int)arg1 ;
-(int)identificationEnabled;
-(void)setIdentificationEnabled:(int)arg1 ;
-(int)loginEnabled;
-(void)setLoginEnabled:(int)arg1 ;
-(int)applePayEnabled;
-(void)setApplePayEnabled:(int)arg1 ;
-(int)attentionDetectionEnabled;
-(void)setAttentionDetectionEnabled:(int)arg1 ;
@end

