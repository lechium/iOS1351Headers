/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface ENSimulator : NSObject {

	NSMutableSet* _activeClients;
	unsigned _dbCount;
	int _dbFD;
	void* _dbMapMem;
	unsigned long long _dbMapLen;
	unsigned* _dbSortedIndexes;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _rpiPath;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * rpiPath;                                        //@synthesize rpiPath=_rpiPath - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)_detectionSessionTearDown:(const char*)arg1 ;
-(BOOL)_detectionSessionSetUpIfNeeded:(id*)arg1 ;
-(BOOL)detectionSessionStartWithClient:(id)arg1 error:(id*)arg2 ;
-(void)detectionSessionEndWithClient:(id)arg1 ;
-(unsigned long long)detectionSessionCheckKeys:(id)arg1 error:(id*)arg2 ;
-(NSString *)rpiPath;
-(void)setRpiPath:(NSString *)arg1 ;
@end
