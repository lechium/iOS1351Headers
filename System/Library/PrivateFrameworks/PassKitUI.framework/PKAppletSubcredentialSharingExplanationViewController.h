/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@class PKHeroCardExplainationHeaderView, PKSharedCredentialsGroupController, PKAppletSubcredentialSharingRequest, PKSubcredentialMessageComposeViewController, NSString;

@interface PKAppletSubcredentialSharingExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialMessageComposeViewControllerDelegate, PKViewControllerPreflightable> {

	PKHeroCardExplainationHeaderView* _heroCardView;
	PKSharedCredentialsGroupController* _groupController;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	BOOL _isSharing;
	PKSubcredentialMessageComposeViewController* _messageComposeViewController;

}

@property (nonatomic,retain) PKSubcredentialMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)setMessageComposeViewController:(PKSubcredentialMessageComposeViewController *)arg1 ;
-(PKSubcredentialMessageComposeViewController *)messageComposeViewController;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
-(void)_openMessagesToPresentAction;
-(id)initWithSharedCredentialsGroupController:(id)arg1 SharingRequest:(id)arg2 ;
@end

