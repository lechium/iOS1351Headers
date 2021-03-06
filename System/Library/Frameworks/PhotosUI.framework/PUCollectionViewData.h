/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface PUCollectionViewData : NSObject {

	long long _cachedPageCount;
	CGRect _currentContentBounds;
	NSMutableArray* _itemLayoutAttributes;
	NSMutableDictionary* _itemLayoutAttributesByIndexPath;

}

@property (nonatomic,readonly) long long cachedPageCount;                                          //@synthesize cachedPageCount=_cachedPageCount - In the implementation block
@property (assign,nonatomic) CGRect currentContentBounds;                                          //@synthesize currentContentBounds=_currentContentBounds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemLayoutAttributes;                              //@synthesize itemLayoutAttributes=_itemLayoutAttributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemLayoutAttributesByIndexPath;              //@synthesize itemLayoutAttributesByIndexPath=_itemLayoutAttributesByIndexPath - In the implementation block
-(id)init;
-(void)invalidate;
-(long long)cachedPageCount;
-(BOOL)hasReferenceIndexPath;
-(CGRect)currentContentBounds;
-(void)setCurrentContentBounds:(CGRect)arg1 ;
-(NSMutableArray *)itemLayoutAttributes;
-(NSMutableDictionary *)itemLayoutAttributesByIndexPath;
@end

