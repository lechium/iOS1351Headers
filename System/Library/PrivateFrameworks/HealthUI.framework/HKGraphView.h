/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/HKSeriesDelegate.h>
#import <libobjc.A.dylib/HKGraphRenderDelegate.h>
#import <libobjc.A.dylib/HKMultiTouchPressGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HKGraphTileDrawingDelegate.h>
#import <libobjc.A.dylib/HKGraphSeriesOverlayDelegate.h>
#import <libobjc.A.dylib/HKScrollPerformanceTestable.h>
#import <libobjc.A.dylib/HKInteractiveChartRangeProvider.h>

@protocol HKGraphRenderer, HKGraphViewDelegate;
@class HKValueRange, NSMutableArray, HKPropertyAnimationApplier, UIImage, UIView, UIScrollView, HKBorderLineView, HKAxis, UIColor, HKGraphViewSelectionStyle, HKMultiTouchPressGestureRecognizer, NSSet, HKOutsideViewTapDetector, NSMutableDictionary, _HKGraphViewOverlayView, NSMapTable, NSTimer, NSArray, NSString;

@interface HKGraphView : UIView <UIScrollViewDelegate, HKSeriesDelegate, HKGraphRenderDelegate, HKMultiTouchPressGestureRecognizerDelegate, HKGraphTileDrawingDelegate, HKGraphSeriesOverlayDelegate, HKScrollPerformanceTestable, HKInteractiveChartRangeProvider> {

	NSMutableArray* _seriesGroupRows;
	BOOL _needsUpdateGraphViewConfiguration;
	HKPropertyAnimationApplier* _animationApplier;
	BOOL _shouldInformDelegateOfUpdates;
	BOOL _shouldListenToScrollViewDelegate;
	HKValueRange* _chartableValueRange;
	UIImage* _topFeatheringImage;
	UIImage* _rightFeatheringImage;
	UIImage* _bottomFeatheringImage;
	UIImage* _leftFeatheringImage;
	UIView*<HKGraphRenderer> _renderView;
	UIScrollView* _scrollView;
	HKBorderLineView* _leftMarginView;
	UIView*<HKGraphRenderer> _yAxisLabelContent;
	double _yAxisLabelMinimumWidth;
	BOOL _subviewsHaveBeenLaidOut;
	BOOL _disableXAxis;
	BOOL _disableScrolling;
	BOOL _disableSelection;
	BOOL _multiSeriesSelection;
	BOOL _contentWidthFromTimeScope;
	BOOL _enableStickySelection;
	BOOL _enableZoomInGesture;
	BOOL _enableInteractiveSelectionLine;
	BOOL _tilingDisabled;
	BOOL _contentOffsetIsSet;
	BOOL _tilesHidden;
	BOOL _tileScrollingOverride;
	BOOL _tilesTransientDisabled;
	BOOL _tilesWaitingForInitialRender;
	BOOL _measuringStartupTime;
	id<HKGraphViewDelegate> _delegate;
	HKAxis* _xAxis;
	double _xAxisSpace;
	UIColor* _outlineColor;
	UIColor* _topMarginColor;
	unsigned long long _outlineOptions;
	unsigned long long _featheringOptions;
	HKGraphViewSelectionStyle* _selectionStyle;
	long long _xAxisDateZoom;
	HKValueRange* _effectiveAxisRange;
	HKValueRange* _actualAxisRange;
	double _hardLeftMarginWidth;
	double _virtualLeftMarginWidth;
	double _virtualRightMarginWidth;
	long long _virtualLeftMarginStyle;
	long long _virtualRightMarginStyle;
	HKValueRange* _actualVisibleRange;
	HKValueRange* _effectiveVisibleRangeCadence;
	HKValueRange* _effectiveVisibleRangeActive;
	long long _minimumDateZoom;
	long long _maximumDateZoom;
	long long _scrollingOptions;
	HKMultiTouchPressGestureRecognizer* _multiTouchGestureRecognizer;
	double _zoomScale;
	UIView* _detailView;
	HKValueRange* _destinationEffectiveVisibleRangeActive;
	NSSet* _yAxisAccessoryViews;
	HKOutsideViewTapDetector* _outsideViewTapDetector;
	long long _tileColumns;
	double _tileWidthInPoints;
	long long _tileFirstColumn;
	long long _tileLastColumn;
	long long _tileColumnHysteresis;
	NSMutableDictionary* _tilesByColumnNumber;
	double _tileZoomScaleOverride;
	/*^block*/id _tileMarkDirtyCompletion;
	long long _tileInitialRedrawCount;
	double _lastSingleSelectionXValue;
	_HKGraphViewOverlayView* _overlayView;
	long long _previousOverlayType;
	NSMapTable* _overlayInteractiveViews;
	double _startTime;
	double _lastEndTime;
	NSTimer* _startupTimer;
	CGPoint _contentOffset;
	CGPoint _tileContentOffsetOverride;
	UIEdgeInsets _axisInset;

}

