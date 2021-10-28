/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SATTSSpeechSynthesisStreaming.h>

@class NSString;

@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming

@property (assign,nonatomic) long long count; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * errorMessage; 
+(id)speechSynthesisStreamingEnd;
+(id)speechSynthesisStreamingEndWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)errorMessage;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setErrorMessage:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end
