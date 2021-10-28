/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TemplateKit/TLKStackView.h>

@class TLKLabel, NSMutableArray;

@interface TLKContentsView : TLKStackView {

	TLKLabel* _titleLabel;
	NSMutableArray* _detailsLabels;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * detailsLabels;              //@synthesize detailsLabels=_detailsLabels - In the implementation block
+(id)detailsLabel;
-(id)init;
-(TLKLabel *)titleLabel;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(NSMutableArray *)detailsLabels;
-(void)updateWithTitle:(id)arg1 contents:(id)arg2 ;
-(void)setDetailsLabels:(NSMutableArray *)arg1 ;
@end
