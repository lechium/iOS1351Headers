/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXContextualNotificationDelegate.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@protocol PUOneUpSuggestionsControllerDelegate;
@class PUOneUpSuggestionsProvider, PUBrowsingViewModel, PUAssetReference, NSMutableDictionary, NSString;

@interface PUOneUpSuggestionsController : NSObject <PXContextualNotificationDelegate, PUBrowsingViewModelChangeObserver> {

	BOOL _willPerformUpdates;
	BOOL _isPerformingUpdates;
	SCD_Struct_PU13 _needsUpdateFlags;
	SCD_Struct_PU28 _delegateRespondsTo;
	BOOL _viewVisible;
	BOOL _inFocus;
	BOOL _focusedLongEnough;
	PUOneUpSuggestionsProvider* _suggestionsProvider;
	PUBrowsingViewModel* _browsingViewModel;
	id<PUOneUpSuggestionsControllerDelegate> _delegate;
	PUAssetReference* _focusedAssetReference;
	double _lastFocusedAssetReferenceChangeTime;
	NSMutableDictionary* _suggestionInfos;

}

@property (assign,getter=isInFocus,nonatomic) BOOL inFocus;                                         //@synthesize inFocus=_inFocus - In the implementation block
@property (nonatomic,retain) PUAssetReference * focusedAssetReference;                              //@synthesize focusedAssetReference=_focusedAssetReference - In the implementation block
@property (assign,nonatomic) double lastFocusedAssetReferenceChangeTime;                            //@synthesize lastFocusedAssetReferenceChangeTime=_lastFocusedAssetReferenceChangeTime - In the implementation block
@property (assign,getter=isFocusedLongEnough,nonatomic) BOOL focusedLongEnough;                     //@synthesize focusedLongEnough=_focusedLongEnough - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * suggestionInfos;                               //@synthesize suggestionInfos=_suggestionInfos - In the implementation block
@property (nonatomic,readonly) PUOneUpSuggestionsProvider * suggestionsProvider;                    //@synthesize suggestionsProvider=_suggestionsProvider - In the implementation block
@property (nonatomic,readonly) PUBrowsingViewModel * browsingViewModel;                             //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpSuggestionsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                                 //@synthesize viewVisible=_viewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PUOneUpSuggestionsControllerDelegate>)delegate;
-(void)setDelegate:(id<PUOneUpSuggestionsControllerDelegate>)arg1 ;
-(void)invalidateLayout;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2 ;
-(id)preferredContainerViewForContextualNotification:(id)arg1 ;
-(long long)preferredAnimationForContextualNotification:(id)arg1 ;
-(BOOL)contextualNotification:(id)arg1 shouldPassthroughPoint:(CGPoint)arg2 inCoordinateSpace:(id)arg3 ;
-(void)contextualNotificationWasTapped:(id)arg1 ;
-(void)contextualNotificationWasDiscarded:(id)arg1 ;
-(void)contextualNotificationDidDisappear:(id)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(id)initWithSuggestionsProvider:(id)arg1 browsingViewModel:(id)arg2 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(void)setInFocus:(BOOL)arg1 ;
-(void)setFocusedAssetReference:(PUAssetReference *)arg1 ;
-(void)setLastFocusedAssetReferenceChangeTime:(double)arg1 ;
-(void)setFocusedLongEnough:(BOOL)arg1 ;
-(void)invalidateSuggestions;
-(void)_updateSuggestions;
-(void)invalidateLayoutForAssetReference:(id)arg1 ;
-(void)hideSuggestionForAssetReference:(id)arg1 ;
-(void)markSuggestionAsSeenForAssetReference:(id)arg1 ;
-(id)_suggestionInfoForAssetReference:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_removeSuggestionInfoForAssetReference:(id)arg1 ;
-(void)_handleDataSourceChange:(id)arg1 ;
-(BOOL)_canBeginDisplayingSuggestionsForAssetReference:(id)arg1 ;
-(BOOL)_canKeepDisplayingSuggestionsForAssetReference:(id)arg1 ;
-(void)_requestSuggestionForAssetReference:(id)arg1 ;
-(void)_handleSuggestion:(id)arg1 error:(id)arg2 forAssetReference:(id)arg3 ;
-(id)_assetReferenceForContextualNotification:(id)arg1 ;
-(void)_invalidateFocusedAssetReference;
-(void)_updateFocusedAssetReferenceIfNeeded;
-(void)_invalidateFocusedLongEnough;
-(void)_updateFocusedLongEnoughIfNeeded;
-(void)_invalidateActiveSuggestionsWindow;
-(void)_updateActiveSuggestionsWindowIfNeeded;
-(void)_invalidateInFocus;
-(void)_updateInFocus;
-(void)_invalidateSuggestionsVisibility;
-(void)_dismissSuggestionInfo:(id)arg1 ;
-(PUOneUpSuggestionsProvider *)suggestionsProvider;
-(BOOL)isViewVisible;
-(BOOL)isInFocus;
-(PUAssetReference *)focusedAssetReference;
-(double)lastFocusedAssetReferenceChangeTime;
-(BOOL)isFocusedLongEnough;
-(NSMutableDictionary *)suggestionInfos;
@end
