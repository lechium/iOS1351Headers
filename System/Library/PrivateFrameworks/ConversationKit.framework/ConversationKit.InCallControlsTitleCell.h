/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class _TtC15ConversationKit19InCallControlButton;

@interface ConversationKit.InCallControlsTitleCell : UITableViewCell {

	 summaryLabel;
	 titleLabel;
	 messagesButton;
	 isAccessiblityConstraintsEnabled;
	 subtitleLabelFirstBaselineLayoutConstraint;
	 titleLabelFirstBaselineLayoutConstraint;
	 titleLabelLastBaselineLayoutConstraint;
	 titleLabelFirstBaselineTopLayoutConstraint;
	 titleLabelLastBaselineBottomLayoutConstraint;
	 trailingTextLayoutGuide;
	 trailingTextShowingButtonLayoutConstraint;
	 trailingTextHidingButtonLayoutConstraint;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit19InCallControlButton * messagesButton; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)didTapMessagesButton:(id)arg1 ;
-(_TtC15ConversationKit19InCallControlButton *)messagesButton;
@end
