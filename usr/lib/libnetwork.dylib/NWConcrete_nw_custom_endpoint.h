/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint {

	NSObject*<OS_dispatch_data> data;
	/*^block*/id resolver_block;
	unsigned type;

}
-(unsigned)type;
-(id)copyDictionary;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(id)initWithType:(unsigned)arg1 resolver:(/*^block*/id)arg2 data:(id)arg3 ;
@end

