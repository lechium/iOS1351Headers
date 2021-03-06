/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSSNewsTerminationItem : NSObject <NSCopying> {

	unsigned long long _processType;
	NSString* _bundleID;

}

@property (assign,nonatomic) unsigned long long processType;              //@synthesize processType=_processType - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithProcessType:(unsigned long long)arg1 bundleID:(id)arg2 ;
-(unsigned long long)processType;
-(void)setProcessType:(unsigned long long)arg1 ;
@end

