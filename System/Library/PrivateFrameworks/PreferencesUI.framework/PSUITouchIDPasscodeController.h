/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PreferencesUI/PSUIBiometricController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/BiometricKitDelegate.h>
#import <libobjc.A.dylib/BiometricKitUIEnrollResultDelegate.h>

@protocol OS_dispatch_queue;
@class BiometricKit, NSObject, NSString;

@interface PSUITouchIDPasscodeController : PSUIBiometricController <UIPopoverControllerDelegate, BiometricKitDelegate, BiometricKitUIEnrollResultDelegate> {

	BiometricKit* _highlightMatcher;
	NSObject*<OS_dispatch_queue> _highlightQueue;

}

@property (nonatomic,retain) BiometricKit * highlightMatcher;                          //@synthesize highlightMatcher=_highlightMatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> highlightQueue;              //@synthesize highlightQueue=_highlightQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)statusMessage:(unsigned)arg1 ;
-(void)matchResult:(id)arg1 ;
-(void)enrollResult:(int)arg1 bkIdentity:(id)arg2 ;
-(void)enrollResult:(int)arg1 identity:(id)arg2 ;
-(void)enrollBiometric;
-(id)biometricLogo;
-(id)headerForUseBiometricSection;
-(void)enrollmentControllerDidDismiss;
-(void)cancelModalFlow;
-(void)backgrounded:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)highlightQueue;
-(BiometricKit *)highlightMatcher;
-(void)setHighlightMatcher:(BiometricKit *)arg1 ;
-(void)_setupMatching;
-(void)_cancelMatching;
-(void)setHighlightQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)fingerprintSpecifiers;
-(id)_fingerprintSpecifierForIdentity:(id)arg1 ;
-(void)addEnrollment:(id)arg1 ;
-(void)updateAddFingerprintSpecifier;
-(void)highlightFingerprintSpecifier:(id)arg1 ;
-(void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1 ;
@end
