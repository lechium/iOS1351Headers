/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSUUID, NSArray;


@protocol ACXSyncedApp <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSUUID * databaseUUID; 
@property (nonatomic,readonly) unsigned long long sequenceNumber; 
@property (nonatomic,copy,readonly) NSArray * counterpartIdentifiers; 
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL isDeletable; 
@required
-(NSString *)bundleIdentifier;
-(unsigned long long)sequenceNumber;
-(unsigned long long)applicationType;
-(BOOL)isDeletable;
-(NSArray *)counterpartIdentifiers;
-(NSUUID *)databaseUUID;
-(BOOL)isSystemApp;
-(id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
-(id)serializeAsRemoteApplication;

@end

