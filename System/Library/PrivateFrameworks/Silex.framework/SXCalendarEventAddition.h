/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXAddition.h>

@class NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAddition : SXAddition

@property (nonatomic,readonly) NSString * startDate; 
@property (nonatomic,readonly) NSString * endDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * location; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) SXFormattedText * notes; 
-(SXFormattedText *)notes;
-(NSURL *)URL;
-(NSString *)location;
-(NSString *)title;
-(NSString *)endDate;
-(NSString *)startDate;
-(id)notesWithValue:(id)arg1 withType:(int)arg2 ;
@end

