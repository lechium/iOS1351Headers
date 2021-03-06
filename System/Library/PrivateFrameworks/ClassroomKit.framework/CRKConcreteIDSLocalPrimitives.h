/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKIDSLocalPrimitives.h>

@class NSDictionary, NSString, IDSService;

@interface CRKConcreteIDSLocalPrimitives : NSObject <CRKIDSLocalPrimitives> {

	NSString* _serviceName;
	IDSService* _service;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) IDSService * service;                       //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(IDSService *)service;
-(NSDictionary *)debugInfo;
-(id)listenForMessageSendsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)sendMessage:(id)arg1 toDestinationAddress:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)accountsDebugInfo;
-(id)accountForSourceAppleID:(id)arg1 ;
-(id)listenForMessageReceivesWithHandler:(/*^block*/id)arg1 ;
-(id)listenForAccountAdditionsWithHandler:(/*^block*/id)arg1 ;
@end

