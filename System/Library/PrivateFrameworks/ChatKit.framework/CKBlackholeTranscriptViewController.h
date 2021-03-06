/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class CKConversation, NSMutableArray, UITextView, STLockoutViewController, STConversationContext, UIView, NSString;

@interface CKBlackholeTranscriptViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _isShowingLockoutView;
	CKConversation* _conversation;
	NSMutableArray* _messages;
	UITextView* _headerTextView;
	STLockoutViewController* _lockoutViewController;
	STConversationContext* _conversationContext;
	UIView* _lockoutView;

}

@property (nonatomic,retain) CKConversation * conversation;                                //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSMutableArray * messages;                                    //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) UITextView * headerTextView;                                  //@synthesize headerTextView=_headerTextView - In the implementation block
@property (assign,nonatomic) BOOL isShowingLockoutView;                                    //@synthesize isShowingLockoutView=_isShowingLockoutView - In the implementation block
@property (nonatomic,retain) STLockoutViewController * lockoutViewController;              //@synthesize lockoutViewController=_lockoutViewController - In the implementation block
@property (nonatomic,retain) STConversationContext * conversationContext;                  //@synthesize conversationContext=_conversationContext - In the implementation block
@property (nonatomic,retain) UIView * lockoutView;                                         //@synthesize lockoutView=_lockoutView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)setConversationContext:(STConversationContext *)arg1 ;
-(STConversationContext *)conversationContext;
-(id)_conversationList;
-(void)updateScreenTimeShieldIfNeededForChat:(id)arg1 ;
-(BOOL)isChatAllowedByScreenTime:(id)arg1 ;
-(void)removeLockoutControllerIfNeeded;
-(void)showScreenTimeShieldIfNeeded;
-(void)chatAllowedByScreenTimeChanged:(id)arg1 ;
-(BOOL)isShowingLockoutView;
-(STLockoutViewController *)lockoutViewController;
-(void)setLockoutViewController:(STLockoutViewController *)arg1 ;
-(void)setLockoutView:(UIView *)arg1 ;
-(void)setIsShowingLockoutView:(BOOL)arg1 ;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(id)_handleIDsForCurrentConversation;
-(UIView *)lockoutView;
-(void)layoutLockoutView;
-(void)_confirmDeleteConversation:(id)arg1 view:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_alertTitleForDelete;
-(void)_deleteConversation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateTranscriptHistory;
-(id)generateHeader;
-(void)setHeaderTextView:(UITextView *)arg1 ;
-(UITextView *)headerTextView;
@end

