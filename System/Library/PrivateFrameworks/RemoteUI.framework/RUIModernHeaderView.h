/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RemoteUI-Structs.h>
#import <OnBoardingKit/OBHeaderView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface RUIModernHeaderView : OBHeaderView <RUIHeader> {

	UILabel* _headerLabel;
	UILabel* _detailLabel;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UILabel * headerLabel;                              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                              //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initWithTitle:(id)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(double)bottomPadding;
-(double)iconToHeaderLabelPadding;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(double)iconHeight;
-(double)calculateHeight;
@end
