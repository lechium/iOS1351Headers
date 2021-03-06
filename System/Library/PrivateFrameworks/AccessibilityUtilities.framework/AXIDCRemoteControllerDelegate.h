/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXIDCRemoteControllerDelegate <NSObject>
@property (assign,nonatomic,__weak) id<AXIDCManagerSecurityDelegate> securityDelegate; 
@required
-(void)controller:(id)arg1 didReceiveData:(id)arg2;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2;
-(void)controllerDidFinishConnecting:(id)arg1;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
-(id<AXIDCManagerSecurityDelegate>)securityDelegate;
-(void)setSecurityDelegate:(id)arg1;

@end

