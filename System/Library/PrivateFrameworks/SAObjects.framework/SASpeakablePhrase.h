/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASpeakablePhrase : SADomainObject

@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * pronunciation; 
+(id)speakablePhrase;
+(id)speakablePhraseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(NSString *)pronunciation;
-(void)setPronunciation:(NSString *)arg1 ;
-(id)encodedClassName;
@end

