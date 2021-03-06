/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationContent.h>

@class NSString, UIImage, NSArray, NSDate, NSTimeZone;

@interface NCMutableNotificationContent : NCNotificationContent

@property (nonatomic,copy) NSString * header; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * hiddenPreviewsBodyPlaceholder; 
@property (nonatomic,copy) NSString * categorySummaryFormat; 
@property (nonatomic,copy) NSString * summaryArgument; 
@property (assign,nonatomic) unsigned long long summaryArgumentCount; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSArray * icons; 
@property (nonatomic,retain) UIImage * carPlayIcon; 
@property (nonatomic,retain) NSArray * carPlayIcons; 
@property (nonatomic,retain) UIImage * attachmentImage; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(void)setSummaryArgument:(NSString *)arg1 ;
-(void)setSummaryArgumentCount:(unsigned long long)arg1 ;
-(void)setHiddenPreviewsBodyPlaceholder:(NSString *)arg1 ;
-(void)setCategorySummaryFormat:(NSString *)arg1 ;
-(void)setDateAllDay:(BOOL)arg1 ;
-(void)setCarPlayIcons:(NSArray *)arg1 ;
-(void)setCarPlayIcon:(UIImage *)arg1 ;
-(void)setAttachmentImage:(UIImage *)arg1 ;
@end

