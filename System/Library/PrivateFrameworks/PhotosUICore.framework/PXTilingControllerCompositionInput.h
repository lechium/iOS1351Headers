/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol PXTilingControllerCompositionInput <NSObject>
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) NSArray * tilingControllersRequestingFocus; 
@property (nonatomic,readonly) NSArray * invalidationContexts; 
@required
-(UIEdgeInsets)contentInset;
-(CGSize)referenceSize;
-(NSArray *)invalidationContexts;
-(CGRect*)contentBoundsForTilingController:(id)arg1;
-(CGRect*)scrollBoundsForTilingController:(id)arg1;
-(id)scrollInfoForTilingController:(id)arg1;
-(CGPoint*)preferredOriginForTilingController:(id)arg1;
-(CGPoint*)originForTilingController:(id)arg1;
-(CGRect*)convertRect:(CGRect)arg1 fromTilingController:(id)arg2;
-(id)convertScrollInfo:(id)arg1 fromTilingController:(id)arg2;
-(NSArray *)tilingControllersRequestingFocus;

@end
