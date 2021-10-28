/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectModel, NSString;

@interface PFCloudKitModelValidator : NSObject {

	NSManagedObjectModel* _model;
	NSString* _configurationName;
	BOOL _skipValueTransformerValidation;
	BOOL _validateLegacyMetadataAttributes;

}

@property (assign,nonatomic) BOOL skipValueTransformerValidation;                //@synthesize skipValueTransformerValidation=_skipValueTransformerValidation - In the implementation block
@property (assign,nonatomic) BOOL validateLegacyMetadataAttributes;              //@synthesize validateLegacyMetadataAttributes=_validateLegacyMetadataAttributes - In the implementation block
+(id)stringFromDeleteRule:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)_validateManagedObjectModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateEntities:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2 ;
-(BOOL)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id*)arg4 ;
-(BOOL)skipValueTransformerValidation;
-(void)setSkipValueTransformerValidation:(BOOL)arg1 ;
-(BOOL)validateLegacyMetadataAttributes;
-(void)setValidateLegacyMetadataAttributes:(BOOL)arg1 ;
@end
