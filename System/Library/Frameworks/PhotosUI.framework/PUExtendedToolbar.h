/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIToolbar.h>
#import <libobjc.A.dylib/PUToolbarViewModelChangeObserver.h>

@class PUToolbarViewModel, NSArray, UIView, UIToolbar, NSMutableSet, NSString;

@interface PUExtendedToolbar : UIToolbar <PUToolbarViewModelChangeObserver> {

	BOOL __isUpdating;
	BOOL __needsUpdateToolbarItems;
	BOOL __needsUpdateAccessoryView;
	BOOL __needsUpdateAccessoryViewTopOutset;
	BOOL __needsUpdateContainedToolbar;
	BOOL __needsUpdateAccessoryViewContainer;
	PUToolbarViewModel* _toolbarViewModel;
	long long __numberOfNestedChanges;
	NSArray* __toolbarItems;
	UIView* __accessoryView;
	double __containedToolbarHeight;
	double __accessoryViewTopOutset;
	double __minimumBackgroundHeight;
	UIToolbar* __containedToolbar;
	UIView* __accessoryViewContainer;
	NSMutableSet* __accessoryViewContainers;

}

@property (assign,setter=_setNumberOfNestedChanges:,nonatomic) long long _numberOfNestedChanges;                                 //@synthesize _numberOfNestedChanges=__numberOfNestedChanges - In the implementation block
@property (assign,setter=_setUpdating:,nonatomic) BOOL _isUpdating;                                                              //@synthesize _isUpdating=__isUpdating - In the implementation block
@property (assign,setter=_setNeedsUpdateToolbarItems:,nonatomic) BOOL _needsUpdateToolbarItems;                                  //@synthesize _needsUpdateToolbarItems=__needsUpdateToolbarItems - In the implementation block
@property (assign,setter=_setNeedsUpdateAccessoryView:,nonatomic) BOOL _needsUpdateAccessoryView;                                //@synthesize _needsUpdateAccessoryView=__needsUpdateAccessoryView - In the implementation block
@property (assign,setter=_setNeedsUpdateAccessoryViewTopOutset:,nonatomic) BOOL _needsUpdateAccessoryViewTopOutset;              //@synthesize _needsUpdateAccessoryViewTopOutset=__needsUpdateAccessoryViewTopOutset - In the implementation block
@property (assign,setter=_setNeedsUpdateContainedToolbar:,nonatomic) BOOL _needsUpdateContainedToolbar;                          //@synthesize _needsUpdateContainedToolbar=__needsUpdateContainedToolbar - In the implementation block
@property (assign,setter=_setNeedsUpdateAccessoryViewContainer:,nonatomic) BOOL _needsUpdateAccessoryViewContainer;              //@synthesize _needsUpdateAccessoryViewContainer=__needsUpdateAccessoryViewContainer - In the implementation block
@property (setter=_setToolbarItems:,nonatomic,copy) NSArray * _toolbarItems;                                                     //@synthesize _toolbarItems=__toolbarItems - In the implementation block
@property (setter=_setAccessoryView:,nonatomic,retain) UIView * _accessoryView;                                                  //@synthesize _accessoryView=__accessoryView - In the implementation block
@property (assign,setter=_setContainedToolbarHeight:,nonatomic) double _containedToolbarHeight;                                  //@synthesize _containedToolbarHeight=__containedToolbarHeight - In the implementation block
@property (assign,setter=_setAccessoryViewTopOutset:,nonatomic) double _accessoryViewTopOutset;                                  //@synthesize _accessoryViewTopOutset=__accessoryViewTopOutset - In the implementation block
@property (assign,setter=_setMinimumBackgroundHeight:,nonatomic) double _minimumBackgroundHeight;                                //@synthesize _minimumBackgroundHeight=__minimumBackgroundHeight - In the implementation block
@property (setter=_setContainedToolbar:,nonatomic,retain) UIToolbar * _containedToolbar;                                         //@synthesize _containedToolbar=__containedToolbar - In the implementation block
@property (setter=_setAccessoryViewContainer:,nonatomic,retain) UIView * _accessoryViewContainer;                                //@synthesize _accessoryViewContainer=__accessoryViewContainer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _accessoryViewContainers;                                                          //@synthesize _accessoryViewContainers=__accessoryViewContainers - In the implementation block
@property (nonatomic,retain) PUToolbarViewModel * toolbarViewModel;                                                              //@synthesize toolbarViewModel=_toolbarViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_setAccessoryView:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(UIView *)_accessoryView;
-(BOOL)_shouldStretchDuringCrossfadeTransition;
-(NSArray *)_toolbarItems;
-(BOOL)_needsUpdate;
-(BOOL)_isUpdating;
-(void)_setNeedsUpdate;
-(UIView *)_accessoryViewContainer;
-(void)_invalidateSize;
-(void)_invalidateToolbarItems;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_assertInsideChangeBlock;
-(void)_assertInsideUpdate;
-(void)_setUpdating:(BOOL)arg1 ;
-(void)setToolbarViewModel:(PUToolbarViewModel *)arg1 ;
-(void)setToolbarViewModel:(id)arg1 withAnimatorBlock:(/*^block*/id)arg2 ;
-(double)_containedToolbarHeight;
-(void)_getContainedToolbarFrame:(CGRect*)arg1 accessoryViewContainerFrame:(CGRect*)arg2 forBounds:(CGRect)arg3 ;
-(void)_setContainedToolbar:(id)arg1 ;
-(void)_setAccessoryViewContainer:(id)arg1 ;
-(void)_performChanges:(/*^block*/id)arg1 withAnimatorBlock:(/*^block*/id)arg2 ;
-(void)_updateIfNeededWithAnimatorBlock:(/*^block*/id)arg1 ;
-(void)_updateToolbarItemsIfNeeded;
-(void)_setToolbarItems:(id)arg1 ;
-(void)_invalidateAccessoryView;
-(void)_updateAccessoryViewIfNeeded;
-(void)_invalidateAccessoryViewTopOutset;
-(void)_updateAccessoryTopOutsetViewIfNeeded;
-(void)_setAccessoryViewTopOutset:(double)arg1 ;
-(void)_invalidateContainedToolbar;
-(void)_invalidateAccessoryViewContainer;
-(void)_updateViewsIfNeededWithAnimatorBlock:(/*^block*/id)arg1 ;
-(PUToolbarViewModel *)toolbarViewModel;
-(long long)_numberOfNestedChanges;
-(void)_setNumberOfNestedChanges:(long long)arg1 ;
-(BOOL)_needsUpdateToolbarItems;
-(void)_setNeedsUpdateToolbarItems:(BOOL)arg1 ;
-(BOOL)_needsUpdateAccessoryView;
-(void)_setNeedsUpdateAccessoryView:(BOOL)arg1 ;
-(BOOL)_needsUpdateAccessoryViewTopOutset;
-(void)_setNeedsUpdateAccessoryViewTopOutset:(BOOL)arg1 ;
-(BOOL)_needsUpdateContainedToolbar;
-(void)_setNeedsUpdateContainedToolbar:(BOOL)arg1 ;
-(BOOL)_needsUpdateAccessoryViewContainer;
-(void)_setNeedsUpdateAccessoryViewContainer:(BOOL)arg1 ;
-(void)_setContainedToolbarHeight:(double)arg1 ;
-(double)_accessoryViewTopOutset;
-(double)_minimumBackgroundHeight;
-(void)_setMinimumBackgroundHeight:(double)arg1 ;
-(UIToolbar *)_containedToolbar;
-(NSMutableSet *)_accessoryViewContainers;
@end
