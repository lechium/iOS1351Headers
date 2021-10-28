/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@class CTCellularPlanPendingTransfer, CTCellularPlanManager, UIButton, UILabel;

@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell {

	CTCellularPlanPendingTransfer* _planPendingTransfer;
	CTCellularPlanManager* _cellularPlanManager;
	UIButton* _cancelButton;
	UILabel* _rightMargin;
	UILabel* _requestSentLabel;

}

@property (nonatomic,retain) CTCellularPlanPendingTransfer * planPendingTransfer;              //@synthesize planPendingTransfer=_planPendingTransfer - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;                      //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * rightMargin;                                            //@synthesize rightMargin=_rightMargin - In the implementation block
@property (nonatomic,retain) UILabel * requestSentLabel;                                       //@synthesize requestSentLabel=_requestSentLabel - In the implementation block
-(void)setRightMargin:(UILabel *)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UILabel *)rightMargin;
-(CTCellularPlanManager *)cellularPlanManager;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)cancelPressed;
-(CTCellularPlanPendingTransfer *)planPendingTransfer;
-(void)setPlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 ;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(UILabel *)requestSentLabel;
-(void)setRequestSentLabel:(UILabel *)arg1 ;
@end
