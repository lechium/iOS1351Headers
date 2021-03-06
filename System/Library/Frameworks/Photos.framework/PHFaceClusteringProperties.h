/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHFacePropertySet.h>

@class PHFaceprint, NSString;

@interface PHFaceClusteringProperties : PHFacePropertySet {

	PHFaceprint* _faceprint;
	NSString* _groupingIdentifier;

}

@property (nonatomic,readonly) PHFaceprint * faceprint;                    //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) NSString * groupingIdentifier;              //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
+(id)propertiesToFetch;
+(id)entityName;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(PHFaceprint *)faceprint;
-(NSString *)groupingIdentifier;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
@end

