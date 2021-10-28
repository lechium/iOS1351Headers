/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASettingOpenSettings.h>

@class NSString;

@interface SASettingOpenPreference : SASettingOpenSettings

@property (nonatomic,copy) NSString * pane; 
@property (nonatomic,copy) NSString * tag; 
+(id)openPreference;
+(id)openPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)setPane:(NSString *)arg1 ;
-(NSString *)pane;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
