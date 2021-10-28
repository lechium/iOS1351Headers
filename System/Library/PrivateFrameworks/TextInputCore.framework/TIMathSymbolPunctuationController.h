/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TIMathSymbolPunctuationController : NSObject {

	unsigned long long _state;
	long long _location;
	unsigned short _replacementCharacter;
	BOOL _replaceAfterNumerals;
	BOOL _enabled;
	BOOL _converted;
	NSString* _decimalSeparator;

}

@property (nonatomic,copy) NSString * decimalSeparator;              //@synthesize decimalSeparator=_decimalSeparator - In the implementation block
@property (assign,nonatomic) BOOL replaceAfterNumerals;              //@synthesize replaceAfterNumerals=_replaceAfterNumerals - In the implementation block
@property (assign,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL converted;                       //@synthesize converted=_converted - In the implementation block
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)decimalSeparator;
-(void)reset;
-(void)setDecimalSeparator:(NSString *)arg1 ;
-(id)mathSymbolPunctuationedStringForInputString:(id)arg1 ;
-(BOOL)replaceAfterNumerals;
-(void)setReplaceAfterNumerals:(BOOL)arg1 ;
-(BOOL)converted;
@end
