/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlAuxiliaryView.h>

@class NSNumber, NSArray, UIStackView, UILongPressGestureRecognizer, NSString;

@interface HUQuickControlSegmentedControl : UIView <HUQuickControlAuxiliaryView> {

	/*^block*/id _selectionChangeHandler;
	NSNumber* _selectedSegmentIndex;
	NSArray* _segments;
	UIStackView* _segmentStackView;
	NSArray* _segmentViews;
	UILongPressGestureRecognizer* _gestureRecognizer;
	NSNumber* _trackingSegmentIndex;

}

@property (nonatomic,retain) UIStackView * segmentStackView;                                //@synthesize segmentStackView=_segmentStackView - In the implementation block
@property (nonatomic,retain) NSArray * segmentViews;                                        //@synthesize segmentViews=_segmentViews - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) NSNumber * trackingSegmentIndex;                               //@synthesize trackingSegmentIndex=_trackingSegmentIndex - In the implementation block
@property (nonatomic,copy) id selectionChangeHandler;                                       //@synthesize selectionChangeHandler=_selectionChangeHandler - In the implementation block
@property (nonatomic,retain) NSNumber * selectedSegmentIndex;                               //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                                     //@synthesize segments=_segments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasCenteredContent; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSNumber *)selectedSegmentIndex;
-(void)setSelectedSegmentIndex:(NSNumber *)arg1 ;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(NSArray *)segments;
-(void)_setupConstraints;
-(void)_handleGesture:(id)arg1 ;
-(void)setSegmentViews:(NSArray *)arg1 ;
-(void)_updateSegmentViewsForUILayoutDirection;
-(NSArray *)segmentViews;
-(void)setSegmentStackView:(UIStackView *)arg1 ;
-(UIStackView *)segmentStackView;
-(void)_updateSegmentSelectionStateAnimated:(BOOL)arg1 ;
-(void)setTrackingSegmentIndex:(NSNumber *)arg1 ;
-(id)selectionChangeHandler;
-(NSNumber *)trackingSegmentIndex;
-(BOOL)preferVerticalLayout;
-(void)ensureCorrectHeaderViewOrientation;
-(BOOL)hasCenteredContent;
-(id)initWithSegments:(id)arg1 ;
-(void)setSelectionChangeHandler:(id)arg1 ;
@end

