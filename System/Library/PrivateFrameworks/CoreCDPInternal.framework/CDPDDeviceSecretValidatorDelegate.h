/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CDPDDeviceSecretValidatorDelegate <NSObject>
@optional
-(void)secretValidatorWillAttemptRecovery;
-(BOOL)secretValidator:(id)arg1 shouldAcceptRecoveryError:(id*)arg2;
-(void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(/*^block*/id)arg3;
-(void)secretValidator:(id)arg1 didFailRecovery:(id)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)secretValidator:(id)arg1 recoverSecureBackupWithContext:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2;

@end

