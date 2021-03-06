/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class _MKRightImageButton, NSLayoutConstraint;

@interface MKPlaceInfoSuggestAnEditRowView : MKPlaceSectionRowView {

	_MKRightImageButton* _suggestAnEditButton;
	NSLayoutConstraint* _topToTitleVerticalConstraint;
	NSLayoutConstraint* _titleToBottomVerticalConstraint;
	/*^block*/id _selectionBlock;

}

@property (nonatomic,copy) id selectionBlock;              //@synthesize selectionBlock=_selectionBlock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateConstraints;
-(void)_contentSizeDidChange;
-(void)_updateFonts;
-(void)_setupSubviews;
-(void)_suggestAnEditButtonPressed;
-(id)selectionBlock;
-(void)setSelectionBlock:(id)arg1 ;
@end

