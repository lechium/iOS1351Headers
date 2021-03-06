/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionCompositionalLayoutSolverResolveResult.h>

@protocol _UICollectionCompositionalLayoutSolverResolveResult <NSObject>
@property (nonatomic,readonly) CGPoint contentOffsetAdjustment; 
@property (nonatomic,readonly) CGSize contentSizeAdjustment; 
@required
-(CGPoint)contentOffsetAdjustment;
-(CGSize)contentSizeAdjustment;
-(id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1;
-(id)indexPathsForInsertedDecorationsForElementKind:(id)arg1;
-(id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1;
-(id)indexPathsForDeletedDecorationsForElementKind:(id)arg1;

@end


@class NSMutableDictionary, NSString;

@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject <_UICollectionCompositionalLayoutSolverResolveResult> {

	NSMutableDictionary* _insertedSupplementaryElementKindIndexPathsDict;
	NSMutableDictionary* _insertedDecorationElementKindIndexPathsDict;
	NSMutableDictionary* _deletedSupplementaryElementKindIndexPathsDict;
	NSMutableDictionary* _deletedDecorationElementKindIndexPathsDict;
	CGPoint _contentOffsetAdjustment;
	CGSize _contentSizeAdjustment;

}

@property (assign,nonatomic) CGPoint contentOffsetAdjustment;              //@synthesize contentOffsetAdjustment=_contentOffsetAdjustment - In the implementation block
@property (assign,nonatomic) CGSize contentSizeAdjustment;                 //@synthesize contentSizeAdjustment=_contentSizeAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGPoint)contentOffsetAdjustment;
-(void)setContentOffsetAdjustment:(CGPoint)arg1 ;
-(CGSize)contentSizeAdjustment;
-(void)setContentSizeAdjustment:(CGSize)arg1 ;
-(id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1 ;
-(id)indexPathsForInsertedDecorationsForElementKind:(id)arg1 ;
-(id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1 ;
-(id)indexPathsForDeletedDecorationsForElementKind:(id)arg1 ;
-(void)addDeletedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(BOOL)arg3 ;
-(void)addInsertedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(BOOL)arg3 ;
@end

