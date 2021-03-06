/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSEventHandling.h>

@protocol SBUIBiometricResource, BSInvalidatable;
@class NSMutableSet, NSHashTable, NSString;

@interface CSUserPresenceMonitor : NSObject <CSEventHandling> {

	id<SBUIBiometricResource> _biometricResource;
	NSMutableSet* _activationReasons;
	id<BSInvalidatable> _faceDetectAssertion;
	NSHashTable* _observers;
	BOOL _userPresenceDetectedSinceWake;

}

@property (nonatomic,readonly) BOOL userPresenceDetectedSinceWake;              //@synthesize userPresenceDetectedSinceWake=_userPresenceDetectedSinceWake - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)_handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)disableDetectionForReason:(id)arg1 ;
-(BOOL)userPresenceDetectedSinceWake;
-(BOOL)isUserPresenceDetectionSupported;
-(void)enableDetectionForReason:(id)arg1 ;
-(id)initWithBiometricResource:(id)arg1 ;
-(void)_updateFaceDetectionState;
-(void)_setUserPresenceDetectedSinceWake:(BOOL)arg1 ;
-(BOOL)_isFaceDetectPermitted;
@end

