/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>

@protocol SBUIBiometricResource;
@class NSString;

@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver> {

	id<SBUIBiometricResource> _biometricResource;
	BOOL _fired;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activate;
-(void)deactivate;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)biometricResource:(id)arg1 matchingEnabledDidChange:(BOOL)arg2 ;
-(void)_fire;
-(id)initWithBiometricResource:(id)arg1 ;
-(void)_checkForLockout;
@end

