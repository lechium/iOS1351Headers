/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSArray;

@interface MediaControlsHardwareVolumeManager : NSObject {

	NSObject*<OS_dispatch_queue> _avSystemControllerQueue;
	NSMapTable* _assertions;
	NSArray* _volumeButtonConsumerInvalidators;

}

@property (nonatomic,retain) NSMapTable * assertions;                                 //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSArray * volumeButtonConsumerInvalidators;              //@synthesize volumeButtonConsumerInvalidators=_volumeButtonConsumerInvalidators - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMapTable *)assertions;
-(void)setAssertions:(NSMapTable *)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(void)registerClient:(id)arg1 forRoute:(id)arg2 ;
-(void)_updateVolumeControlsForRoute:(id)arg1 ;
-(void)_relinquishHardwareVolumeButtons;
-(void)_requestHardwareVolumeButtons;
-(id)requestVolumeControlsForRoute:(id)arg1 ;
-(NSArray *)volumeButtonConsumerInvalidators;
-(void)setVolumeButtonConsumerInvalidators:(NSArray *)arg1 ;
@end

