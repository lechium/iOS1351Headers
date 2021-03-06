/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOResourceManifestUpdateAssertionRecord.h>

@class NSString;

@interface _GEOResourceManifestUpdateAssertionRecord : NSObject <GEOResourceManifestUpdateAssertionRecord> {

	NSString* _process;
	NSString* _reason;
	double _creationTimestamp;

}

@property (nonatomic,readonly) NSString * process;                         //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) double creationTimestamp;                   //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSString *)reason;
-(NSString *)process;
-(BOOL)isExpired;
-(id)initWithProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3 ;
-(double)creationTimestamp;
@end

