/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface VCVoiceShortcutPhraseValidationResult : NSObject <NSSecureCoding> {

	NSString* _phrase;
	long long _validationState;
	NSError* _validationError;

}

@property (nonatomic,copy,readonly) NSString * phrase;               //@synthesize phrase=_phrase - In the implementation block
@property (assign,nonatomic) long long validationState;              //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSError * validationError;              //@synthesize validationError=_validationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phrase;
-(long long)validationState;
-(void)setValidationState:(long long)arg1 ;
-(id)initWithPhrase:(id)arg1 validationState:(long long)arg2 validationError:(id)arg3 ;
-(NSError *)validationError;
-(void)setValidationError:(NSError *)arg1 ;
@end
