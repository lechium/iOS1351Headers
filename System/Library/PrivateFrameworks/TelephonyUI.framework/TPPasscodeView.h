/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableString, NSString;

@interface TPPasscodeView : UIView {

	NSMutableString* _passcodeMutableString;

}

@property (retain) NSMutableString * passcodeMutableString;              //@synthesize passcodeMutableString=_passcodeMutableString - In the implementation block
@property (readonly) NSString * passcodeString; 
-(void)clear;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)deleteLastCharacter;
-(NSString *)passcodeString;
-(void)appendCharacter:(id)arg1 ;
-(void)setPasscodeMutableString:(NSMutableString *)arg1 ;
-(NSMutableString *)passcodeMutableString;
@end
