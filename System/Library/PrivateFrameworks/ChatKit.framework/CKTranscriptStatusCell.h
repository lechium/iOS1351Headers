/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, NSAttributedString;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell {

	char _buttonAlignmentRelativeToContent;
	UIButton* _statusButton;
	double _prevBalloonWidth;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * statusButton;                              //@synthesize statusButton=_statusButton - In the implementation block
@property (assign,nonatomic) char buttonAlignmentRelativeToContent;                //@synthesize buttonAlignmentRelativeToContent=_buttonAlignmentRelativeToContent - In the implementation block
@property (assign,nonatomic) double prevBalloonWidth;                              //@synthesize prevBalloonWidth=_prevBalloonWidth - In the implementation block
+(void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(id)statusButton;
+(void)zoomAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(UIButton *)statusButton;
-(void)setPrevBalloonWidth:(double)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setButtonAlignmentRelativeToContent:(char)arg1 ;
-(NSAttributedString *)attributedButtonText;
-(void)setStatusButton:(UIButton *)arg1 ;
-(double)prevBalloonWidth;
-(char)buttonAlignmentRelativeToContent;
@end

