/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASettingNumericEntity.h>

@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) float value; 
+(id)floatEntity;
+(id)floatEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)floatEntityWithValue:(float)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)groupIdentifier;
-(id)initWithValue:(float)arg1 ;
-(NSNumber *)previousValue;
-(void)setPreviousValue:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end
