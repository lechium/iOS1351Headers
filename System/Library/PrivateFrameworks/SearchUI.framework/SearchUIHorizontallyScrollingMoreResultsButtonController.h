/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUIHorizontallyScrollingButtonController.h>

@class TLKProminenceView, TLKTextButton;

@interface SearchUIHorizontallyScrollingMoreResultsButtonController : SearchUIHorizontallyScrollingButtonController {

	TLKProminenceView* _backgroundView;

}

@property (retain) TLKTextButton * button; 
@property (retain) TLKProminenceView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)init;
-(TLKProminenceView *)backgroundView;
-(void)setBackgroundView:(TLKProminenceView *)arg1 ;
-(void)setCardSectionRowModel:(id)arg1 ;
@end
