/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSString, NSNumber;

@interface HDConceptIndexEntry : NSObject {

	NSUUID* _sampleUUID;
	long long _conceptIdentifier;
	long long _conceptVersion;
	NSString* _keyPath;
	unsigned long long _compoundIndex;
	unsigned long long _type;
	NSNumber* _ontologyVersion;

}

@property (nonatomic,copy,readonly) NSUUID * sampleUUID;                      //@synthesize sampleUUID=_sampleUUID - In the implementation block
@property (nonatomic,readonly) long long conceptIdentifier;                   //@synthesize conceptIdentifier=_conceptIdentifier - In the implementation block
@property (nonatomic,readonly) long long conceptVersion;                      //@synthesize conceptVersion=_conceptVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundIndex;              //@synthesize compoundIndex=_compoundIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ontologyVersion;               //@synthesize ontologyVersion=_ontologyVersion - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(NSString *)keyPath;
-(unsigned long long)compoundIndex;
-(NSUUID *)sampleUUID;
-(long long)conceptIdentifier;
-(long long)conceptVersion;
-(NSNumber *)ontologyVersion;
-(id)initWithSampleUUID:(id)arg1 conceptIdentifier:(long long)arg2 conceptVersion:(long long)arg3 keyPath:(id)arg4 compoundIndex:(unsigned long long)arg5 type:(unsigned long long)arg6 ontologyVersion:(id)arg7 ;
@end
