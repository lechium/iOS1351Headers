/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UILabel, NSAttributedString;

@interface CKTranscriptLabelCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UILabel* _label;

}

@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) BOOL wantsContactImageLayout;                   //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
+(id)label;
-(void)setOrientation:(char)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)layoutSubviewsForContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
@end
