/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet {

	NSData* _placeAnnotationData;

}

@property (nonatomic,readonly) NSData * placeAnnotationData;              //@synthesize placeAnnotationData=_placeAnnotationData - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
-(NSData *)placeAnnotationData;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

