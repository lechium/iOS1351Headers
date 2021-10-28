/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBApplicationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL forcesMedusaAdoption; 
@property (nonatomic,readonly) BOOL ignoresDeclaredNetworkUsage; 
@property (nonatomic,readonly) BOOL shouldAllowScreenshotsInLoginWindow; 
@property (assign,nonatomic) NSString * bundleIdentifierToForceHomeAffordanceInset; 
@property (nonatomic,readonly) BOOL shouldAllowUseOfNonRecapPPT; 
@property (nonatomic,readonly) BOOL shouldShowInternalApplications; 
@property (nonatomic,readonly) BOOL shouldShowNonDefaultSystemApplications; 
-(void)setIgnoresDeclaredNetworkUsage:(BOOL)arg1 ;
-(BOOL)ignoresDeclaredNetworkUsage;
-(void)setShouldShowNonDefaultSystemApplications:(BOOL)arg1 ;
-(BOOL)shouldShowNonDefaultSystemApplications;
-(void)setShouldAllowScreenshotsInLoginWindow:(BOOL)arg1 ;
-(BOOL)shouldAllowScreenshotsInLoginWindow;
-(void)setBundleIdentifierToForceHomeAffordanceInset:(NSString *)arg1 ;
-(NSString *)bundleIdentifierToForceHomeAffordanceInset;
-(void)setShouldShowInternalApplications:(BOOL)arg1 ;
-(BOOL)shouldShowInternalApplications;
-(void)setForcesMedusaAdoption:(BOOL)arg1 ;
-(BOOL)forcesMedusaAdoption;
-(void)setShouldAllowUseOfNonRecapPPT:(BOOL)arg1 ;
-(BOOL)shouldAllowUseOfNonRecapPPT;
-(void)_bindAndRegisterDefaults;
@end
