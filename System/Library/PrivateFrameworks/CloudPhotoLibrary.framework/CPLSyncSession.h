/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLSyncSessionRescheduler;
@class NSDate, NSString;

@interface CPLSyncSession : NSObject {

	NSDate* _expectedDate;
	unsigned long long _sequenceNumber;
	id<CPLSyncSessionRescheduler> _rescheduler;

}

@property (nonatomic,readonly) NSDate * expectedDate;                                //@synthesize expectedDate=_expectedDate - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (getter=isDetached,nonatomic,readonly) BOOL detached; 
@property (nonatomic,readonly) BOOL shouldDefer; 
@property (nonatomic,readonly) BOOL mightNeedForegroundToStart; 
@property (nonatomic,readonly) NSString * whenItWillStartDescription; 
@property (nonatomic,retain) id<CPLSyncSessionRescheduler> rescheduler;              //@synthesize rescheduler=_rescheduler - In the implementation block
+(id)detachedSyncSession;
-(id)description;
-(BOOL)shouldDefer;
-(unsigned long long)sequenceNumber;
-(BOOL)isAfterDate:(id)arg1 ;
-(BOOL)isBeforeDate:(id)arg1 ;
-(BOOL)isDetached;
-(NSDate *)expectedDate;
-(id)initWithSequenceNumber:(unsigned long long)arg1 expectedDate:(id)arg2 ;
-(BOOL)isInMoreThanTimeInverval:(double)arg1 ;
-(BOOL)isInLessThanTimeInterval:(double)arg1 ;
-(void)dropExpectedDate;
-(void)deferWithBlock:(/*^block*/id)arg1 ;
-(void)sessionIsDone;
-(void)sessionWontHappen;
-(void)engineIsClosing;
-(BOOL)mightNeedForegroundToStart;
-(NSString *)whenItWillStartDescription;
-(id<CPLSyncSessionRescheduler>)rescheduler;
-(void)setRescheduler:(id<CPLSyncSessionRescheduler>)arg1 ;
@end

