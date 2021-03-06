/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ASDAppQuery, NSArray;

@interface HKWatchAppAvailability : NSObject {

	NSString* _bundleID;
	ASDAppQuery* _query;
	NSArray* __test_apps;

}

@property (nonatomic,copy) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) ASDAppQuery * query;               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * _test_apps;              //@synthesize _test_apps=__test_apps - In the implementation block
-(ASDAppQuery *)query;
-(void)setQuery:(ASDAppQuery *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSArray *)_test_apps;
-(id)findApplicationIn:(id)arg1 ;
-(void)appInstallStateOnWatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)set_test_apps:(NSArray *)arg1 ;
@end

