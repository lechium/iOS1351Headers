/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@protocol GKFriendRequestComposeViewControllerDelegate;
@class NSString, UIAlertController;

@interface GKFriendRequestComposeViewController : UINavigationController {

	unsigned _rid;
	id<GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
	NSString* _message;
	unsigned long long _recipientCount;
	UIAlertController* _alertController;

}

@property (nonatomic,copy) NSString * message;                                                                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long recipientCount;                                                 //@synthesize recipientCount=_recipientCount - In the implementation block
@property (assign,nonatomic) unsigned rid;                                                                      //@synthesize rid=_rid - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                               //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) id<GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;              //@synthesize composeViewDelegateWeak=_composeViewDelegateWeak - In the implementation block
+(unsigned long long)maxNumberOfRecipients;
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setRecipientCount:(unsigned long long)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(unsigned long long)recipientCount;
-(void)setComposeViewDelegate:(id<GKFriendRequestComposeViewControllerDelegate>)arg1 ;
-(id<GKFriendRequestComposeViewControllerDelegate>)composeViewDelegate;
-(void)_setupChildViewController;
-(void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1 ;
-(void)prepareForNewRecipients:(id)arg1 ;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(void)_addRecipientInternals:(id)arg1 ;
-(void)addRecipientPlayers:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
@end
