/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANPVideoLanguageOption : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * characteristics; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * languageTag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_languageOptionFromMediaRemoteRepresentation:(void*)arg1 ;
+(id)languageOption;
+(id)languageOptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)languageTag;
-(id)encodedClassName;
-(void)setLanguageTag:(NSString *)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSArray *)characteristics;
@end
