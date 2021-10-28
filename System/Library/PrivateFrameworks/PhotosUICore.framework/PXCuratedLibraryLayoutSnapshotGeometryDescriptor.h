/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDictionary, NSIndexSet;

@interface PXCuratedLibraryLayoutSnapshotGeometryDescriptor : NSObject {

	NSDictionary* _sectionGeometryDescriptorsByIndexPath;
	double _intersectionSpacing;
	unsigned long long _dataSourceIdentifier;
	unsigned long long _skimmingDataSourceIdentifier;
	long long _zoomLevel;
	CGPoint _offset;
	CGRect _visibleRect;

}

@property (nonatomic,readonly) unsigned long long dataSourceIdentifier;                      //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long skimmingDataSourceIdentifier;              //@synthesize skimmingDataSourceIdentifier=_skimmingDataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                          //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect;                                           //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                                 //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sections; 
-(id)init;
-(id)description;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(CGRect)visibleRect;
-(id)initWithLayout:(id)arg1 ;
-(NSIndexSet *)sections;
-(long long)zoomLevel;
-(unsigned long long)skimmingDataSourceIdentifier;
-(id)geometryDescriptorForSectionAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)extrapolateSectionsBetween:(long long)arg1 and:(long long)arg2 withAnchorSection:(long long)arg3 ;
-(void)compactifySectionsBeyondVisibleRectWithAnchorSection:(long long)arg1 ;
-(unsigned long long)dataSourceIdentifier;
@end
