/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {

	NSMutableCharacterSet* _numericTrimmingSet;
	unsigned long long _maxNumbersAllowed;
	BOOL _allowsNewlineAcceptance;
	BOOL _autoAcceptWhenMaxNumbersMet;

}

@property (assign,nonatomic) unsigned long long maxNumbersAllowed;              //@synthesize maxNumbersAllowed=_maxNumbersAllowed - In the implementation block
@property (assign,nonatomic) BOOL allowsNewlineAcceptance;                      //@synthesize allowsNewlineAcceptance=_allowsNewlineAcceptance - In the implementation block
@property (assign,nonatomic) BOOL autoAcceptWhenMaxNumbersMet;                  //@synthesize autoAcceptWhenMaxNumbersMet=_autoAcceptWhenMaxNumbersMet - In the implementation block
+(BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(void)setMaxNumbersAllowed:(unsigned long long)arg1 ;
-(unsigned long long)maxNumbersAllowed;
-(void)_appendString:(id)arg1 ;
-(void)_deleteLastCharacter;
-(void)setAllowsNewlineAcceptance:(BOOL)arg1 ;
-(void)setAutoAcceptWhenMaxNumbersMet:(BOOL)arg1 ;
-(BOOL)shouldInsertPasscodeText:(id)arg1 ;
-(BOOL)_hasMaxDigitsSpecified;
-(void)_reallyAppendString:(id)arg1 ;
-(BOOL)allowsNewlineAcceptance;
-(BOOL)autoAcceptWhenMaxNumbersMet;
@end

