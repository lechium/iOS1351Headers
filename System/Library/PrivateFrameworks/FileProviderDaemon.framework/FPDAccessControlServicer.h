/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FPDAccessControlServicing.h>

@class FPDExtensionManager, FPDAccessControlStore;

@interface FPDAccessControlServicer : NSObject <FPDAccessControlServicing> {

	FPDExtensionManager* _extensionManager;
	FPDAccessControlStore* _accessStore;

}

@property (assign,nonatomic,__weak) FPDAccessControlStore * accessStore;                 //@synthesize accessStore=_accessStore - In the implementation block
@property (assign,nonatomic,__weak) FPDExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(/*^block*/id)arg1 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchEnumeratorForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)revokeAccessToAllBundlesCompletionHandler:(/*^block*/id)arg1 ;
-(void)setExtensionManager:(FPDExtensionManager *)arg1 ;
-(FPDExtensionManager *)extensionManager;
-(id)_lowerToUpperBundleIdentifiers;
-(id)initWithExtensionManager:(id)arg1 accessStore:(id)arg2 ;
-(void)accessibleItemsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FPDAccessControlStore *)accessStore;
-(void)setAccessStore:(FPDAccessControlStore *)arg1 ;
@end
