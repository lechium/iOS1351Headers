/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate {

	NSString* _candidate;
	BOOL _inlineCandidate;

}

@property (assign,getter=isInlineCandidate,nonatomic) BOOL inlineCandidate;              //@synthesize inlineCandidate=_inlineCandidate - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(id)candidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isInlineCandidate;
-(void)setInlineCandidate:(BOOL)arg1 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 candidate:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
@end
