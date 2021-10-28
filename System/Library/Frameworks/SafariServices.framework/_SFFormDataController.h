/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebUI/WBUFormDataController.h>
#import <libobjc.A.dylib/_SFAuthenticationContextDelegate.h>

@class WBSOneTimeCodeMonitor, _SFAuthenticationContext, NSString;

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate> {

	WBSOneTimeCodeMonitor* _oneTimeCodeMonitor;
	_SFAuthenticationContext* _autoFillAuthenticationContext;

}

@property (nonatomic,readonly) _SFAuthenticationContext * autoFillAuthenticationContext;              //@synthesize autoFillAuthenticationContext=_autoFillAuthenticationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(_SFAuthenticationContext *)autoFillAuthenticationContext;
-(id)oneTimeCodeMonitor;
-(double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1 ;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg1 ;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg1 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1 ;
-(id)initWithAggressiveKeychainCaching:(BOOL)arg1 ;
@end
