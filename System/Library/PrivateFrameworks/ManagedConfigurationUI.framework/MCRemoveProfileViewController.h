/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCInstallProfileViewController.h>
#import <libobjc.A.dylib/MCInteractionDelegate.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class MCProfile, UITextField, NSString;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCInteractionDelegate, MCProfileViewControllerDelegate, PSStateRestoration, UIActionSheetDelegate, UITextFieldDelegate> {

	BOOL _profileWantsToReEnroll;
	BOOL _actionButtonHidden;
	struct {
		unsigned installedThisLaunch : 1;
		unsigned profileSuggestsReboot : 1;
	}  _configurationFlags;
	MCProfile* _updatingProfile;
	UITextField* _passwordField;

}

@property (nonatomic,retain) MCProfile * updatingProfile;              //@synthesize updatingProfile=_updatingProfile - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(UITextField *)passwordField;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)setPasswordField:(UITextField *)arg1 ;
-(void)setInstallState:(int)arg1 animated:(BOOL)arg2 ;
-(void)updateTitleForProfileInstallationState:(int)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(BOOL)arg2 ;
-(void)_profileRemovalDidFinish;
-(BOOL)_isProfileInstalled;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg1 ;
-(BOOL)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2 ;
-(void)_profileListChanged:(id)arg1 ;
-(MCProfile *)updatingProfile;
-(void)setUpdatingProfile:(MCProfile *)arg1 ;
-(void)_removeProfile;
-(void)_updateProfile;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_showLeaveRemoteManagementAlert;
-(void)_showRemovalWarningAlert;
-(void)_showRemovalWarningActionSheet;
-(void)_performReEnroll;
-(void)_performReEnrollAfterPINVerification;
-(void)_showEraseDeviceAlert;
-(void)_leaveRemoteManagementAndErase;
-(void)_resetWithMode:(int)arg1 ;
-(id)_mdmProfileRemovalAlertBody;
-(void)_showWrongRemovalPasswordAlert;
-(void)_clearCachedTableCells;
@end

