/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol VCUserNotificationManagerDelegate;
@class UNUserNotificationCenter, NSString;

@interface VCUserNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	id<VCUserNotificationManagerDelegate> _delegate;
	UNUserNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) UNUserNotificationCenter * notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (assign,nonatomic,__weak) id<VCUserNotificationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<VCUserNotificationManagerDelegate>)delegate;
-(void)setDelegate:(id<VCUserNotificationManagerDelegate>)arg1 ;
-(UNUserNotificationCenter *)notificationCenter;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeNotificationsWithTriggerIdentifier:(id)arg1 ;
-(void)postNotificationThatTrigger:(id)arg1 failedWithError:(id)arg2 ;
-(void)postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 actionIcons:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

