/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IXAppInstallCoordinatorObserver.h>

@protocol IXInitiatingOrUpdatingCoordinator;
@class NSString, IXAppInstallCoordinator;

@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver> {

	/*^block*/id _completion;
	NSString* _bundleID;
	IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> _coordinator;

}

@property (nonatomic,copy) id completion;                                                                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setCoordinator:(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)arg1 ;
-(IXAppInstallCoordinator*<IXInitiatingOrUpdatingCoordinator>)coordinator;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
@end

