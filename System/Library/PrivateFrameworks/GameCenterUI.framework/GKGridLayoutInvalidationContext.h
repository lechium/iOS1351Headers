/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateIncrementalReveal;
	BOOL _invalidateBoundsChange;
	BOOL _invalidatePlaceholderVisibility;
	BOOL _invalidatePinnableAreas;

}

@property (assign,nonatomic) BOOL invalidateIncrementalReveal;                  //@synthesize invalidateIncrementalReveal=_invalidateIncrementalReveal - In the implementation block
@property (assign,nonatomic) BOOL invalidateBoundsChange;                       //@synthesize invalidateBoundsChange=_invalidateBoundsChange - In the implementation block
@property (assign,nonatomic) BOOL invalidatePlaceholderVisibility;              //@synthesize invalidatePlaceholderVisibility=_invalidatePlaceholderVisibility - In the implementation block
@property (assign,nonatomic) BOOL invalidatePinnableAreas;                      //@synthesize invalidatePinnableAreas=_invalidatePinnableAreas - In the implementation block
-(BOOL)invalidateIncrementalReveal;
-(void)setInvalidateIncrementalReveal:(BOOL)arg1 ;
-(BOOL)invalidateBoundsChange;
-(void)setInvalidateBoundsChange:(BOOL)arg1 ;
-(BOOL)invalidatePlaceholderVisibility;
-(void)setInvalidatePlaceholderVisibility:(BOOL)arg1 ;
-(BOOL)invalidatePinnableAreas;
-(void)setInvalidatePinnableAreas:(BOOL)arg1 ;
@end
