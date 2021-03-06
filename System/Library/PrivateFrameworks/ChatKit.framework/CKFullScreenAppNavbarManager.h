/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKAvatarNotificationCalloutViewDelegate.h>

@protocol CKFullScreenAppNavbarManagerDelegate;
@class IMBalloonPlugin, UIButton, CKNavigationBarCanvasView, CKAvatarPickerViewController, CKConversation, NSMutableArray, NSTimer, UILabel, NSString;

@interface CKFullScreenAppNavbarManager : NSObject <CKAvatarNotificationCalloutViewDelegate> {

	long long _style;
	id<CKFullScreenAppNavbarManagerDelegate> _delegate;
	IMBalloonPlugin* _plugin;
	UIButton* _dismissButton;
	UIButton* _appIconButton;
	CKNavigationBarCanvasView* _canvasView;
	CKAvatarPickerViewController* _avatarPickerViewController;
	CKConversation* _conversation;
	NSMutableArray* _notificationViews;
	NSTimer* _notificationTimer;
	UILabel* _defaultTitleLabel;

}

@property (nonatomic,retain) UIButton * dismissButton;                                               //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIButton * appIconButton;                                               //@synthesize appIconButton=_appIconButton - In the implementation block
@property (nonatomic,retain) CKNavigationBarCanvasView * canvasView;                                 //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) CKAvatarPickerViewController * avatarPickerViewController;              //@synthesize avatarPickerViewController=_avatarPickerViewController - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationViews;                                     //@synthesize notificationViews=_notificationViews - In the implementation block
@property (nonatomic,retain) NSTimer * notificationTimer;                                            //@synthesize notificationTimer=_notificationTimer - In the implementation block
@property (nonatomic,retain) UILabel * defaultTitleLabel;                                            //@synthesize defaultTitleLabel=_defaultTitleLabel - In the implementation block
@property (assign,nonatomic) long long style;                                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<CKFullScreenAppNavbarManagerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * plugin;                                               //@synthesize plugin=_plugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKFullScreenAppNavbarManagerDelegate>)delegate;
-(void)setDelegate:(id<CKFullScreenAppNavbarManagerDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)_invalidateTimer;
-(void)setCanvasView:(CKNavigationBarCanvasView *)arg1 ;
-(CKNavigationBarCanvasView *)canvasView;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(void)_updateTitleView;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(NSTimer *)notificationTimer;
-(void)setNotificationTimer:(NSTimer *)arg1 ;
-(void)avatarNotificationCalloutViewWillFadeIn:(id)arg1 ;
-(void)avatarNotificationCalloutViewDidFinishFadeOut:(id)arg1 ;
-(void)avatarNotificationCalloutViewReceivedTouch:(id)arg1 ;
-(void)_handleChatItemDidChange:(id)arg1 ;
-(void)_handleChatDisplayNameChange:(id)arg1 ;
-(void)_contactPhotosEnabledChangedNotification:(id)arg1 ;
-(void)_configureCanvasView;
-(void)_updateDismissButton;
-(BOOL)_canShowAvatarView;
-(void)_updateTitleLabelText;
-(BOOL)_didReceiveMessageChatItem:(id)arg1 addedChatItems:(id)arg2 ;
-(BOOL)_shouldStartnotificationQueue;
-(void)_startNotificationQueue;
-(CKAvatarPickerViewController *)avatarPickerViewController;
-(void)_addNotificationViewToQueue;
-(NSMutableArray *)notificationViews;
-(void)_removeAllNotifications;
-(void)setNotificationViews:(NSMutableArray *)arg1 ;
-(void)_dequeueNotificationViews:(id)arg1 ;
-(long long)_viewModeForCalloutView;
-(UILabel *)defaultTitleLabel;
-(void)setAvatarPickerViewController:(CKAvatarPickerViewController *)arg1 ;
-(void)setDefaultTitleLabel:(UILabel *)arg1 ;
-(UIButton *)appIconButton;
-(id)initWithConversation:(id)arg1 plugin:(id)arg2 ;
-(void)dismissNotifications;
-(void)setAppIconButton:(UIButton *)arg1 ;
@end

