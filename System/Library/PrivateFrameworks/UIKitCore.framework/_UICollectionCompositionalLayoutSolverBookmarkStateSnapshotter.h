/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UICollectionSectionSolutionBookmark;

@interface _UICollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject {

	_UICollectionSectionSolutionBookmark* _bookmark;
	long long _originalSectionIndex;

}

@property (nonatomic,readonly) long long originalSectionIndex;              //@synthesize originalSectionIndex=_originalSectionIndex - In the implementation block
-(id)initWithBookmark:(id)arg1 originalSectionIndex:(long long)arg2 ;
-(long long)originalSectionIndex;
-(void)applyStateToBookmark:(id)arg1 ;
@end
