/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIFocusRegionContainer, UICoordinateSpace;
#import <UIKitCore/UIKitCore-Structs.h>
@class _UIFocusGroupMap, UIFocusSystem, _UIFocusSearchInfo, _UIFocusMapSearchInfo;

@interface _UIFocusMap : NSObject {

	BOOL _minimumSearchAreaIsEmpty;
	BOOL _trackingSearchInfo;
	BOOL _needsSearchInfo;
	_UIFocusGroupMap* _focusGroupMap;
	UIFocusSystem* _focusSystem;
	id<_UIFocusRegionContainer> _rootContainer;
	id<UICoordinateSpace> _coordinateSpace;
	_UIFocusSearchInfo* _searchInfo;
	_UIFocusMapSearchInfo* _defaultItemSearchInfo;
	_UIFocusMapSearchInfo* _focusMovementSearchInfo;
	CGRect _minimumSearchArea;

}

@property (getter=_defaultItemSearchContext,nonatomic,readonly) _UIFocusMapSearchInfo * defaultItemSearchInfo;                  //@synthesize defaultItemSearchInfo=_defaultItemSearchInfo - In the implementation block
@property (getter=_focusMovementSearchContext,nonatomic,readonly) _UIFocusMapSearchInfo * focusMovementSearchInfo;              //@synthesize focusMovementSearchInfo=_focusMovementSearchInfo - In the implementation block
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                                                              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,__weak,readonly) id<_UIFocusRegionContainer> rootContainer;                                                //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace;                                                    //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) _UIFocusSearchInfo * searchInfo;                                                                 //@synthesize searchInfo=_searchInfo - In the implementation block
@property (assign,nonatomic) CGRect minimumSearchArea;                                                                          //@synthesize minimumSearchArea=_minimumSearchArea - In the implementation block
-(id)init;
-(id<UICoordinateSpace>)coordinateSpace;
-(UIFocusSystem *)focusSystem;
-(_UIFocusSearchInfo *)searchInfo;
-(id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 ;
-(id)_defaultFocusItemInEnvironment:(id)arg1 limitScopeUsingFocusPreferences:(BOOL)arg2 ;
-(void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2 ;
-(id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2 ;
-(id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ;
-(void)_trackExternalSnapshot:(id)arg1 ;
-(CGRect)minimumSearchArea;
-(void)setMinimumSearchArea:(CGRect)arg1 ;
-(id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 searchInfo:(id)arg3 ;
-(id)_defaultMapSnapshotter;
-(void)_beginTrackingDefaultItemSearchInfoIfNecessary;
-(id)_defaultItemSearchContext;
-(void)_beginTrackingFocusMovementSearchInfoIfNecessary;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 focusedRegion:(id)arg2 ;
-(id)_focusMovementSearchContext;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 ;
-(id)_nextFocusedItemForLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 ;
-(id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 ;
-(id)_focusGroupMap;
-(id)_linearlySortedFocusItemsForItems:(id)arg1 grouping:(BOOL)arg2 ;
-(id)_groupBoundariesForItems:(id)arg1 ;
-(id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1 ;
-(id<_UIFocusRegionContainer>)rootContainer;
-(id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 ;
-(id)_allFocusableItemsInEnvironment:(id)arg1 ;
-(id)_defaultFocusItemInEnvironment:(id)arg1 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg1 ;
-(id)_closestFocusableItemToPoint:(CGPoint)arg1 inRect:(CGRect)arg2 excludingItems:(id)arg3 ;
-(void)_beginTrackingSearches;
-(id)_stopTrackingSearches;
@end

