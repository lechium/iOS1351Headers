/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject {

	AKPageController* _pageController;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(id)initWithPageController:(id)arg1 ;
-(void)performUndo:(id)arg1 ;
@end
