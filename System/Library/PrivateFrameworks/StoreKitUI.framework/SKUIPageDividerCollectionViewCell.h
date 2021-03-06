/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class UIView, UIColor, NSString;

@interface SKUIPageDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView> {

	UIEdgeInsets _contentInset;
	UIView* _topDividerLine;
	UIView* _bottomDividerLine;
	double _dividerHeight;
	long long _dividerType;
	UIView* _insetView;
	UIColor* _insetColor;
	double _leftEdgeInset;
	double _rightEdgeInset;
	long long _verticalAlignment;

}

@property (assign,nonatomic) long long dividerType;                    //@synthesize dividerType=_dividerType - In the implementation block
@property (assign,nonatomic) double dividerHeight;                     //@synthesize dividerHeight=_dividerHeight - In the implementation block
@property (assign,nonatomic) double leftEdgeInset;                     //@synthesize leftEdgeInset=_leftEdgeInset - In the implementation block
@property (assign,nonatomic) double rightEdgeInset;                    //@synthesize rightEdgeInset=_rightEdgeInset - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(double)dividerHeight;
-(long long)dividerType;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(double)leftEdgeInset;
-(void)setLeftEdgeInset:(double)arg1 ;
-(double)rightEdgeInset;
-(void)setRightEdgeInset:(double)arg1 ;
-(void)setDividerType:(long long)arg1 ;
-(void)setDividerHeight:(double)arg1 ;
-(void)setInsetColor:(id)arg1 ;
-(void)setColoringWithStyle:(id)arg1 ;
@end

