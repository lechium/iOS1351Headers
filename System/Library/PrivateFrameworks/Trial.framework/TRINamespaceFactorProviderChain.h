/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRINamespaceFactorProviding.h>

@class NSArray, NSString;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {

	NSArray* _directoryChain;
	NSArray* _providerChain;
	unsigned _namespaceId;

}

@property (readonly) unsigned namespaceId;                          //@synthesize namespaceId=_namespaceId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factorProviderWithNamespaceId:(unsigned)arg1 ;
+(id)factorProviderWithNamespaceId:(unsigned)arg1 directoryChain:(id)arg2 ;
-(id)treatmentId;
-(unsigned)namespaceId;
-(unsigned)namespaceVersion;
-(unsigned)namespaceCompatibilityVersion;
-(id)levelForFactor:(id)arg1 ;
-(id)initWithNamespaceId:(unsigned)arg1 directoryChain:(id)arg2 ;
-(void)resetProviderChain;
-(id)treatmentIdForFactor:(id)arg1 ;
@end

