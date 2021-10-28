/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class WFConfiguredTriggerRecord, WFTrigger;

@interface WFTriggerSummaryCell : UITableViewCell {

	WFConfiguredTriggerRecord* _triggerRecord;
	WFTrigger* _trigger;

}

@property (nonatomic,retain) WFConfiguredTriggerRecord * triggerRecord;              //@synthesize triggerRecord=_triggerRecord - In the implementation block
@property (nonatomic,retain) WFTrigger * trigger;                                    //@synthesize trigger=_trigger - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFTrigger *)trigger;
-(void)setTrigger:(WFTrigger *)arg1 ;
-(void)updateUI;
-(WFConfiguredTriggerRecord *)triggerRecord;
-(void)setTriggerRecord:(WFConfiguredTriggerRecord *)arg1 ;
@end
