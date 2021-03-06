/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIReplyActionCellDelegate;
@interface RTTUIReplyActionCell : UITableViewCell {

	id<RTTUIReplyActionCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIReplyActionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<RTTUIReplyActionCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIReplyActionCellDelegate>)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3 ;
@end

