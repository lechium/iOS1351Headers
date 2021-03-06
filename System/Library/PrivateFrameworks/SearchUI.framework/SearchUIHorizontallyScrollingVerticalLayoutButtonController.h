/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIImageView, SearchUILabel;

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController {

	SearchUIImageView* thumbnailView;
	SearchUILabel* _titleLabel;
	SearchUILabel* _footnoteLabel;

}

@property (nonatomic,retain) SearchUILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SearchUILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(double)spacing;
-(SearchUILabel *)titleLabel;
-(void)setTitleLabel:(SearchUILabel *)arg1 ;
-(SearchUILabel *)footnoteLabel;
-(void)setFootnoteLabel:(SearchUILabel *)arg1 ;
-(id)thumbnailView;
-(void)setThumbnailView:(id)arg1 ;
-(id)setupContentView;
-(void)setCardSectionRowModel:(id)arg1 ;
@end

