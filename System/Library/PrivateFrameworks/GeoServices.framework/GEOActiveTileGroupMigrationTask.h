/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GEOActiveTileGroupMigrationTaskOptions;


@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction; 
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options; 
@optional
-(id)stateWithHints:(os_state_hints_s*)arg1;

@required
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)cancel;
-(void)setOptions:(id)arg1;
-(id<NSObject>)transaction;
-(void)setTransaction:(id)arg1;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(void)populateTileGroup:(id)arg1;
-(void)removeOldData:(id)arg1;
-(long long)estimatedWeight;

@end
