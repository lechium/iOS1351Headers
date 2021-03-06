/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DIAttributeText : DIAttribute <NSSecureCoding> {

	BOOL _isSecureText;
	BOOL _isSecureVisibleText;
	BOOL _isNumeric;
	BOOL _luhnCheck;
	NSString* defaultValue;
	NSString* currentValue;
	unsigned long long _minLength;
	unsigned long long _maxLength;
	NSString* _displayFormatPlaceholder;

}

@property (assign,nonatomic) unsigned long long minLength;                              //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                              //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) BOOL isSecureText;                                         //@synthesize isSecureText=_isSecureText - In the implementation block
@property (assign,nonatomic) BOOL isSecureVisibleText;                                  //@synthesize isSecureVisibleText=_isSecureVisibleText - In the implementation block
@property (assign,nonatomic) BOOL isNumeric;                                            //@synthesize isNumeric=_isNumeric - In the implementation block
@property (nonatomic,copy) NSString * defaultValue; 
@property (assign,getter=useLuhnCheck,nonatomic) BOOL luhnCheck;                        //@synthesize luhnCheck=_luhnCheck - In the implementation block
@property (nonatomic,copy) NSString * displayFormatPlaceholder;                         //@synthesize displayFormatPlaceholder=_displayFormatPlaceholder - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSString * currentValue; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)minLength;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setMinLength:(unsigned long long)arg1 ;
-(void)setCurrentValue:(NSString *)arg1 ;
-(id)submissionString;
-(id)displayFormatPaddingCharacters;
-(BOOL)isNumeric;
-(BOOL)useLuhnCheck;
-(NSString *)displayFormatPlaceholder;
-(BOOL)isSecureText;
-(BOOL)isSecureVisibleText;
-(void)setLuhnCheck:(BOOL)arg1 ;
-(void)setDisplayFormatPlaceholder:(NSString *)arg1 ;
-(id)getCurrentValue;
-(void)setIsSecureText:(BOOL)arg1 ;
-(void)setIsSecureVisibleText:(BOOL)arg1 ;
-(void)setIsNumeric:(BOOL)arg1 ;
@end

