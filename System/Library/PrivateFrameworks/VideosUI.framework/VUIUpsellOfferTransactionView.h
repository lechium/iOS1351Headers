/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUIUpsellOfferTransactionViewLayout, VUILabel, NSArray;

@interface VUIUpsellOfferTransactionView : UIView {

	IKViewElement* _viewElement;
	VUIUpsellOfferTransactionViewLayout* _layout;
	VUILabel* _disclaimerLabel;
	NSArray* _buttons;

}

@property (nonatomic,retain) IKViewElement * viewElement;                               //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferTransactionViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerLabel;                                //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                         //@synthesize buttons=_buttons - In the implementation block
+(id)transactionViewFromElement:(id)arg1 existingView:(id)arg2 ;
-(VUIUpsellOfferTransactionViewLayout *)layout;
-(void)setLayout:(VUIUpsellOfferTransactionViewLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(VUILabel *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
@end

