/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface PUTextBannerView : UIView {

	UIImageView* _backgroundView;
	UILabel* _textLabel;
	BOOL _destructiveText;
	NSString* _text;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (assign,getter=isDestructiveText,nonatomic) BOOL destructiveText;              //@synthesize destructiveText=_destructiveText - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateSubviews;
-(long long)textAlignment;
-(void)setDestructiveText:(BOOL)arg1 ;
-(BOOL)isDestructiveText;
@end

