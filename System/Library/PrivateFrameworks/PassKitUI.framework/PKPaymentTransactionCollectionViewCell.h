/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardPaymentTransactionItem, PKPaymentTransactionGroupItem, PKPaymentTransactionView;

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell {

	PKDashboardPaymentTransactionItem* _item;
	PKPaymentTransactionGroupItem* _groupItem;
	PKPaymentTransactionView* _transactionView;

}

@property (nonatomic,retain) PKDashboardPaymentTransactionItem * item;                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroupItem * groupItem;                 //@synthesize groupItem=_groupItem - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
-(PKDashboardPaymentTransactionItem *)item;
-(void)setItem:(PKDashboardPaymentTransactionItem *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setGroupItem:(PKPaymentTransactionGroupItem *)arg1 ;
-(PKPaymentTransactionView *)transactionView;
-(PKPaymentTransactionGroupItem *)groupItem;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(double)maxWidthForTransactionCellInWidth:(double)arg1 ;
@end
