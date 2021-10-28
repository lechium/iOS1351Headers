/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Silex/Silex-Structs.h>
@interface SXMosaicGalleryLayoutItem : NSObject {

	int _tileType;
	CGSize _dimensions;

}

@property (nonatomic,readonly) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) int tileType;                   //@synthesize tileType=_tileType - In the implementation block
-(id)description;
-(id)initWithDimensions:(CGSize)arg1 ;
-(double)aspectRatio;
-(CGSize)dimensions;
-(int)tileType;
@end
