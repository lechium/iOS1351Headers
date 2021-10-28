/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class LabelSequenceView, Stock;

@interface ChartTitleLabel : UIView {

	LabelSequenceView* _leftView;
	LabelSequenceView* _rightView;
	double _width;
	Stock* _stock;
	Stock* _deferredStock;

}
-(id)init;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)prepareStringsWithStock:(id)arg1 width:(double)arg2 ;
-(void)setLabelsHidden:(BOOL)arg1 ;
-(void)prepareStringsForDeferredStockIfNeeded;
@end
