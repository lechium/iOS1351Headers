/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreRecordMapping.h>

@class NSString, NSUUID, HMDBackingStoreCacheShareGroup, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping> {

	NSString* _recordName;
	NSUUID* _uuid;
	NSUUID* _parentUuid;
	NSString* _type;
	HMDBackingStoreCacheShareGroup* _share;
	HMDBackingStoreCacheGroup* _group;

}

@property (nonatomic,readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * recordName;                               //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUuid;                                 //@synthesize parentUuid=_parentUuid - In the implementation block
@property (nonatomic,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
-(NSString *)description;
-(NSString *)type;
-(NSUUID *)uuid;
-(NSString *)recordName;
-(HMDBackingStoreCacheGroup *)group;
-(HMDBackingStoreCacheShareGroup *)share;
-(NSUUID *)parentUuid;
-(id)initWithGroup:(id)arg1 share:(id)arg2 recordName:(id)arg3 uuid:(id)arg4 parentUuid:(id)arg5 type:(id)arg6 ;
@end
