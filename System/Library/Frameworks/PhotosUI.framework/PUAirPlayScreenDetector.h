/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUAirPlayScreenReceiver;
@class PUAirPlayScreenMap, NSArray;

@interface PUAirPlayScreenDetector : NSObject {

	id<PUAirPlayScreenReceiver> _receiver;
	PUAirPlayScreenMap* __detectedScreensMap;

}

@property (setter=_setDetectedScreensMap:,nonatomic,retain) PUAirPlayScreenMap * _detectedScreensMap;              //@synthesize _detectedScreensMap=__detectedScreensMap - In the implementation block
@property (assign,nonatomic,__weak) id<PUAirPlayScreenReceiver> receiver;                                          //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,readonly) NSArray * availableScreens; 
-(id)init;
-(id<PUAirPlayScreenReceiver>)receiver;
-(void)setReceiver:(id<PUAirPlayScreenReceiver>)arg1 ;
-(NSArray *)availableScreens;
-(BOOL)shouldIgnoreScreen:(id)arg1 ;
-(void)_scanForAvailableScreensIfNeeded;
-(void)_setUpScreenNotifications;
-(void)_detectedNewScreen:(id)arg1 ;
-(void)_lostScreen:(id)arg1 ;
-(PUAirPlayScreenMap *)_detectedScreensMap;
-(void)_setDetectedScreensMap:(id)arg1 ;
@end