@property (assign,nonatomic) double zoomScale;                                                                //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                                                           //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) BOOL contentOffsetIsSet;                                                         //@synthesize contentOffsetIsSet=_contentOffsetIsSet - In the implementation block
@property (nonatomic,retain) UIView * detailView;                                                             //@synthesize detailView=_detailView - In the implementation block
@property (nonatomic,retain) HKValueRange * destinationEffectiveVisibleRangeActive;                           //@synthesize destinationEffectiveVisibleRangeActive=_destinationEffectiveVisibleRangeActive - In the implementation block
@property (nonatomic,retain) NSSet * yAxisAccessoryViews;                                                     //@synthesize yAxisAccessoryViews=_yAxisAccessoryViews - In the implementation block
@property (nonatomic,retain) HKOutsideViewTapDetector * outsideViewTapDetector;                               //@synthesize outsideViewTapDetector=_outsideViewTapDetector - In the implementation block
@property (assign,nonatomic) long long tileColumns;                                                           //@synthesize tileColumns=_tileColumns - In the implementation block
@property (assign,nonatomic) double tileWidthInPoints;                                                        //@synthesize tileWidthInPoints=_tileWidthInPoints - In the implementation block
@property (assign,nonatomic) long long tileFirstColumn;                                                       //@synthesize tileFirstColumn=_tileFirstColumn - In the implementation block
@property (assign,nonatomic) long long tileLastColumn;                                                        //@synthesize tileLastColumn=_tileLastColumn - In the implementation block
@property (assign,nonatomic) long long tileColumnHysteresis;                                                  //@synthesize tileColumnHysteresis=_tileColumnHysteresis - In the implementation block
@property (assign,nonatomic) BOOL tilesHidden;                                                                //@synthesize tilesHidden=_tilesHidden - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tilesByColumnNumber;                                       //@synthesize tilesByColumnNumber=_tilesByColumnNumber - In the implementation block
@property (assign,nonatomic) BOOL tileScrollingOverride;                                                      //@synthesize tileScrollingOverride=_tileScrollingOverride - In the implementation block
@property (assign,nonatomic) CGPoint tileContentOffsetOverride;                                               //@synthesize tileContentOffsetOverride=_tileContentOffsetOverride - In the implementation block
@property (assign,nonatomic) double tileZoomScaleOverride;                                                    //@synthesize tileZoomScaleOverride=_tileZoomScaleOverride - In the implementation block
@property (nonatomic,copy) id tileMarkDirtyCompletion;                                                        //@synthesize tileMarkDirtyCompletion=_tileMarkDirtyCompletion - In the implementation block
@property (assign,nonatomic) BOOL tilesTransientDisabled;                                                     //@synthesize tilesTransientDisabled=_tilesTransientDisabled - In the implementation block
@property (assign,nonatomic) BOOL tilesWaitingForInitialRender;                                               //@synthesize tilesWaitingForInitialRender=_tilesWaitingForInitialRender - In the implementation block
@property (assign,nonatomic) long long tileInitialRedrawCount;                                                //@synthesize tileInitialRedrawCount=_tileInitialRedrawCount - In the implementation block
@property (assign,nonatomic) double lastSingleSelectionXValue;                                                //@synthesize lastSingleSelectionXValue=_lastSingleSelectionXValue - In the implementation block
@property (nonatomic,retain) _HKGraphViewOverlayView * overlayView;                                           //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) long long previousOverlayType;                                                   //@synthesize previousOverlayType=_previousOverlayType - In the implementation block
@property (nonatomic,retain) NSMapTable * overlayInteractiveViews;                                            //@synthesize overlayInteractiveViews=_overlayInteractiveViews - In the implementation block
@property (assign,nonatomic) BOOL measuringStartupTime;                                                       //@synthesize measuringStartupTime=_measuringStartupTime - In the implementation block
@property (assign,nonatomic) double startTime;                                                                //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastEndTime;                                                              //@synthesize lastEndTime=_lastEndTime - In the implementation block
@property (nonatomic,retain) NSTimer * startupTimer;                                                          //@synthesize startupTimer=_startupTimer - In the implementation block
@property (nonatomic,readonly) NSArray * allSeries; 
@property (assign,nonatomic,__weak) id<HKGraphViewDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) HKAxis * xAxis;                                                                    //@synthesize xAxis=_xAxis - In the implementation block
@property (assign,nonatomic) double xAxisSpace;                                                               //@synthesize xAxisSpace=_xAxisSpace - In the implementation block
@property (assign,nonatomic) BOOL disableXAxis;                                                               //@synthesize disableXAxis=_disableXAxis - In the implementation block
@property (assign,nonatomic) UIEdgeInsets axisInset;                                                          //@synthesize axisInset=_axisInset - In the implementation block
@property (nonatomic,copy) UIColor * outlineColor;                                                            //@synthesize outlineColor=_outlineColor - In the implementation block
@property (nonatomic,copy) UIColor * topMarginColor;                                                          //@synthesize topMarginColor=_topMarginColor - In the implementation block
@property (assign,nonatomic) unsigned long long outlineOptions;                                               //@synthesize outlineOptions=_outlineOptions - In the implementation block
@property (assign,nonatomic) unsigned long long featheringOptions;                                            //@synthesize featheringOptions=_featheringOptions - In the implementation block
@property (assign,nonatomic) BOOL disableScrolling;                                                           //@synthesize disableScrolling=_disableScrolling - In the implementation block
@property (assign,nonatomic) BOOL disableSelection;                                                           //@synthesize disableSelection=_disableSelection - In the implementation block
@property (assign,nonatomic) BOOL multiSeriesSelection;                                                       //@synthesize multiSeriesSelection=_multiSeriesSelection - In the implementation block
@property (nonatomic,retain) HKGraphViewSelectionStyle * selectionStyle;                                      //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,readonly) long long xAxisDateZoom;                                                       //@synthesize xAxisDateZoom=_xAxisDateZoom - In the implementation block
@property (nonatomic,readonly) HKValueRange * effectiveAxisRange;                                             //@synthesize effectiveAxisRange=_effectiveAxisRange - In the implementation block
@property (nonatomic,readonly) HKValueRange * actualAxisRange;                                                //@synthesize actualAxisRange=_actualAxisRange - In the implementation block
@property (nonatomic,retain) HKValueRange * chartableValueRange; 
@property (assign,nonatomic) double hardLeftMarginWidth;                                                      //@synthesize hardLeftMarginWidth=_hardLeftMarginWidth - In the implementation block
@property (assign,nonatomic) double virtualLeftMarginWidth;                                                   //@synthesize virtualLeftMarginWidth=_virtualLeftMarginWidth - In the implementation block
@property (assign,nonatomic) double virtualRightMarginWidth;                                                  //@synthesize virtualRightMarginWidth=_virtualRightMarginWidth - In the implementation block
@property (assign,nonatomic) long long virtualLeftMarginStyle;                                                //@synthesize virtualLeftMarginStyle=_virtualLeftMarginStyle - In the implementation block
@property (assign,nonatomic) long long virtualRightMarginStyle;                                               //@synthesize virtualRightMarginStyle=_virtualRightMarginStyle - In the implementation block
@property (nonatomic,readonly) HKValueRange * actualVisibleRange;                                             //@synthesize actualVisibleRange=_actualVisibleRange - In the implementation block
@property (nonatomic,readonly) HKValueRange * effectiveVisibleRangeCadence;                                   //@synthesize effectiveVisibleRangeCadence=_effectiveVisibleRangeCadence - In the implementation block
@property (nonatomic,readonly) HKValueRange * effectiveVisibleRangeActive;                                    //@synthesize effectiveVisibleRangeActive=_effectiveVisibleRangeActive - In the implementation block
@property (assign,nonatomic) long long minimumDateZoom;                                                       //@synthesize minimumDateZoom=_minimumDateZoom - In the implementation block
@property (assign,nonatomic) long long maximumDateZoom;                                                       //@synthesize maximumDateZoom=_maximumDateZoom - In the implementation block
@property (assign,nonatomic) long long scrollingOptions;                                                      //@synthesize scrollingOptions=_scrollingOptions - In the implementation block
@property (assign,nonatomic) BOOL contentWidthFromTimeScope;                                                  //@synthesize contentWidthFromTimeScope=_contentWidthFromTimeScope - In the implementation block
@property (assign,nonatomic) BOOL enableStickySelection;                                                      //@synthesize enableStickySelection=_enableStickySelection - In the implementation block
@property (nonatomic,readonly) HKMultiTouchPressGestureRecognizer * multiTouchGestureRecognizer;              //@synthesize multiTouchGestureRecognizer=_multiTouchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) double yAxisWidth; 
@property (nonatomic,readonly) CGRect leftMarginViewRect; 
@property (assign,nonatomic) BOOL enableZoomInGesture;                                                        //@synthesize enableZoomInGesture=_enableZoomInGesture - In the implementation block
@property (nonatomic,readonly) BOOL isScrollViewDecelerating; 
@property (assign,nonatomic) BOOL enableInteractiveSelectionLine;                                             //@synthesize enableInteractiveSelectionLine=_enableInteractiveSelectionLine - In the implementation block
@property (assign,nonatomic) BOOL tilingDisabled;                                                             //@synthesize tilingDisabled=_tilingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_rangeFromModelCoordinateMin:(double)arg1 max:(double)arg2 axis:(id)arg3 ;
+(double)_modelCoordinateSpanForRange:(id)arg1 axis:(id)arg2 ;
-(id<HKGraphViewDelegate>)delegate;
-(void)setDelegate:(id<HKGraphViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(CGPoint)contentOffset;
-(void)didMoveToWindow;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(HKGraphViewSelectionStyle *)selectionStyle;
-(void)setSelectionStyle:(HKGraphViewSelectionStyle *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setOverlayView:(_HKGraphViewOverlayView *)arg1 ;
-(double)_maximumZoomScale;
-(double)_contentWidth;
-(void)setZoomScale:(double)arg1 ;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 animated:(BOOL)arg2 ;
-(_HKGraphViewOverlayView *)overlayView;
-(HKAxis *)xAxis;
-(void)_updateScene;
-(UIColor *)outlineColor;
-(void)setOutlineColor:(UIColor *)arg1 ;
-(UIView *)detailView;
-(void)setDetailView:(UIView *)arg1 ;
-(void)_notifyDelegateOfSizeChange;
-(void)setXAxis:(HKAxis *)arg1 ;
-(void)setRenderView:(id)arg1 ;
-(NSTimer *)startupTimer;
-(id)primarySeries;
-(HKValueRange *)actualVisibleRange;
-(void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4 ;
-(void)setEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3 ;
-(NSArray *)allSeries;
-(void)setAxesToShowSimultaneously:(id)arg1 stackOffset:(long long)arg2 ;
-(HKValueRange *)effectiveAxisRange;
-(void)setEffectiveVisibleRangeActive:(id)arg1 animated:(BOOL)arg2 ;
-(void)enumerateVisibleCoordinatesForSeries:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)gestureWillBeginWithRecognizer:(id)arg1 ;
-(void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(CGContextRef)arg2 chartRect:(CGRect)arg3 ;
-(void)setDisableXAxis:(BOOL)arg1 ;
-(void)setDisableSelection:(BOOL)arg1 ;
-(void)setDisableScrolling:(BOOL)arg1 ;
-(BOOL)seriesDrawingDuringTiling;
-(CGRect)screenRectForSeries:(id)arg1 ;
-(void)autoscaleStateChangedForSeries:(id)arg1 ;
-(UIEdgeInsets)virtualMarginInsets;
-(HKValueRange *)chartableValueRange;
-(void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(BOOL)arg2 ;
-(HKValueRange *)effectiveVisibleRangeActive;
-(HKValueRange *)effectiveVisibleRangeCadence;
-(BOOL)seriesDrawingDuringScrolling;
-(BOOL)seriesDrawingDuringAutoscale;
-(void)setMultiSeriesSelection:(BOOL)arg1 ;
-(void)setAxisInset:(UIEdgeInsets)arg1 ;
-(void)_addTapGestureRecognizerForTapOnView:(id)arg1 ;
-(void)_loadScrollView;
-(void)_loadFeatheringImages;
-(id)_defaultXAxisValueRange;
-(void)setHardLeftMarginWidth:(double)arg1 ;
-(void)setPreviousOverlayType:(long long)arg1 ;
-(void)setOverlayInteractiveViews:(NSMapTable *)arg1 ;
-(BOOL)_measureStartupFlagFromEnvironment;
-(void)resetAndRedraw;
-(void)_reconfigureScrollingTiles;
-(void)setNeedsReloadSeries;
-(void)_walkAllSeries:(/*^block*/id)arg1 ;
-(BOOL)_anySeriesAnimatingDuringAutoscale;
-(void)_setNeedsUpdateGraphViewConfiguration;
-(void)_notifyDelegateOfYAxisWidth:(double)arg1 toWidth:(double)arg2 ;
-(double)_detailViewWidth;
-(CGRect)_scrollingAreaRect;
-(UIEdgeInsets)_dataAreaInsets;
-(void)_notifyDelegateOfVisibleValueRange:(id)arg1 changeContext:(long long)arg2 ;
-(void)_removeSelectionRecognizerFromView:(id)arg1 ;
-(void)_addSelectionRecognizerToView:(id)arg1 ;
-(void)_addTapGestureRecognizerForTogglingStickyToView:(id)arg1 ;
-(CGRect)leftMarginViewRect;
-(CGRect)_verticalAxisRect;
-(CGRect)_dataAreaRect;
-(void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(/*^block*/id)arg1 ;
-(void)_layoutYAxisAccessoryViewsForChartRect:(CGRect)arg1 ;
-(void)_layoutLegendsForChartRect:(CGRect)arg1 ;
-(void)_layoutOverlayView;
-(void)_hideTilesWithForce;
-(BOOL)measuringStartupTime;
-(void)setLastEndTime:(double)arg1 ;
-(void)_startupTimerCallback:(id)arg1 ;
-(void)setStartupTimer:(NSTimer *)arg1 ;
-(double)lastEndTime;
-(void)setMeasuringStartupTime:(BOOL)arg1 ;
-(BOOL)_seriesGroupHasLegendEntries:(id)arg1 ;
-(void)_createLegendForSeriesGroup:(id)arg1 ;
-(long long)xAxisDateZoom;
-(UIEdgeInsets)_currentLegendInsets;
-(void)_updateLegendForSeriesGroup:(id)arg1 ;
-(double)_inactiveRightAreaForRect:(CGRect)arg1 ;
-(HKLocationSpan)_locationSpanForSeriesGroupRow:(long long)arg1 chartRect:(CGRect)arg2 ;
-(void)_setYAxisAccessoryViews:(id)arg1 ;
-(CGRect)_yAxisRectForSeriesGroupRow:(long long)arg1 chartRect:(CGRect)arg2 ;
-(void)removeSeries;
-(id)_graphSeriesForZoom:(long long)arg1 seriesGroupRow:(long long)arg2 ;
-(void)_reloadViewScope;
-(void)_markTilesDirtyWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishSelection;
-(void)_clearRenderViewIfNecessary;
-(void)setChartableValueRange:(HKValueRange *)arg1 ;
-(void)_updateAxisZoomScaleValueRange;
-(id)_actualVisibleRangeFromEffectiveVisibleRange:(id)arg1 dataAreaRect:(CGRect)arg2 ;
-(void)_setVisibleRangesForEffectiveRangeCadence:(id)arg1 ;
-(id)_findActualAxisRangeFromVisibleRanges;
-(void)_updateRangesForEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3 ;
-(void)_updateZoomForParameters;
-(void)_autoScaleXAxis;
-(void)_scrollToCurrentVisibleRangeAnimated:(BOOL)arg1 ;
-(void)_updateEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3 virtualLeftMarginWidth:(double)arg4 virtualRightMarginWidth:(double)arg5 ;
-(id)_rangeFromRange:(id)arg1 withStartOfRange:(id)arg2 ;
-(BOOL)_compareRange:(id)arg1 toRange:(id)arg2 ;
-(BOOL)_setRangesForActiveVisibleRange:(id)arg1 ;
-(BOOL)_compareChartDate:(id)arg1 toDate:(id)arg2 ;
-(void)_updateGraphViewConfiguration;
-(BOOL)_axisRangeIsDateRange;
-(BOOL)_tilesAreEnabled;
-(void)_notifyDelegateSeriesUpdate:(id)arg1 newDataArrived:(BOOL)arg2 ;
-(BOOL)tileScrollingOverride;
-(long long)_groupRowForSeries:(id)arg1 ;
-(void)setTilesTransientDisabled:(BOOL)arg1 ;
-(id)_yAxisRangeForSynchronizedAxesForDateZoom:(long long)arg1 chartRect:(CGRect)arg2 seriesGroup:(id)arg3 ;
-(void)_autoScaleYAxisIfNecessaryForGroupRow:(long long)arg1 chartRect:(CGRect)arg2 ;
-(void)_forceYAxisAutoScaleForSeriesGroupRow:(long long)arg1 chartRect:(CGRect)arg2 animated:(BOOL)arg3 ;
-(void)_renderSelectionLineWithContext:(CGContextRef)arg1 ;
-(CGAffineTransform)_xAxisCoordinateTransform;
-(BOOL)_needsYAxisUpdateDuringRender;
-(BOOL)_configureYAxisViewIfNeeded;
-(void)_drawOverlaysIfNeeded:(id)arg1 ;
-(void)_renderYAxisGridlinesInContext:(CGContextRef)arg1 chartRect:(CGRect)arg2 withBlendMode:(int)arg3 ;
-(void)_renderXAxisGridlinesInContext:(CGContextRef)arg1 withBlendMode:(int)arg2 ;
-(void)_renderVirtualMarginGridLines:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)_renderVirtualMarginInRect:(CGRect)arg1 context:(CGContextRef)arg2 marginStyle:(long long)arg3 ;
-(BOOL)enableInteractiveSelectionLine;
-(BOOL)_simultaneousAxesAreEqualForSeriesGroup:(id)arg1 ;
-(id)_seriesForCommonAxesForSeriesGroup:(id)arg1 ;
-(id)_visibleSeriesForSeriesGroup:(id)arg1 ;
-(BOOL)contentOffsetIsSet;
-(BOOL)_renderXAxisLabelAndGridsNeedsNewRendererInContext:(CGContextRef)arg1 ;
-(void)_autoScaleYAxisIfNecessaryForAllGroupsForChartRect:(CGRect)arg1 ;
-(void)_renderSeriesWithContext:(CGContextRef)arg1 secondaryRenderContext:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)_renderVirtualMarginsWithContext:(CGContextRef)arg1 ;
-(void)_renderBaselineWithContext:(CGContextRef)arg1 chartRect:(CGRect)arg2 ;
-(void)_renderDataAreaDividersWithContext:(CGContextRef)arg1 ;
-(void)_renderYAxisLabelsInContext:(CGContextRef)arg1 chartRect:(CGRect)arg2 ;
-(void)_renderYAxisDividersWithContext:(CGContextRef)arg1 ;
-(void)_handleTilesInitialRender;
-(void)_recordLastRenderTime;
-(double)tileZoomScaleOverride;
-(CGPoint)tileContentOffsetOverride;
-(id)_effectiveVisibleRangeFromActualVisibleRange:(id)arg1 ;
-(void)_updateDateZoomIfNecessary;
-(void)_showTiles;
-(void)_touchTilesForContentOffset:(CGPoint)arg1 applyHysteresis:(BOOL)arg2 ;
-(void)_updateLegendsForAllSeriesGroups;
-(void)_hideTiles;
-(void)_notifyDelegateOfFinishUserScrolling;
-(void)_installAccessoryViews;
-(void)_restoreDestinationActiveRange;
-(void)_snapXAxisRangeToPreservedRange;
-(void)_preserveDestinationActiveRange:(id)arg1 ;
-(void)_loadSeriesForZoom:(long long)arg1 ;
-(void)_createLegendsIfNecessary;
-(void)_notifyDateZoomDidChangeFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(double)_maxTimeThreshold;
-(HKValueRange *)actualAxisRange;
-(void)setDestinationEffectiveVisibleRangeActive:(HKValueRange *)arg1 ;
-(HKValueRange *)destinationEffectiveVisibleRangeActive;
-(void)_updateGraphViewConfigurationIfNecessary;
-(BOOL)disableXAxis;
-(double)_renderXAxisLabelsInContext:(CGContextRef)arg1 ;
-(void)forceYAxisAutoScaleAnimated:(BOOL)arg1 ;
-(void)_tapOnViewAction:(id)arg1 ;
-(void)_notifyDelegateOfTapOnYAxis;
-(void)_layoutDetailView;
-(void)_toggleStickySelectionAction:(id)arg1 ;
-(void)_selectionRecognizerDidBeginWithTouchPoint:(CGPoint)arg1 ;
-(void)_activateStickySelection;
-(void)_selectionRecognizerDidMoveWithTouchPoints:(id)arg1 ;
-(long long)_currentSelectionStateForSeriesGroup:(id)arg1 ;
-(void)_enumerateSeriesSelectionRegionsForSeriesGroup:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_selectionRecognizerDidUpdate:(id)arg1 ;
-(void)_selectionRecognizerDidBegin:(id)arg1 ;
-(BOOL)_touchesActuallyMoved:(id)arg1 ;
-(void)_selectionRecognizerDidMove:(id)arg1 ;
-(void)_selectionRecognizerDidFinish:(id)arg1 ;
-(CGPoint)_touchPointForSeriesGroupIndex:(long long)arg1 originalTouchPoint:(CGPoint)arg2 ;
-(void)_handleStartTouchPoint:(CGPoint)arg1 seriesGroupRow:(long long)arg2 ;
-(void)_notifyDidBeginSelection;
-(id)_closestSeriesToPoint:(CGPoint)arg1 allSeries:(id)arg2 ;
-(id)_closestGraphSeriesForTouchPoint:(CGPoint)arg1 seriesGroup:(id)arg2 ;
-(void)setLastSingleSelectionXValue:(double)arg1 ;
-(BOOL)_stickySelectionActive;
-(double)lastSingleSelectionXValue;
-(void)_resetSingleSelectionXValue;
-(id)_newPointSelectionContextsWithTouchPoints:(id)arg1 updateViewStates:(BOOL)arg2 ;
-(BOOL)_selectionContextsNotPreviouslySelected:(id)arg1 ;
-(void)_notifyDidUpdateSelectionWithPointContext:(id)arg1 ;
-(void)_updateSelectionContextStateWithTouchPoint:(CGPoint)arg1 seriesGroup:(id)arg2 ;
-(SCD_Struct_HK16)_closestDataPointPathToPoint:(CGPoint)arg1 seriesGroupRow:(long long)arg2 seriesInGroup:(id)arg3 minimumXDistance:(double)arg4 xDistanceOut:(double*)arg5 ;
-(id)_pointSelectionContextWithPathRange:(SCD_Struct_HK11)arg1 touchPoints:(id)arg2 seriesGroupRow:(long long)arg3 seriesInGroup:(id)arg4 ;
-(void)_deselectAllSeriesWithAlpha:(double)arg1 offScreenIndicatorAlpha:(double)arg2 seriesGroup:(id)arg3 ;
-(void)_moveSeriesToFront:(id)arg1 ;
-(BOOL)multiSeriesSelection;
-(id)_multiSeriesSelectionContextsWithTouchPoints:(id)arg1 updateViewStates:(BOOL)arg2 ;
-(id)_oneSeriesSelectionContextsWithTouchPoints:(id)arg1 updateViewStates:(BOOL)arg2 ;
-(id)_valueForXAxisLocation:(double)arg1 ;
-(void)_notifyDidEndSelection;
-(void)_deactivateStickySelection;
-(void)setOutsideViewTapDetector:(HKOutsideViewTapDetector *)arg1 ;
-(BOOL)_graphViewIsConfigured;
-(BOOL)tilesWaitingForInitialRender;
-(long long)tileInitialRedrawCount;
-(void)setTileInitialRedrawCount:(long long)arg1 ;
-(BOOL)_tilesConfigurableAfterInitialRender;
-(void)setTilesWaitingForInitialRender:(BOOL)arg1 ;
-(BOOL)_tilesReconfigurableAfterInitialRender;
-(void)setTileColumns:(long long)arg1 ;
-(void)setTileWidthInPoints:(double)arg1 ;
-(void)setTileColumnHysteresis:(long long)arg1 ;
-(void)setTileFirstColumn:(long long)arg1 ;
-(void)setTileLastColumn:(long long)arg1 ;
-(NSMutableDictionary *)tilesByColumnNumber;
-(void)setTilesByColumnNumber:(NSMutableDictionary *)arg1 ;
-(CGPoint)_contentOffsetForActualViewRange;
-(double)tileWidthInPoints;
-(long long)tileColumns;
-(long long)tileFirstColumn;
-(long long)tileColumnHysteresis;
-(long long)tileLastColumn;
-(CGRect)_tileScreenRectForColumn:(long long)arg1 ;
-(BOOL)tilesHidden;
-(void)setTileMarkDirtyCompletion:(id)arg1 ;
-(void)_handleMarkDirtyCompletion;
-(id)tileMarkDirtyCompletion;
-(void)setTileContentOffsetOverride:(CGPoint)arg1 ;
-(void)setTileZoomScaleOverride:(double)arg1 ;
-(void)setTileScrollingOverride:(BOOL)arg1 ;
-(void)_tileHiddenFlag:(BOOL)arg1 ;
-(void)setTilesHidden:(BOOL)arg1 ;
-(CGRect)_overlayAreaRect;
-(long long)_ordinalForOverlayType:(long long)arg1 ;
-(long long)_overlayTypeForOverlaySeriesData:(id)arg1 ;
-(long long)previousOverlayType;
-(long long)_overlayEnvironmentType;
-(id)_nonOverlappingOverlaySeriesData:(id)arg1 ;
-(id)_overlappingOverlaySeriesData:(id)arg1 ;
-(void)_overlayViewsForOverlayData:(id)arg1 overlayView:(id)arg2 ;
-(NSMapTable *)overlayInteractiveViews;
-(BOOL)stillAnimating:(id)arg1 ;
-(void)drawToContext:(CGContextRef)arg1 tileRect:(CGRect)arg2 column:(long long)arg3 ;
-(void)overlayNeedsRedisplay;
-(long long)_countOfAllSeries;
-(id)_firstSelectionContext;
-(void)_cancelAllInFlightAutoscales;
-(double)yAxisWidth;
-(BOOL)isScrollViewDecelerating;
-(void)invalidateDataSourceCaches;
-(void)_pauseChartInteraction;
-(void)_resumeChartInteraction;
-(void)setVirtualLeftMargin:(double)arg1 ;
-(void)setVirtualRightMargin:(double)arg1 ;
-(void)setVirtualLeftMarginStyle:(long long)arg1 ;
-(void)setVirtualRightMarginStyle:(long long)arg1 ;
-(void)forceYAxisScaleToRange:(id)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_HK16)_closestDataPointPathToPoint:(CGPoint)arg1 seriesGroupRow:(long long)arg2 minimumXDistance:(double)arg3 xDistanceOut:(double*)arg4 ;
-(void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 ;
-(id)findVisibleBlockCoordinatesForPrimarySeries;
-(void)setPreviousDateZoom:(long long)arg1 ;
-(double)xAxisSpace;
-(void)setXAxisSpace:(double)arg1 ;
-(UIEdgeInsets)axisInset;
-(UIColor *)topMarginColor;
-(void)setTopMarginColor:(UIColor *)arg1 ;
-(unsigned long long)outlineOptions;
-(void)setOutlineOptions:(unsigned long long)arg1 ;
-(unsigned long long)featheringOptions;
-(void)setFeatheringOptions:(unsigned long long)arg1 ;
-(BOOL)disableScrolling;
-(BOOL)disableSelection;
-(double)hardLeftMarginWidth;
-(double)virtualLeftMarginWidth;
-(void)setVirtualLeftMarginWidth:(double)arg1 ;
-(double)virtualRightMarginWidth;
-(void)setVirtualRightMarginWidth:(double)arg1 ;
-(long long)virtualLeftMarginStyle;
-(long long)virtualRightMarginStyle;
-(long long)minimumDateZoom;
-(void)setMinimumDateZoom:(long long)arg1 ;
-(long long)maximumDateZoom;
-(void)setMaximumDateZoom:(long long)arg1 ;
-(long long)scrollingOptions;
-(void)setScrollingOptions:(long long)arg1 ;
-(BOOL)contentWidthFromTimeScope;
-(void)setContentWidthFromTimeScope:(BOOL)arg1 ;
-(BOOL)enableStickySelection;
-(void)setEnableStickySelection:(BOOL)arg1 ;
-(HKMultiTouchPressGestureRecognizer *)multiTouchGestureRecognizer;
-(BOOL)enableZoomInGesture;
-(void)setEnableZoomInGesture:(BOOL)arg1 ;
-(void)setEnableInteractiveSelectionLine:(BOOL)arg1 ;
-(BOOL)tilingDisabled;
-(void)setTilingDisabled:(BOOL)arg1 ;
-(void)setContentOffsetIsSet:(BOOL)arg1 ;
-(NSSet *)yAxisAccessoryViews;
-(void)setYAxisAccessoryViews:(NSSet *)arg1 ;
-(HKOutsideViewTapDetector *)outsideViewTapDetector;
-(BOOL)tilesTransientDisabled;
@end

