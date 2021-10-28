/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, UILabel, NSTextAttachment;

@interface CNContactDowntimeView : UIView {

	NSDictionary* _ab_textAttributes;
	UILabel* _downtimeLabel;
	NSTextAttachment* _imageAttachment;

}

@property (nonatomic,readonly) UILabel * downtimeLabel;                         //@synthesize downtimeLabel=_downtimeLabel - In the implementation block
@property (nonatomic,readonly) NSTextAttachment * imageAttachment;              //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (nonatomic,copy) NSDictionary * ab_textAttributes;                    //@synthesize ab_textAttributes=_ab_textAttributes - In the implementation block
+(id)lockImageAttachment;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setupAttributedText;
-(UILabel *)downtimeLabel;
-(NSTextAttachment *)imageAttachment;
@end
