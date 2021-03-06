/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIIdentifierDiffer, UIDiffableDataSourceInfo;
@class NSSet;

@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {

	id<_UIIdentifierDiffer> _differ;
	id<UIDiffableDataSourceInfo> _beforeInfo;
	id<UIDiffableDataSourceInfo> _afterInfo;
	NSSet* _movePairs;
	BOOL _didShortCircuit;

}

@property (nonatomic,readonly) NSSet * movePairs;                 //@synthesize movePairs=_movePairs - In the implementation block
@property (nonatomic,readonly) BOOL didShortCircuit;              //@synthesize didShortCircuit=_didShortCircuit - In the implementation block
-(id)initWithItemDiffer:(id)arg1 beforeDataSourceInfo:(id)arg2 afterDataSourceInfo:(id)arg3 ;
-(NSSet *)movePairs;
-(id)_computeMovePairsFoundation;
-(id)_computeMovePairsSTL;
-(BOOL)didShortCircuit;
@end

