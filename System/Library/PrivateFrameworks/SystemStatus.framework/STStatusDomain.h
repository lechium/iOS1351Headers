/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/STStatusDomainClientHandle.h>

@protocol STStatusDomainServerHandle;
@class NSString;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle> {

	id<STStatusDomainServerHandle> _serverHandle;
	/*^block*/id _dataChangedBlock;

}

@property (nonatomic,__weak,readonly) id<STStatusDomainServerHandle> serverHandle;              //@synthesize serverHandle=_serverHandle - In the implementation block
@property (nonatomic,copy) id dataChangedBlock;                                                 //@synthesize dataChangedBlock=_dataChangedBlock - In the implementation block
@property (nonatomic,copy,readonly) id<STStatusDomainData> data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)statusDomainName;
-(id)init;
-(void)dealloc;
-(id<STStatusDomainData>)data;
-(id)initWithServerHandle:(id)arg1 ;
-(void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 ;
-(id<STStatusDomainServerHandle>)serverHandle;
-(id)dataChangedBlock;
-(void)setDataChangedBlock:(id)arg1 ;
-(void)observeDataWithBlock:(/*^block*/id)arg1 ;
@end

