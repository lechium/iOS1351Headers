/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSNumber, NSArray;

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (nonatomic,copy) NSNumber * minimumWidth; 
@property (nonatomic,copy) NSNumber * rightMargin; 
@property (nonatomic,copy) NSArray * values; 
+(id)tabularDataColumn;
+(id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(void)setRightMargin:(NSNumber *)arg1 ;
-(NSNumber *)minimumWidth;
-(void)setMinimumWidth:(NSNumber *)arg1 ;
-(NSNumber *)rightMargin;
-(id)encodedClassName;
@end

