/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@class _DKEventStream, NSDateInterval, NSString, NSPredicate, NSArray;

@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery> {

	BOOL _includeLocalResults;
	BOOL _includeRemoteResults;
	_DKEventStream* _stream;
	NSDateInterval* _interval;
	/*^block*/id _histogramHandler;
	NSString* _customIdentifier;
	unsigned long long _minimumOccurrencesForInclusion;
	NSPredicate* _predicate;
	NSArray* _valueKeyPaths;

}

@property (nonatomic,retain) _DKEventStream * stream;                                        //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSDateInterval * interval;                                      //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSString * customIdentifier;                                    //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeLocalResults;                                       //@synthesize includeLocalResults=_includeLocalResults - In the implementation block
@property (assign,nonatomic) BOOL includeRemoteResults;                                      //@synthesize includeRemoteResults=_includeRemoteResults - In the implementation block
@property (assign,nonatomic) unsigned long long minimumOccurrencesForInclusion;              //@synthesize minimumOccurrencesForInclusion=_minimumOccurrencesForInclusion - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * valueKeyPaths;                                        //@synthesize valueKeyPaths=_valueKeyPaths - In the implementation block
@property (nonatomic,copy) id histogramHandler;                                              //@synthesize histogramHandler=_histogramHandler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 withPredicate:(id)arg3 ;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 ;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 predicate:(id)arg3 valueKeyPaths:(id)arg4 ;
+(id)histogramQueryForPersistedHistogramsForStream:(id)arg1 withCustomIdentifier:(id)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSDateInterval *)interval;
-(void)setInterval:(NSDateInterval *)arg1 ;
-(_DKEventStream *)stream;
-(NSString *)customIdentifier;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(void)setStream:(_DKEventStream *)arg1 ;
-(id)_defaultValueKeyPaths;
-(void)setValueKeyPaths:(NSArray *)arg1 ;
-(void)setIncludeLocalResults:(BOOL)arg1 ;
-(NSArray *)valueKeyPaths;
-(BOOL)includeLocalResults;
-(BOOL)includeRemoteResults;
-(id)_valueForEvent:(id)arg1 ;
-(id)_constructFetchRequestPredicate;
-(id)_histogramFromManagedObjects:(id)arg1 ;
-(id)_histogramFromValueCounts:(id)arg1 ;
-(id)_histogramFromEvents:(id)arg1 ;
-(id)_fetchRemoteResultsWithStorage:(id)arg1 error:(id*)arg2 ;
-(id)histogramHandler;
-(void)setHistogramHandler:(id)arg1 ;
-(void)setIncludeRemoteResults:(BOOL)arg1 ;
-(unsigned long long)minimumOccurrencesForInclusion;
-(void)setMinimumOccurrencesForInclusion:(unsigned long long)arg1 ;
@end

