/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray;

@interface BWStreamStartStopSynchronizer : NSObject {

	NSDictionary* _streamStatesByPortType;
	float _timeoutInSeconds;
	BOOL _masterStartedGroupEntered;
	NSArray* _synchronizationSlavesOrderedByPriority;

}

@property (assign,nonatomic) BOOL waitForMasterAEToSettle; 
@property (nonatomic,retain) NSArray * synchronizationSlavesOrderedByPriority; 
+(void)initialize;
-(void)dealloc;
-(BOOL)waitForMasterAEToSettle;
-(void)setWaitForMasterAEToSettle:(BOOL)arg1 ;
-(id)initWithStreams:(id)arg1 timeoutInSeconds:(float)arg2 ;
-(void)setSynchronizationSlavesOrderedByPriority:(NSArray *)arg1 ;
-(NSArray *)synchronizationSlavesOrderedByPriority;
-(BOOL)streamWillStart:(id)arg1 ;
-(void)streamDidStart:(id)arg1 ;
-(BOOL)streamWillStop:(id)arg1 ;
-(void)streamDidStop:(id)arg1 ;
@end
