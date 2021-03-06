/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSCollectionLayoutSize, NSString, NSCollectionLayoutAnchor, NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSCollectionLayoutBoundarySupplementaryItem, NSCollectionLayoutDecorationItem;


@protocol _UICollectionLayoutAuxillaryItem <NSObject>
@property (nonatomic,readonly) NSCollectionLayoutSize * size; 
@property (nonatomic,readonly) NSString * elementKind; 
@property (nonatomic,readonly) NSCollectionLayoutAnchor * containerAnchor; 
@property (nonatomic,readonly) NSCollectionLayoutAnchor * itemAnchor; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets _effectiveContentInsets; 
@property (nonatomic,readonly) long long zIndex; 
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutBoundarySupplementaryItem * boundarySupplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutDecorationItem * decorationItem; 
@required
-(NSCollectionLayoutSize *)size;
-(NSCollectionLayoutItem *)item;
-(NSDirectionalEdgeInsets)contentInsets;
-(NSDirectionalEdgeInsets)_effectiveContentInsets;
-(long long)zIndex;
-(NSString *)elementKind;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(NSCollectionLayoutBoundarySupplementaryItem *)boundarySupplementaryItem;
-(NSCollectionLayoutDecorationItem *)decorationItem;

@end

