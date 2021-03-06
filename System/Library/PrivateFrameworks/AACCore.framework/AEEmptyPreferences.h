/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AEPreferences.h>

@class NSString;

@interface AEEmptyPreferences : NSObject <AEPreferences>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisableContinuity:(BOOL)arg1 ;
-(void)setPresentShields:(BOOL)arg1 ;
-(BOOL)shouldPresentShields;
-(void)setRestrictFrontmostApp:(BOOL)arg1 ;
-(BOOL)shouldRestrictFrontmostApp;
-(void)setCreateAssessmentFile:(BOOL)arg1 ;
-(BOOL)shouldCreateAssessmentFile;
-(void)setDisableSiri:(BOOL)arg1 ;
-(BOOL)shouldDisableSiri;
-(BOOL)shouldDisableContinuity;
-(void)setScrubPasteboard:(BOOL)arg1 ;
-(BOOL)shouldScrubPasteboard;
-(void)setRestrictNetworkAccess:(BOOL)arg1 ;
-(BOOL)shouldRestrictNetworkAccess;
-(void)setPauseMedia:(BOOL)arg1 ;
-(BOOL)shouldPauseMedia;
-(void)setStopAirPlayBeforehand:(BOOL)arg1 ;
-(BOOL)shouldStopAirplayBeforehand;
-(void)setWhitelistHotkeys:(BOOL)arg1 ;
-(BOOL)shouldWhitelistHotkeys;
-(void)setRestrictContentCapture:(BOOL)arg1 ;
-(BOOL)shouldRestrictContentCapture;
-(void)setDisableTrackpadLookup:(BOOL)arg1 ;
-(BOOL)shouldDisableTrackpadLookup;
@end

