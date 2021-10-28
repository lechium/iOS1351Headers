/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKDashboardLayout.h>

@class NSMutableDictionary, NSString;

@interface PKDashboardPassFlowLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, PKDashboardLayout> {

	BOOL _needsCustomLocation;
	BOOL _userIsActivelyDragging;
	BOOL _currentDraggingWentBelowThreshold;
	BOOL _userIsHoldingCardInCurrentDrag;
	BOOL _userWasHoldingCard;
	BOOL _bouncing;
	BOOL _showNonPassCells;
	double _revealingContentOffset;
	CGSize _passCellSize;
	NSMutableDictionary* _attributesPerIndexPath;
	CGSize _currentSize;
	BOOL _isCompactUI;
	BOOL _preventLayoutComputation;
	BOOL _fade;

}

@property (assign,nonatomic) BOOL fade;                             //@synthesize fade=_fade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(BOOL)fade;
-(void)passPanDidBegin;
-(void)passPanDidEnd;
-(void)_adjustItems:(id)arg1 withLateralMove:(double)arg2 ;
-(UIEdgeInsets)insetsForSection:(long long)arg1 ;
-(void)setFade:(BOOL)arg1 ;
-(void)revealContentAnimated:(BOOL)arg1 ;
-(void)hideContent;
-(id)_indexPathForPassGroup;
-(BOOL)_indexPathIsPassGroupIndexPath:(id)arg1 ;
-(id)_customAttribuesForPassAtTheTop:(id)arg1 ;
@end
