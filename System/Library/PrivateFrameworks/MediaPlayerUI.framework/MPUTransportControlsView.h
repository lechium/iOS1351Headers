/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate;
@class NSMutableDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSArray;

@interface MPUTransportControlsView : UIView {

	NSMutableDictionary* _classByReuseIdentifier;
	UIEdgeInsets _insetsForExpandingButtons;
	BOOL _sortedVisibleControlsWithBlanksNeedsReload;
	BOOL _sortByGroup;
	NSMutableDictionary* _recycledButtonsByReuseIdentifier;
	NSMapTable* _reuseIdentifierByButton;
	NSMutableArray* _sortedVisibleControlsWithBlanks;
	NSMutableSet* _typesOfControlsToReload;
	NSMutableDictionary* _visibleButtonByControlType;
	BOOL _usesLegacyLayoutHeuristics;
	NSArray* _availableTransportControls;
	id<MPUTransportControlsViewDataSource> _dataSource;
	id<MPUTransportControlsViewDelegate> _delegate;
	id<MPUTransportControlsViewLayoutDelegate> _layoutDelegate;
	unsigned long long _minimumNumberOfTransportButtonsForLayout;

}

@property (assign,setter=_setInsetsForExpandingButtons:,getter=_insetsForExpandingButtons,nonatomic) UIEdgeInsets insetsForExpandingButtons; 
@property (assign,setter=_setUsesLegacyLayoutHeuristics:,getter=_usesLegacyLayoutHeuristics,nonatomic) BOOL usesLegacyLayoutHeuristics;                   //@synthesize usesLegacyLayoutHeuristics=_usesLegacyLayoutHeuristics - In the implementation block
@property (nonatomic,copy) NSArray * availableTransportControls;                                                                                          //@synthesize availableTransportControls=_availableTransportControls - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewDataSource> dataSource;                                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewDelegate> delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewLayoutDelegate> layoutDelegate;                                                            //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfTransportButtonsForLayout;                                                                 //@synthesize minimumNumberOfTransportButtonsForLayout=_minimumNumberOfTransportButtonsForLayout - In the implementation block
@property (assign,nonatomic) BOOL sortByGroup;                                                                                                            //@synthesize sortByGroup=_sortByGroup - In the implementation block
+(id)defaultTransportControls;
-(void)dealloc;
-(id<MPUTransportControlsViewDelegate>)delegate;
-(void)setDelegate:(id<MPUTransportControlsViewDelegate>)arg1 ;
-(id<MPUTransportControlsViewDataSource>)dataSource;
-(void)setDataSource:(id<MPUTransportControlsViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setLayoutDelegate:(id<MPUTransportControlsViewLayoutDelegate>)arg1 ;
-(id<MPUTransportControlsViewLayoutDelegate>)layoutDelegate;
-(void)setAvailableTransportControls:(NSArray *)arg1 ;
-(void)_willRemoveTransportButton:(id)arg1 ;
-(void)_recycleTransportButtonWithControlType:(long long)arg1 ;
-(void)_reloadSortedVisibleControlsWithBlanks;
-(id)_typesOfVisibleControls;
-(id)_visibleTransportControlAtIndex:(unsigned long long)arg1 ;
-(void)_configureTransportButton:(id)arg1 forTransportControl:(id)arg2 ;
-(CGSize)_transportControlButtonSize;
-(CGRect)_adjustedFrameOfButtonForTransportControl:(id)arg1 proposedFrame:(CGRect)arg2 ;
-(id)_typesFromTransportControls:(id)arg1 ;
-(void)reloadTransportButtonWithControlType:(long long)arg1 ;
-(id)_createTransportButtonWithReuseIdentifier:(id)arg1 ;
-(void)_transportControlLongPressBegan:(id)arg1 ;
-(void)_transportControlLongPressEnded:(id)arg1 ;
-(void)_transportControlTapped:(id)arg1 ;
-(void)_transportControlTouchEntered:(id)arg1 ;
-(void)_transportControlTouchExited:(id)arg1 ;
-(id)_availableTransportControlsForGroup:(int)arg1 ;
-(id)availableTransportControlWithType:(long long)arg1 ;
-(void)setSortByGroup:(BOOL)arg1 ;
-(id)dequeueReusableTransportButtonWithReuseIdentifier:(id)arg1 ;
-(void)registerClass:(Class)arg1 forTransportButtonWithReuseIdentifier:(id)arg2 ;
-(id)_transportButtonForControlType:(long long)arg1 ;
-(void)setMinimumNumberOfTransportButtonsForLayout:(unsigned long long)arg1 ;
-(UIEdgeInsets)_insetsForExpandingButtons;
-(void)_setInsetsForExpandingButtons:(UIEdgeInsets)arg1 ;
-(void)_setUsesLegacyLayoutHeuristics:(BOOL)arg1 ;
-(NSArray *)availableTransportControls;
-(unsigned long long)minimumNumberOfTransportButtonsForLayout;
-(BOOL)sortByGroup;
-(BOOL)_usesLegacyLayoutHeuristics;
@end

