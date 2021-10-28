/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol NCNotificationCustomContent <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate; 
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
@optional
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(NSString *)contentExtensionIdentifier;
-(void)playMedia;
-(id)cancelTouches;

@required
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)title;
-(BOOL)userInteractionEnabled;
-(BOOL)didReceiveNotificationRequest:(id)arg1;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
-(BOOL)defaultContentHidden;
-(BOOL)overridesDefaultTitle;
-(BOOL)allowManualDismiss;

@end
