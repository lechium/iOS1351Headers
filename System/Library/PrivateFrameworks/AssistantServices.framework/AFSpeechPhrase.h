/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {

	BOOL _isLowConfidence;
	NSArray* _interpretations;

}

@property (nonatomic,copy) NSArray * interpretations;              //@synthesize interpretations=_interpretations - In the implementation block
@property (assign,nonatomic) BOOL isLowConfidence;                 //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLowConfidence;
-(void)setIsLowConfidence:(BOOL)arg1 ;
-(NSArray *)interpretations;
-(id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(id)bestInterpretation;
-(id)firstInterpretation;
-(id)allInterpretationStringsAndScores;
-(void)setInterpretations:(NSArray *)arg1 ;
@end

