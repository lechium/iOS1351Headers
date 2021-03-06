/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXNewMagazineGrid;

@interface PXNewMagazineRectArray : NSObject {

	unsigned long long _currentIndex;
	unsigned long long _size;
	PXNewMagazineGrid* _tileGrid;
	BOOL _isPerfectEnding;
	double _score;
	unsigned long long _endingType;
	PXMagazineRect* _rects;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) double score;                               //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long endingType;              //@synthesize endingType=_endingType - In the implementation block
@property (nonatomic,readonly) PXMagazineRect* rects;                    //@synthesize rects=_rects - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(void)reset;
-(double)score;
-(void)setScore:(double)arg1 ;
-(PXMagazineRect*)rects;
-(void)addRect:(PXMagazineRect)arg1 ;
-(PXMagazineRect)rectAtIndex:(unsigned long long)arg1 ;
-(BOOL)nextEmptyTileX:(long long*)arg1 Y:(long long*)arg2 maxWidth:(long long*)arg3 ;
-(BOOL)isPerfectEnding;
-(BOOL)isGoodEnding;
-(unsigned long long)endingType;
-(unsigned long long)rowsUsed;
-(void)removeLastRect;
-(id)initWithSize:(unsigned long long)arg1 tileGrid:(id)arg2 ;
-(id)immutableCopyForCurrentRectsCount;
-(double)tileDensity;
-(BOOL)isEqualToRectArray:(id)arg1 ;
-(void)setEndingType:(unsigned long long)arg1 ;
@end

