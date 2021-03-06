/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUICardSectionView.h>

@class TLKLabel, NUIContainerBoxView;

@interface SearchUITitleCardSectionView : SearchUICardSectionView {

	TLKLabel* _label;
	NUIContainerBoxView* _containerView;

}

@property (nonatomic,retain) TLKLabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NUIContainerBoxView * containerView;              //@synthesize containerView=_containerView - In the implementation block
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(void)setLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)label;
-(NUIContainerBoxView *)containerView;
-(void)setContainerView:(NUIContainerBoxView *)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
@end

