/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel;

@interface CKAppManagerAppTableViewHeaderView : UITableViewHeaderFooterView {

	UILabel* _headerLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
+(id)identifier;
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
@end
