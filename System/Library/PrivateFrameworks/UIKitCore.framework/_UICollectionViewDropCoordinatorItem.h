/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIDragAnimating.h>

@class NSIndexPath, UIDragItem, UIDragPreviewTarget, _UIDropAnimationHandlers, NSString;

@interface _UICollectionViewDropCoordinatorItem : NSObject <UIDragAnimating> {

	BOOL _shouldRemainInHierarchy;
	int _kind;
	NSIndexPath* _destinationIndexPath;
	UIDragItem* _dragItem;
	UIDragPreviewTarget* _target;
	_UIDropAnimationHandlers* _animationHandlers;
	/*^block*/id _previewParametersProvider;

}

@property (assign,nonatomic,__weak) UIDragItem * dragItem;                              //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,copy) UIDragPreviewTarget * target;                                //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) int kind;                                                  //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) _UIDropAnimationHandlers * animationHandlers;              //@synthesize animationHandlers=_animationHandlers - In the implementation block
@property (nonatomic,copy) id previewParametersProvider;                                //@synthesize previewParametersProvider=_previewParametersProvider - In the implementation block
@property (nonatomic,retain) NSIndexPath * destinationIndexPath;                        //@synthesize destinationIndexPath=_destinationIndexPath - In the implementation block
@property (assign,nonatomic) BOOL shouldRemainInHierarchy;                              //@synthesize shouldRemainInHierarchy=_shouldRemainInHierarchy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setTarget:(UIDragPreviewTarget *)arg1 ;
-(UIDragPreviewTarget *)target;
-(int)kind;
-(void)setKind:(int)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldRemainInHierarchy;
-(UIDragItem *)dragItem;
-(NSIndexPath *)destinationIndexPath;
-(void)setDestinationIndexPath:(NSIndexPath *)arg1 ;
-(_UIDropAnimationHandlers *)animationHandlers;
-(id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2 ;
-(void)setShouldRemainInHierarchy:(BOOL)arg1 ;
-(id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2 placeholderConfiguration:(id)arg3 ;
-(id)initWithDragItem:(id)arg1 target:(id)arg2 ;
-(void)setAnimationHandlers:(_UIDropAnimationHandlers *)arg1 ;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(id)previewParametersProvider;
-(void)setPreviewParametersProvider:(id)arg1 ;
@end

