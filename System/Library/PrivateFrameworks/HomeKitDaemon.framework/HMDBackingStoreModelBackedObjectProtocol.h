/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID;


@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
@optional
-(BOOL)isBackingStorageEqual:(id)arg1;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;

@required
-(NSUUID *)modelIdentifier;
-(Class)modelClass;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;

@end

