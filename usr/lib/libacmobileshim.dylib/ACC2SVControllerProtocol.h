/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACC2SVControllerProtocol <NSObject>
@property (assign,nonatomic) id<ACC2SVControllerDelegate> delegate; 
@property (nonatomic,retain) id<ACC2SVAuthenticationUIControllerProtocol> secondFactorAuthUIController; 
@property (nonatomic,retain) id<ACC2SVTransportControllerProtocol> transportController; 
@optional
-(void)removeHSATokenForPrincipal:(id)arg1;
-(void)synchronizeHSATokens:(id)arg1;
-(void)setup2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(id<ACC2SVControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(void)setSecondFactorAuthUIController:(id)arg1;
-(void)setTransportController:(id)arg1;
-(id<ACC2SVAuthenticationUIControllerProtocol>)secondFactorAuthUIController;
-(id<ACC2SVTransportControllerProtocol>)transportController;
-(void)perform2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@end
