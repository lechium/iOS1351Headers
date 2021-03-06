/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SACFPEXItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * itemSource; 
@property (nonatomic,copy) NSNumber * score; 
@property (nonatomic,copy) NSString * sourceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)item;
+(id)itemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)score;
-(void)setScore:(NSNumber *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(id)encodedClassName;
-(NSString *)itemSource;
-(void)setItemSource:(NSString *)arg1 ;
@end

