/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * speechRecognitionId; 
@property (assign,nonatomic) long long utteranceIndex; 
+(id)changePrimaryUtterance;
+(id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speechRecognitionId;
-(void)setSpeechRecognitionId:(NSString *)arg1 ;
-(long long)utteranceIndex;
-(void)setUtteranceIndex:(long long)arg1 ;
@end

