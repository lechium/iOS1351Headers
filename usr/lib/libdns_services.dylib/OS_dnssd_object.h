/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libdns_services.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_dnssd_object.h>

@protocol OS_dnssd_object <NSObject>
@end


@class NSString;

@interface OS_dnssd_object : OS_object <OS_dnssd_object>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)redactedDescription;
@end

