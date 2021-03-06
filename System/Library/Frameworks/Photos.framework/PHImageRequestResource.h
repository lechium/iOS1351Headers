/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLResourceIdentity.h>

@protocol PLUniformTypeIdentifierIdentity;
@class PLPhotoLibrary, NSString;

@interface PHImageRequestResource : NSObject <PLResourceIdentity> {

	PLPhotoLibrary* _photoLibrary;
	unsigned _resourceType;
	unsigned _version;
	unsigned _recipeID;
	unsigned _orientation;
	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
	long long _unorientedWidth;
	long long _unorientedHeight;

}

@property (nonatomic,readonly) unsigned resourceType;                                                    //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) unsigned version;                                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned recipeID;                                                        //@synthesize recipeID=_recipeID - In the implementation block
@property (nonatomic,readonly) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;              //@synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID - In the implementation block
@property (nonatomic,readonly) unsigned orientation;                                                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long unorientedWidth;                                                //@synthesize unorientedWidth=_unorientedWidth - In the implementation block
@property (nonatomic,readonly) long long unorientedHeight;                                               //@synthesize unorientedHeight=_unorientedHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageRequestResourceForDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4 ;
-(NSString *)description;
-(unsigned)version;
-(unsigned)orientation;
-(unsigned)resourceType;
-(id)initWithResource:(id)arg1 ;
-(unsigned)recipeID;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
@end

