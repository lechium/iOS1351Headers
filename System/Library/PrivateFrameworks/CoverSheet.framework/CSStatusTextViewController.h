/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSStatusTextViewControllerDelegate;
@class CSStatusTextView, NSString, MCProfileConnection;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase {

	CSStatusTextView* _view;
	NSString* _overrideFooterText;
	MCProfileConnection* _profileConnection;
	id<CSStatusTextViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSStatusTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * overrideFooterText;                                         //@synthesize overrideFooterText=_overrideFooterText - In the implementation block
-(id)init;
-(id<CSStatusTextViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSStatusTextViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateText;
-(id)statusTextView;
-(void)_profileStateChangedNotification:(id)arg1 ;
-(void)_updateTextForProfiles;
-(void)_updateTextForLegal;
-(void)_updateTextForDeviceInformation;
-(void)_updateTextForSupervision;
-(void)_updateTextForProvisionalEnrollment;
-(id)_legalString;
-(id)_legalContact;
-(void)setOverrideFooterText:(NSString *)arg1 ;
-(NSString *)overrideFooterText;
@end

