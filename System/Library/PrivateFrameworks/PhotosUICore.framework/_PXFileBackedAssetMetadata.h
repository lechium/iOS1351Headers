/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDate, CLLocation;

@interface _PXFileBackedAssetMetadata : NSObject {

	NSDate* _date;
	CLLocation* _location;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(NSDate *)date;
-(CGSize)size;
-(CLLocation *)location;
-(void)setSize:(CGSize)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
@end

