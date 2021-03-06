/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSArray, NSString, _HMContext, NSUUID, HMHome, HMMediaSystem, HMMutableArray;

@interface HMMediaSystemBuilder : NSObject <HMFLogging> {

	HMFUnfairLock* _lock;
	NSArray* _components;
	NSString* _name;
	NSString* _configuredName;
	_HMContext* _context;
	NSUUID* _uuid;
	NSUUID* _mediaSystemUUID;
	NSString* _builderSessionID;
	HMHome* _home;
	HMMediaSystem* _mediaSystem;
	HMMutableArray* _componentsArray;

}

@property (nonatomic,retain) _HMContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * mediaSystemUUID;                    //@synthesize mediaSystemUUID=_mediaSystemUUID - In the implementation block
@property (nonatomic,retain) NSString * builderSessionID;                   //@synthesize builderSessionID=_builderSessionID - In the implementation block
@property (nonatomic,__weak,readonly) HMHome * home;                        //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMMediaSystem * mediaSystem;                 //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,retain) HMMutableArray * componentsArray;              //@synthesize componentsArray=_componentsArray - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * configuredName;                       //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,copy) NSArray * components;                            //@synthesize components=_components - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsMediaSystem:(id)arg1 ;
+(BOOL)canSupportMediaSystem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSArray *)components;
-(void)setContext:(_HMContext *)arg1 ;
-(HMHome *)home;
-(void)setComponents:(NSArray *)arg1 ;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMMutableArray *)componentsArray;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)setComponentsArray:(HMMutableArray *)arg1 ;
-(id)_initializeContext;
-(void)_commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)builderSessionID;
-(void)setBuilderSessionID:(NSString *)arg1 ;
-(NSUUID *)mediaSystemUUID;
-(HMMediaSystem *)mediaSystem;
-(void)_callCompletion:(/*^block*/id)arg1 builderSessionID:(id)arg2 error:(id)arg3 response:(id)arg4 ;
-(id)initWithMediaSystem:(id)arg1 ;
@end

