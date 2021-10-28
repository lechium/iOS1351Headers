/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAssetDownloadStorageManagementPolicyInternal, NSString, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {

	AVAssetDownloadStorageManagementPolicyInternal* _storageManagementPolicy;

}

@property (nonatomic,copy,readonly) NSString * priority; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(id)_policyDictionary;
-(void)_setPolicyDictionary:(id)arg1 ;
@end
