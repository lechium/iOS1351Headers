/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKCourseEnrollmentControllerDelegate.h>
#import <libobjc.A.dylib/CRKSettingsUIVisibilityProvider.h>

@class CRKUserDefaultsObject, CRKCourseEnrollmentController, NSString;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider> {

	CRKUserDefaultsObject* mUIPreviouslyVisible;
	CRKCourseEnrollmentController* mEnrollmentController;
	BOOL _settingsUIVisible;

}

@property (assign) BOOL settingsUIVisible;                          //@synthesize settingsUIVisible=_settingsUIVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)connectToDaemon;
-(BOOL)settingsUIVisible;
-(void)setSettingsUIVisible:(BOOL)arg1 ;
-(void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)arg1 ;
-(void)migrateOldUserDefaultsValues;
-(void)updateVisibilityState;
-(void)updatePreviouslyVisibleDefaultWithValue:(BOOL)arg1 ;
@end

