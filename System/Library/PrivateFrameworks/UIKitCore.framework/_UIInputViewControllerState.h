/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIDocumentState, TITextInputTraits, UITextInputMode, NSUUID;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _needsInputModeSwitchKey;
	TIDocumentState* _documentState;
	TITextInputTraits* _textInputTraits;
	UITextInputMode* _documentInputMode;
	NSUUID* _documentIdentifier;

}

@property (nonatomic,retain) TIDocumentState * documentState;                  //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) UITextInputMode * documentInputMode;              //@synthesize documentInputMode=_documentInputMode - In the implementation block
@property (nonatomic,copy) NSUUID * documentIdentifier;                        //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (assign,nonatomic) BOOL needsInputModeSwitchKey;                     //@synthesize needsInputModeSwitchKey=_needsInputModeSwitchKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stateForKeyboardState:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(TIDocumentState *)documentState;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(UITextInputMode *)documentInputMode;
-(BOOL)needsInputModeSwitchKey;
-(void)createDocumentStateIfNecessary;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(NSUUID *)documentIdentifier;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(void)setDocumentIdentifier:(NSUUID *)arg1 ;
-(void)setNeedsInputModeSwitchKey:(BOOL)arg1 ;
@end

