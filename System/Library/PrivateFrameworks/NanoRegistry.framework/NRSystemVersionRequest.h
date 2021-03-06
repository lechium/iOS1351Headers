/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NRSystemVersionRequest.h>

@protocol NRSystemVersionRequest <NSObject>
@required
-(void)sendVersionRequestToCompanion;

@end


@class NSString;

@interface NRSystemVersionRequest : NSObject <NRSystemVersionRequest>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)connection;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)sendVersionRequestToCompanion;
@end

