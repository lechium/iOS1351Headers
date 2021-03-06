/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>
#import <libobjc.A.dylib/HDRestorableIterator.h>

@class NSArray, HDProfile, HKSortedQueryAnchor, NSMutableArray, HDSortedSampleIterator, NSString, HKSample;

@interface HDMultiTypeSortedSampleIterator : NSObject <HDSampleIterator, HDRestorableIterator> {

	NSArray* _sampleQueryDescriptions;
	NSArray* _sortDescriptors;
	long long _bufferSize;
	HDProfile* _profile;
	HKSortedQueryAnchor* _anchor;
	NSMutableArray* _iterators;
	HDSortedSampleIterator* _nextIterator;
	BOOL _isInitialized;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
+(id)_upstreamIteratorsWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(long long)arg4 profile:(id)arg5 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(long long)objectID;
-(HKSample *)sample;
-(BOOL)advanceWithError:(id*)arg1 ;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 bufferSize:(long long)arg3 profile:(id)arg4 ;
-(BOOL)_prepareIteratorsWithError:(id*)arg1 ;
-(id)initForCopying;
-(BOOL)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2 ;
-(id)iteratorStateData;
@end

