/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUICastInfoLayout, IKViewElement, NSArray;

@interface VUIProductBannerCastInfoView : UIView {

	VUICastInfoLayout* _layout;
	IKViewElement* _viewElement;
	NSArray* _labels;

}

@property (nonatomic,retain) VUICastInfoLayout * layout;               //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) NSArray * labels;                         //@synthesize labels=_labels - In the implementation block
+(id)configureViewWithItems:(id)arg1 existingView:(id)arg2 ;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(VUICastInfoLayout *)layout;
-(void)setLayout:(VUICastInfoLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateTextColor;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

