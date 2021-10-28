/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PICompositionSerializer : NSObject
+(void)initialize;
+(id)deserializeDictionaryFromData:(id)arg1 error:(out id*)arg2 ;
+(id)serializeDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)serializeComposition:(id)arg1 versionInfo:(id)arg2 serializerMetadata:(id)arg3 error:(out id*)arg4 ;
+(id)deserializeCompositionFromData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(out id*)arg4 ;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
+(id)deserializeCompositionFromAdjustments:(id)arg1 metadata:(id)arg2 formatIdentifier:(id)arg3 formatVersion:(id)arg4 error:(out id*)arg5 ;
+(id)serializeComposition:(id)arg1 versionInfo:(id)arg2 error:(out id*)arg3 ;
+(void)disableApertureEffects:(BOOL)arg1 ;
+(BOOL)validateCompositionWithMissingSource:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateAdjustmentsEnvelope:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(out id*)arg4 ;
+(void)_sanitizeComposition:(id)arg1 ;
@end
