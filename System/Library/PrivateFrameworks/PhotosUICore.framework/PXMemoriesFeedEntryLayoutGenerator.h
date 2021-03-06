/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesSpec, NSIndexSet, NSDictionary;

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {

	CGSize _size;
	PXMemoriesSpec* _spec;
	NSIndexSet* _geometryKinds;
	CGRect _sectionHeaderRect;
	NSDictionary* _rectsByIndexByKind;
	BOOL _isPrepared;
	long long _layoutAxis;

}

@property (assign,nonatomic) long long layoutAxis;              //@synthesize layoutAxis=_layoutAxis - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(void)setLayoutAxis:(long long)arg1 ;
-(long long)layoutAxis;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)_prepareLayoutIfNeeded;
@end

