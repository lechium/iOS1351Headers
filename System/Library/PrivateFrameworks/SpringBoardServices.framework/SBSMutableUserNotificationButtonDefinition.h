/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <SpringBoardServices/SBSUserNotificationButtonDefinition.h>

@class NSString;

@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int presentationStyle; 
@property (assign,nonatomic) BOOL isPreferredButton; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setIsPreferredButton:(BOOL)arg1 ;
@end

