/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXNumberFilter.h>

@class NSArray;

@interface PXCompoundNumberFilter : PXNumberFilter {

	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(double)updatedOutput;
@end
