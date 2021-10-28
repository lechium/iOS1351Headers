/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * aliases; 
@property (nonatomic,copy) NSArray * longhands; 
@property (nonatomic,copy) NSArray * values; 
@property (assign,nonatomic) BOOL inherited; 
+(id)safe_initWithName:(id)arg1 ;
-(NSString *)name;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSArray *)aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(void)setInherited:(BOOL)arg1 ;
-(void)setLonghands:(NSArray *)arg1 ;
-(BOOL)inherited;
-(NSArray *)longhands;
@end
