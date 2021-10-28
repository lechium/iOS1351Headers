/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class SKUIRedeem;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController {

	SKUIRedeem* _redeem;
	long long _redeemCategory;

}

@property (nonatomic,retain) SKUIRedeem * redeem;                   //@synthesize redeem=_redeem - In the implementation block
@property (assign,nonatomic) long long redeemCategory;              //@synthesize redeemCategory=_redeemCategory - In the implementation block
+(BOOL)canShowResultsForRedeem:(id)arg1 ;
+(id)redeemResultsControllerForRedeem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithRedeem:(id)arg1 ;
-(void)setRedeemCategory:(long long)arg1 ;
-(void)_doneAction:(id)arg1 ;
-(SKUIRedeem *)redeem;
-(void)setRedeem:(SKUIRedeem *)arg1 ;
-(long long)redeemCategory;
@end
