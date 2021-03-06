/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTDelegatePackage;
@class NSString, MTEventHandlers, MTUtils, MTConfig, MTSystem;

@interface MTMetricsKitTemplate : NSObject {

	NSString* _topic;
	MTEventHandlers* _eventHandlers;
	MTUtils* _utils;
	MTConfig* _config;
	MTSystem* _system;
	id<MTDelegatePackage> _delegatePackage;

}

@property (nonatomic,retain) NSString * topic;                                   //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) MTConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) MTEventHandlers * eventHandlers;                    //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (nonatomic,retain) MTSystem * system;                                  //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) MTUtils * utils;                                    //@synthesize utils=_utils - In the implementation block
@property (nonatomic,retain) id<MTDelegatePackage> delegatePackage;              //@synthesize delegatePackage=_delegatePackage - In the implementation block
+(id)kitWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3 ;
-(MTConfig *)config;
-(void)setConfig:(MTConfig *)arg1 ;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(MTSystem *)system;
-(void)setSystem:(MTSystem *)arg1 ;
-(id)initWithTopic:(id)arg1 ;
-(MTEventHandlers *)eventHandlers;
-(id)initWithTopic:(id)arg1 delegatePackage:(id)arg2 ;
-(void)setEventHandlers:(MTEventHandlers *)arg1 ;
-(void)setUtils:(MTUtils *)arg1 ;
-(id<MTDelegatePackage>)delegatePackage;
-(MTUtils *)utils;
-(void)setDelegatePackage:(id<MTDelegatePackage>)arg1 ;
-(id)initWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3 ;
@end

