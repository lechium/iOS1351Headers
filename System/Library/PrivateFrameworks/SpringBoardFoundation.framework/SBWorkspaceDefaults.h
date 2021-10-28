/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isMedusaEnabled,nonatomic,readonly) BOOL medusaEnabled; 
@property (nonatomic,readonly) long long medusaDeviceSimulation; 
@property (getter=isBreadcrumbDisabled,nonatomic,readonly) BOOL breadcrumbDisabled; 
-(void)setMedusaEnabled:(BOOL)arg1 ;
-(BOOL)isMedusaEnabled;
-(void)setBreadcrumbDisabled:(BOOL)arg1 ;
-(BOOL)isBreadcrumbDisabled;
-(void)setMedusaDeviceSimulation:(long long)arg1 ;
-(long long)medusaDeviceSimulation;
-(void)_bindAndRegisterDefaults;
@end
