/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface WFStorageServiceRegistry : NSObject {

	NSArray* _registeredServices;

}

@property (nonatomic,readonly) NSArray * registeredServices;              //@synthesize registeredServices=_registeredServices - In the implementation block
@property (nonatomic,readonly) NSArray * storageServices; 
+(id)sharedRegistry;
+(void)registerStorageServiceClass:(Class)arg1 ;
+(void)registerAllActionKitStorageServiceClasses;
-(id)init;
-(NSArray *)storageServices;
-(id)storageServiceWithName:(id)arg1 ;
-(NSArray *)registeredServices;
@end

