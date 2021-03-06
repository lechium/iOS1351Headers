/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PHCPLAssetResource.h>

@class PHAssetResourceCreationOptions, NSData, NSURL, NSString;

@interface PHExternalAssetResource : NSObject <PHCPLAssetResource> {

	BOOL _duplicateAllowsReadAccess;
	BOOL _isLibraryAssetResource;
	long long _resourceType;
	PHAssetResourceCreationOptions* _creationOptions;
	unsigned long long _cplResourceType;
	NSData* _data;
	NSURL* _fileURL;
	long long _pixelWidth;
	long long _pixelHeight;

}

@property (nonatomic,readonly) long long type;                                                                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) PHAssetResourceCreationOptions * creationOptions;                                    //@synthesize creationOptions=_creationOptions - In the implementation block
@property (nonatomic,readonly) BOOL isLibraryAssetResource;                                                     //@synthesize isLibraryAssetResource=_isLibraryAssetResource - In the implementation block
@property (assign,setter=_setDuplicateAllowsReadAccess:,nonatomic) BOOL duplicateAllowsReadAccess;              //@synthesize duplicateAllowsReadAccess=_duplicateAllowsReadAccess - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) long long pixelWidth;                                                              //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,nonatomic) long long pixelHeight;                                                             //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long cplResourceType;                                              //@synthesize cplResourceType=_cplResourceType - In the implementation block
+(unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1 ;
+(id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(BOOL)arg2 error:(id*)arg3 ;
-(id)init;
-(long long)type;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)originalFilename;
-(PHAssetResourceCreationOptions *)creationOptions;
-(long long)pixelWidth;
-(void)setPixelWidth:(long long)arg1 ;
-(long long)pixelHeight;
-(void)setPixelHeight:(long long)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(id)initWithResourceType:(long long)arg1 ;
-(id)propertyListRepresentation;
-(unsigned long long)cplResourceType;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(BOOL)duplicateAllowsReadAccess;
-(void)_setDuplicateAllowsReadAccess:(BOOL)arg1 ;
-(void)setCreationOptions:(PHAssetResourceCreationOptions *)arg1 ;
-(BOOL)isLibraryAssetResource;
@end

