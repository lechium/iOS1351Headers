/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PDFMarkupMenuViewDelegate;
@class NSDictionary, NSArray, _UIBackdropView, UIImageView;

@interface PDFMarkupMenuViewPrivate : NSObject {

	unsigned long long markupStyle;
	unsigned long long markupNoteStyle;
	id<PDFMarkupMenuViewDelegate> delegate;
	NSDictionary* menuControls;
	NSArray* activeControlKeys;
	double calloutArrowX;
	BOOL calloutArrowPointsUp;
	_UIBackdropView* backgroundView;
	_UIBackdropView* separatorBackgroundView;
	UIImageView* blurMaskView;
	UIImageView* tintMaskView;
	UIImageView* separatorMaskView;

}
@end

