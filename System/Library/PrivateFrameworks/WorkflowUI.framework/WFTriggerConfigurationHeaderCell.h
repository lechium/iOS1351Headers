/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFTriggerConfigurationHeaderCell : UITableViewCell {

	Class _triggerTypeClass;
	UIImageView* _triggerIconView;
	UILabel* _triggerTitleLabel;

}

@property (nonatomic,readonly) UIImageView * triggerIconView;              //@synthesize triggerIconView=_triggerIconView - In the implementation block
@property (nonatomic,readonly) UILabel * triggerTitleLabel;                //@synthesize triggerTitleLabel=_triggerTitleLabel - In the implementation block
@property (nonatomic,retain) Class triggerTypeClass;                       //@synthesize triggerTypeClass=_triggerTypeClass - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateUI;
-(UIImageView *)triggerIconView;
-(void)setTriggerTypeClass:(Class)arg1 ;
-(Class)triggerTypeClass;
-(UILabel *)triggerTitleLabel;
@end
