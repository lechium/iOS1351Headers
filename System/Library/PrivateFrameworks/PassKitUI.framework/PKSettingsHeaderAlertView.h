/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UITextView, NSString;

@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView> {

	UITextView* _textView;
	NSString* _headerText;
	NSString* _descriptionText;

}

@property (nonatomic,retain) NSString * headerText;                   //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end
