/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPlacesMapLayoutResult;
@class NSMutableArray;

@interface PXPlacesMapLayoutDiffer : NSObject {

	NSMutableArray* _changes;
	id<PXPlacesMapLayoutResult> _sourceLayoutResult;
	id<PXPlacesMapLayoutResult> _targetLayoutResult;

}

@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> sourceLayoutResult;              //@synthesize sourceLayoutResult=_sourceLayoutResult - In the implementation block
@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> targetLayoutResult;              //@synthesize targetLayoutResult=_targetLayoutResult - In the implementation block
-(void)_computeChanges;
-(id)initWithSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2 ;
-(id)computeChanges;
-(void)_addTargetLayoutItem:(id)arg1 ;
-(void)_removeSourceLayoutItem:(id)arg1 ;
-(void)_relateSourceLayoutItem:(id)arg1 withTargetLayoutItem:(id)arg2 ;
-(id<PXPlacesMapLayoutResult>)sourceLayoutResult;
-(id<PXPlacesMapLayoutResult>)targetLayoutResult;
@end
