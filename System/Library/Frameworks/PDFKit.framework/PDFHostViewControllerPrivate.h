/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PDFExtensionProtocol, PDFHostViewControllerDelegate;
#import <PDFKit/PDFKit-Structs.h>
@class NSExtension, UIScrollView, PDFExtensionTopView, PDFPasswordViewController, NSString, PDFPageLabelView, UITapGestureRecognizer, UILongPressGestureRecognizer, PDFPanGestureRecognizer, UIPointerInteraction;

@interface PDFHostViewControllerPrivate : NSObject {

	NSExtension* extension;
	id<PDFExtensionProtocol> extensionProxy;
	UIScrollView* hostScrollView;
	id<PDFHostViewControllerDelegate> hostViewControllerDelegate;
	PDFExtensionTopView* topView;
	PDFPasswordViewController* passwordViewController;
	NSString* password;
	PDFPageLabelView* pageLabelView;
	BOOL isUnlocked;
	long long currentPageIndex;
	long long pageCount;
	CGSize documentViewSize;
	double minScaleFactor;
	double maxScaleFactor;
	BOOL hasSelection;
	CGPoint topLeftSelectionPoint;
	CGPoint bottomRightSelectionPoint;
	UITapGestureRecognizer* tapGestureRecognizer;
	UITapGestureRecognizer* doubleTapGestureRecognizer;
	UILongPressGestureRecognizer* longPressGestureRecognizer;
	PDFPanGestureRecognizer* panGestureRecognizer;
	BOOL recentGestureIsIndirectTouch;
	UIPointerInteraction* pointerInteraction;
	/*^block*/id pdfPointerCompletionHandler;
	CGRect insetBoundsInDocument;
	CGRect scrollViewFrame;
	UIEdgeInsets contentInset;
	UIEdgeInsets pdfSafeAreaInsets;
	double horizontalScaleFactor;
	CGPoint documentViewCenter;
	BOOL pdfViewIsRotating;
	BOOL pdfViewNeedsUpdate;
	BOOL hostScrollViewObserverIsActive;
	/*^block*/id snapshotCompletion;

}
@end
