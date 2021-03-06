/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASBulletinPostingManager <ASActivitySharingManagerReadyObserver>
@property (assign,nonatomic,__weak) id<ASBulletinPostingManagerDelegate> delegate; 
@required
-(id<ASBulletinPostingManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)postNotificationRequest:(id)arg1;
-(void)removeNotificationWithIdentifier:(id)arg1;
-(void)enqueueBulletins:(id)arg1 withPostingSyle:(long long)arg2;
-(void)removeCompetitionNotificationsForFriendUUID:(id)arg1;
-(void)registerNotificationCategories:(id)arg1;
-(void)postFakeBulletins:(id)arg1;

@end

