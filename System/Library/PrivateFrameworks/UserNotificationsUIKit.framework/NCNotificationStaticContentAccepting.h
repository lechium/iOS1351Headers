/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, UIImage, UIView;


@protocol NCNotificationStaticContentAccepting <PLTitled>
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * primarySubtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (nonatomic,copy) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines; 
@optional
-(void)setAccessoryView:(id)arg1;
-(UIView *)accessoryView;
-(UIImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(void)setSummaryText:(id)arg1;
-(NSString *)summaryText;
-(void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1;
-(void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1;
-(void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1;
-(void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1;
-(unsigned long long)maximumNumberOfPrimaryTextLines;
-(unsigned long long)maximumNumberOfPrimaryLargeTextLines;
-(unsigned long long)maximumNumberOfSecondaryTextLines;
-(unsigned long long)maximumNumberOfSecondaryLargeTextLines;

@required
-(NSString *)primaryText;
-(void)setPrimaryText:(id)arg1;
-(NSString *)secondaryText;
-(void)setSecondaryText:(id)arg1;
-(void)setInterfaceActions:(id)arg1;
-(NSArray *)interfaceActions;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(id)arg1;

@end

