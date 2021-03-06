/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBModelProperties.h>

@class NSMutableDictionary, NSUUID, NSString, HMFVersion, NSSet, HMBModelContainer;

@interface HMBModel : HMFObject <HMFLogging, HMBModelProperties> {

	NSMutableDictionary* _hmbReserved;
	NSUUID* _hmbModelID;
	NSUUID* _hmbParentModelID;
	NSString* _hmbType;
	HMFVersion* _hmbDataVersion;
	unsigned long long _hmbRecordRow;
	NSSet* _hmbUnavailableProperties;
	NSSet* _hmbReadOnlyProperties;
	HMBModelContainer* _hmbModelContainer;

}

@property (nonatomic,retain) NSMutableDictionary * hmbReserved;                         //@synthesize hmbReserved=_hmbReserved - In the implementation block
@property (assign,nonatomic,__weak) HMBModelContainer * hmbModelContainer;              //@synthesize hmbModelContainer=_hmbModelContainer - In the implementation block
@property (nonatomic,retain) HMFVersion * hmbDataVersion;                               //@synthesize hmbDataVersion=_hmbDataVersion - In the implementation block
@property (nonatomic,retain) NSUUID * hmbModelID;                                       //@synthesize hmbModelID=_hmbModelID - In the implementation block
@property (nonatomic,retain) NSUUID * hmbParentModelID;                                 //@synthesize hmbParentModelID=_hmbParentModelID - In the implementation block
@property (nonatomic,retain) NSString * hmbType;                                        //@synthesize hmbType=_hmbType - In the implementation block
@property (nonatomic,retain) NSSet * hmbUnavailableProperties;                          //@synthesize hmbUnavailableProperties=_hmbUnavailableProperties - In the implementation block
@property (nonatomic,retain) NSSet * hmbReadOnlyProperties;                             //@synthesize hmbReadOnlyProperties=_hmbReadOnlyProperties - In the implementation block
@property (assign,nonatomic) unsigned long long hmbRecordRow;                           //@synthesize hmbRecordRow=_hmbRecordRow - In the implementation block
@property (assign,nonatomic) BOOL hmbExternallyFetched; 
@property (nonatomic,readonly) NSSet * hmbDependentUUIDs; 
@property (nonatomic,readonly) NSString * hmbCanonicalType; 
@property (nonatomic,readonly) NSSet * hmbSetProperties; 
@property (nonatomic,readonly) HMFVersion * hmbContainerDataVersion; 
@property (nonatomic,readonly) NSString * hmbDescription; 
@property (nonatomic,readonly) BOOL hmbIsModelReadOnly; 
@property (nonatomic,readonly) BOOL hmbIsModelGenericRepresentation; 
@property (nonatomic,retain) HMFVersion * hmbIgnoredBefore; 
@property (nonatomic,readonly) BOOL hmbIgnoreModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)properties;
+(id)shortDescription;
+(id)sort:(id)arg1 ;
+(id)logCategory;
+(id)hmbProperties;
+(id)hmbExternalRecordType;
+(id)hmbQueries;
+(id)hmbMutableModelClassesWithQueries;
+(Class)hmbGenericRepresentation;
+(id)hmbReadOnlyBefore;
+(id)hmbPropertyNames;
+(BOOL)hmbShouldLogPrivateInformation;
+(id)formattedStringForValue:(id)arg1 ;
+(void)setHmbShouldLogPrivateInformation:(BOOL)arg1 ;
+(id)hmbModelClassesWithQueries;
+(void)hmbResetModelsWithQueries;
+(id)hmbSchemaHashRoot;
+(BOOL)propertyDiffersFrom:(id)arg1 to:(id)arg2 ;
+(id)hmbExternalProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copy;
-(id)logIdentifier;
-(NSString *)hmbDescription;
-(NSString *)hmbCanonicalType;
-(NSUUID *)hmbModelID;
-(void)hmbAssociateWithContainer:(id)arg1 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 ;
-(id)hmbMerge:(id)arg1 isFromCloud:(BOOL)arg2 ;
-(NSString *)hmbType;
-(NSUUID *)hmbParentModelID;
-(id)hmbPropertyNamed:(id)arg1 ;
-(BOOL)hmbIsModelGenericRepresentation;
-(void)hmbSetProperty:(id)arg1 named:(id)arg2 ;
-(void)setHmbExternallyFetched:(BOOL)arg1 ;
-(void)setHmbReserved:(NSMutableDictionary *)arg1 ;
-(void)setHmbModelID:(NSUUID *)arg1 ;
-(void)setHmbParentModelID:(NSUUID *)arg1 ;
-(void)setHmbType:(NSString *)arg1 ;
-(void)setHmbDataVersion:(HMFVersion *)arg1 ;
-(NSMutableDictionary *)hmbReserved;
-(HMBModelContainer *)hmbModelContainer;
-(HMFVersion *)hmbContainerDataVersion;
-(void)setHmbModelContainer:(HMBModelContainer *)arg1 ;
-(BOOL)_validateType:(id)arg1 error:(id*)arg2 ;
-(id)hmbPrepareForStorageLocation:(unsigned long long)arg1 ;
-(HMFVersion *)hmbDataVersion;
-(id)validateType:(id)arg1 path:(id)arg2 ;
-(NSSet *)hmbUnavailableProperties;
-(NSSet *)hmbReadOnlyProperties;
-(BOOL)hmbPropertyWasSet:(id)arg1 ;
-(BOOL)hmbIgnoreModel;
-(HMFVersion *)hmbIgnoredBefore;
-(BOOL)hmbPropertyIsReadOnly:(id)arg1 ;
-(NSSet *)hmbSetProperties;
-(id)hmbPropertyNamed:(id)arg1 isSet:(BOOL*)arg2 ;
-(NSSet *)hmbDependentUUIDs;
-(void)dumpDebug:(id)arg1 ;
-(void)hmbUnsetPropertyNamed:(id)arg1 ;
-(id)hmbDefaultValueForPropertyNamed:(id)arg1 ;
-(BOOL)hmbPropertyIsAvailable:(id)arg1 ;
-(id)populateModelWithDictionary:(id)arg1 fromStorageLocation:(unsigned long long)arg2 ;
-(id)prepareForStorageLocation:(unsigned long long)arg1 using:(id)arg2 updatedModelIDs:(id)arg3 error:(id*)arg4 ;
-(BOOL)hmbIsModelReadOnly;
-(BOOL)hmbValidForStorage:(id)arg1 ;
-(BOOL)hmbIsDifferentFromModel:(id)arg1 differingFields:(id*)arg2 ;
-(void)setHmbIgnoredBefore:(HMFVersion *)arg1 ;
-(BOOL)hmbCanonicalTypeInferred;
-(BOOL)hmbExternallyFetched;
-(BOOL)hmbPropertyIsExternal:(id)arg1 ;
-(void)dumpDebug;
-(unsigned long long)hmbRecordRow;
-(void)setHmbRecordRow:(unsigned long long)arg1 ;
-(void)setHmbUnavailableProperties:(NSSet *)arg1 ;
-(void)setHmbReadOnlyProperties:(NSSet *)arg1 ;
@end

