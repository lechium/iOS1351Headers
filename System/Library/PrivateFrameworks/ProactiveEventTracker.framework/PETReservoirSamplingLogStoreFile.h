/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <libobjc.A.dylib/PETReservoirSamplingLogStore.h>

@class NSString;

@interface PETReservoirSamplingLogStoreFile : NSObject <PETReservoirSamplingLogStore> {

	NSString* _path;
	void* _ptr;
	unsigned long long _mapLen;
	int _fd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)lock;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)currentLength;
-(SCD_Struct_PE8*)remap:(unsigned long long*)arg1 ;
-(SCD_Struct_PE8*)headerMap:(unsigned long long*)arg1 ;
-(BOOL)changeLength:(unsigned long long)arg1 ;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(/*function pointer*/void**)arg2 ;
-(BOOL)attemptToRecreate;
-(void)_unmap;
@end

